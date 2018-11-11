// Copyright (C) 2018-Present Masato Nomiyama

// STATE
#define WAIT 0
#define CLOSE 1
#define TOUCHED 2
#define REST 3
#define ACT_WHEN_CLOSE 4
#define ACT_WHEN_TOUCHED 5
int state = WAIT;
int place = 0;

// MOVEMENT (unit: μs)
const unsigned long pwmLength = 10000;
const unsigned long waveLength = 512000;
const float propagateRate = 0.1;
const unsigned long restLength = waveLength * 1.5;
unsigned long t = 0;
unsigned long pwmPeriod = 0;
unsigned long wavePeriod = 0;
unsigned long propagateOffset = 0;

// I/O
int pins[] = { 2, 3, 4, 5 };
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

void setup() {
  Serial3.begin(9600);
  for (int i = 0; i < pinNum; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  if (Serial3.available() > 0) {
    incomingByte = Serial3.read();

    if (state < REST) {
      switch(incomingByte) {
        case 'a':
          state = WAIT;
          break;
        case 'b':
        case 'c':
        case 'd':
        case 'e':
          state = CLOSE;
          place = int(incomingByte - 'b');
          break;
        case 'f':
        case 'g':
        case 'h':
        case 'i':
          state = TOUCHED;
          place = int(incomingByte - 'f');
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
      break;
    }
    case CLOSE: {
      state = ACT_WHEN_CLOSE;
      start();
      break;
    }
    case TOUCHED: {
      state = ACT_WHEN_TOUCHED;
      start();
      break;
    }
    case ACT_WHEN_CLOSE: {
      float lastPhase = 1.0;
      switch(place) {
        case 0:
        case 1:
        case 2:
        case 3: {
          // Set phases
          float waveLengthRates[4] = {
            1.0 - propagateRate * 0.5,
            1.0,
            1.0,
            1.0 - propagateRate * 0.5
          };
          float phases[4] = {};
          lastPhase = setPhases(
            phases,
            waveLengthRates,
            sizeof(phases) / sizeof(float)
          );

          // Drive magnets
          int pinIndex1[] = { 0 };
          drive(triangleSpike, phases[0], 0.05,
            pinIndex1, sizeof(pinIndex1) / sizeof(int));
          int pinIndex2[] = { 1 };
          drive(triangleSpike, phases[1], 1.0,
            pinIndex2, sizeof(pinIndex2) / sizeof(int));
          int pinIndex3[] = { 3 };
          drive(triangleSpike, phases[2], 1.0,
            pinIndex3, sizeof(pinIndex3) / sizeof(int));
          int pinIndex4[] = { 2 };
          drive(triangleSpike, phases[3], 0.05,
            pinIndex4, sizeof(pinIndex4) / sizeof(int));

          break;
        }
        default: {
          break;
        }
      }
      update(lastPhase);
      break;
    }
    case ACT_WHEN_TOUCHED: {
      float lastPhase = 1.0;
      switch(place) {
        case 0:
        case 1:
        case 2:
        case 3:
          break;
      }
      update(lastPhase);
      break;
    }
    case REST: {
      if (t - wavePeriod >= restLength) {
        state = WAIT;
      }
      break;
    }
    default: {
      break;
    }
  }
}

// CORE
float setPhases(float *phases, float *waveLengthRates, unsigned int phaseNum) {
  float propagateOffset = 0;
  for (unsigned int i = 0; i < phaseNum; i++) {
    phases[i] = (float)((t - wavePeriod) - propagateOffset) / waveLength / waveLengthRates[i];
    propagateOffset += (float)waveLength * propagateRate * waveLengthRates[i];
  }
  return phases[phaseNum - 1];
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

void start() {
  pwmPeriod = t;
  wavePeriod = t;
  propagateOffset = 0;
}

void update(float lastPhase) {
  if (t - pwmPeriod >= pwmLength) {
    pwmPeriod = t;
  }
  if (lastPhase >= 1) {
    state = REST;
    start();
  }
}

void stop() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(pins[i], LOW);
  }
}
