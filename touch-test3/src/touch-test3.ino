// Copyright (C) 2018-Present Masato Nomiyama

// STATE
#define TOUCHED 0
#define CLOSE 1
#define WAIT 2
#define ACT_1 3
int state = WAIT;

// MOVEMENT (unit: μs)
const unsigned long pwmLength = 10000;
const unsigned long pulseLength = 512000;
const unsigned long propagateSpeed = pulseLength / 10;
unsigned long t = 0;
unsigned long pwmPeriod = 0;
unsigned long pulsePeriod = 0;
int propagateNum = 0;

// I/O
int outputPin[] = {2, 3, 4};
int pinNum = sizeof(outputPin) / sizeof(outputPin[0]);
char incomingByte;

// FUNCTION
void drive(int pin, float phase, float (*wave)(float));

void setup() {
  Serial.begin(250000);
  for (int i = 0; i < pinNum; i++) {
    pinMode(outputPin[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    if (state != ACT_1) {
      switch(incomingByte) {
        case 'a':
          state = WAIT;
          break;
        case 'b':
          state = CLOSE;
          break;
        case 'c':
          state = TOUCHED;
          break;
        default:
          break;
      }
    }
  }
  t = micros();
  switch(state) {
    case WAIT:
      stop();
      break;
    case CLOSE:
      start();
      drive(outputPin[0], phase(0), rectangle);
      drive(outputPin[1], phase(0), rectangle);
      drive(outputPin[2], phase(0), rectangle);

      update(CLOSE);
      break;
    case TOUCHED:
      state = ACT_1;
      start();
      break;
    case ACT_1:
      drive(outputPin[0], phase(0), triangleSpike);
      drive(outputPin[1], phase(1), triangleSpike);
      drive(outputPin[2], phase(2), triangleSpike);

      update(WAIT);
      break;
    default:
      break;
  }
}

// CORE
float phase(int propagateOrder) {
  if (propagateOrder > propagateNum) {
    propagateNum = propagateOrder;
  }
  return (
    ((t - pulsePeriod) - (float)propagateOrder * propagateSpeed) / pulseLength
  );
}

void start() {
  pwmPeriod = t;
  pulsePeriod = t;
  propagateNum = 0;
}

void drive(int pin, float phase, float (*wave)(float)) {
  if (t - pwmPeriod <= pwmLength * wave(phase)) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

void update(int callback) {
  if (t - pwmPeriod >= pwmLength) {
    pwmPeriod = t;
  }
  if (phase(propagateNum) >= 1) {
    state = callback;
  }
}

void stop() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(outputPin[i], LOW);
  }
}

// WAVE
float rectangle(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else {
    return 1.0;
  }
}

float triangle(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else if (phase <= 0.5) {
    return phase / 0.5;
  } else {
    return (1.0 - phase) / 0.5;
  }
}

float triangleSpike(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else if (phase <= 0.25) {
    return 0.4 * phase / 0.25;
  } else if (phase <= 0.5) {
    return (1.0 - 0.4) * (phase - 0.25) / 0.25 + 0.4;
  } else if (phase <= 0.75) {
    return (1.0 - 0.4) * (0.75 - phase) / 0.25 + 0.4;
  } else {
    return 0.4 * (1.0 - phase) / 0.25;
  }
}
