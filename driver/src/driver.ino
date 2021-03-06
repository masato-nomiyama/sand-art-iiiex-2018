// Copyright (C) 2018-Present Masato Nomiyama

// STATE
#define WAIT 0
#define CLOSE 1
#define TOUCHED 2
#define ACT_WHEN_WAITING 3
#define ACT_WHEN_CLOSE 4
#define ACT_WHEN_TOUCHED 5
int state = WAIT;
int place = 0;
int lastPlace = -1;
int action = 0;
const unsigned long restLengthForReset = 1000000 * 1;
const unsigned long restLengthForAction = 1000000 * 5;

// MOVEMENT (unit: μs)
const unsigned long pwmLength = 10000;
const unsigned long waveLength = 500000;
const float propagateRate = 0.1;
unsigned long t = 0;
unsigned long pwmPeriod = 0;
unsigned long wavePeriod = 0;
unsigned long propagateOffset = 0;

// I/O
int pins[] = {34,54,30,63,62,53,26,10,2,35,11,46,22,6,55,31,7,42,18,16,51,27,3,41,36,12,47,23,61,56,32,8,43,19,17,52,28,4,40,37,13,48,24,58,50,33,9,44,20,60,49,29,5,39,57,45,25,59,38,21};
int pinNum = sizeof(pins) / sizeof(int);
char incomingByte;

// FUNCTION
void drive(
  float (*wave)(float),
  float phase,
  float powerRate,
  int *drivePins,
  unsigned int phaseNum
);
void execute(float (*act)(int, int), boolean shouldLoop);

void setup() {
  Serial3.begin(9600);
  for (int i = 0; i < pinNum; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  if (Serial3.available() > 0) {
    incomingByte = Serial3.read();

    if (state <= ACT_WHEN_CLOSE) {
      switch(incomingByte) {
        case 'a':
          lastPlace = -1;
          if (state != ACT_WHEN_WAITING && state != ACT_WHEN_CLOSE) {
            state = WAIT;
            action = (int)random(0, 100);
          }
          break;
        case 'b':
        case 'c':
        case 'd':
          if (state != ACT_WHEN_CLOSE) {
            place = incomingByte - 'b';
            if (place != lastPlace && lastPlace != 1) {
              state = CLOSE;
            }
            lastPlace = place;
          }
          break;
        case 'e':
        case 'f':
        case 'g':
          place = incomingByte - 'e';
          state = TOUCHED;
          lastPlace = place;
          break;
          break;
        default:
          break;
      }
    }
  }
  t = micros();
  switch(state) {
    case WAIT: {
      stop();
      if (t - wavePeriod >= restLengthForAction) {
        action = (int)random(0, 100);
        state = ACT_WHEN_WAITING;
        start();
      }
      break;
    }
    case CLOSE: {
      state = ACT_WHEN_CLOSE;
      stop();
      start();
      break;
    }
    case TOUCHED: {
      state = ACT_WHEN_TOUCHED;
      stop();
      start();
      break;
    }
    case ACT_WHEN_WAITING: {
      execute(actWhenWaiting, true);
      break;
    }
    case ACT_WHEN_CLOSE: {
      execute(actWhenClose, false);
      break;
    }
    case ACT_WHEN_TOUCHED: {
      execute(actWhenTouched, false);
      break;
    }
    default: {
      break;
    }
  }
}

// CORE
void initWaveLengthRates(float *waveLengthRates, unsigned int phaseNum, float value) {
  for (unsigned int i = 0; i < phaseNum; i++) {
    waveLengthRates[i] = value;
  }
}

void initWaveLengthRatesForAcceleration(
  float *waveLengthRates,
  unsigned int phaseNum,
  float acceleration,
  float limit
) {
  for (unsigned int i = 0; i < phaseNum; i++) {
    waveLengthRates[i] = 1.0 - propagateRate * acceleration * i;
    if (acceleration >= 0) {
      waveLengthRates[i] = waveLengthRates[i] <= limit ? limit : waveLengthRates[i];
    } else {
      waveLengthRates[i] = waveLengthRates[i] >= limit ? limit : waveLengthRates[i];
    }
  }
}

float setPhases(float *phases, float *waveLengthRates, unsigned int phaseNum) {
  float propagateOffset = 0;
  for (unsigned int i = 0; i < phaseNum; i++) {
    phases[i] = (float)((t - wavePeriod) - propagateOffset) / waveLength / waveLengthRates[i];
    propagateOffset += (float)waveLength * propagateRate * waveLengthRates[i];
  }
  return phases[phaseNum - 1];
}

float setDigitalPhases(float *phases, float *waveLengthRates, unsigned int phaseNum) {
  float propagateOffset = 0;
  for (unsigned int i = 0; i < phaseNum; i++) {
    phases[i] = (float)((t - wavePeriod) - propagateOffset) / waveLength / waveLengthRates[i];
    propagateOffset += (float)waveLength * waveLengthRates[i];
  }
  return phases[phaseNum - 1];
}

void start() {
  pwmPeriod = t;
  wavePeriod = t;
  propagateOffset = 0;
}

void drive(
  float (*wave)(float),
  float phase,
  float powerRate,
  int *pinIndex,
  unsigned int phaseNum
) {
  if (t - pwmPeriod < pwmLength * wave(phase) * powerRate) {
    for (unsigned int i = 0; i < phaseNum; i++) {
      digitalWrite(pins[pinIndex[i]], HIGH);
    }
  } else {
    for (unsigned int i = 0; i < phaseNum; i++) {
      digitalWrite(pins[pinIndex[i]], LOW);
    }
  }
}

void execute(float (*act)(int, int), boolean shouldLoop) {
  float lastPhase = act(place, action);
  if (t - pwmPeriod >= pwmLength) {
    pwmPeriod = t;
  }
  if (lastPhase >= 1) {
    if (!shouldLoop) {
      state = WAIT;
    } else {
      action = (int)random(0, 100);
      stop();
    }
    start();
  }
}

void stop() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(pins[i], LOW);
  }
}
