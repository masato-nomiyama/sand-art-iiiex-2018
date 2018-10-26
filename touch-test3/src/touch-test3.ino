// Copyright (C) 2018-Present Masato Nomiyama

// STATE
#define WAIT 0
#define CLOSE 1
#define TOUCHED 2
#define ACT_1 3
#define ACT_2 4
#define ACT_3 5
#define ACT_4 6
#define ACT_5 7
#define ACT_6 8
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
int outputPin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
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

    if (state < ACT_3) {
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
      state = ACT_1;
      start();
      break;
    case TOUCHED:
      state = random(ACT_3, ACT_6 + 1);
      start();
      break;
    case ACT_1:
      drive(outputPin[0], phase(0), rectangle);
      drive(outputPin[1], phase(0), rectangle);
      drive(outputPin[2], phase(0), rectangle);
      drive(outputPin[3], phase(0), rectangle);
      drive(outputPin[4], phase(0), rectangle);
      drive(outputPin[5], phase(0), rectangle);
      drive(outputPin[6], phase(0), rectangle);
      drive(outputPin[7], phase(0), rectangle);
      drive(outputPin[8], phase(0), rectangle);
      drive(outputPin[9], phase(0), rectangle);
      drive(outputPin[10], phase(0), rectangle);
      drive(outputPin[11], phase(0), rectangle);
      update(CLOSE);
      break;
    case ACT_2:
      drive(outputPin[0], phase(0), random);
      drive(outputPin[1], phase(0), random);
      drive(outputPin[2], phase(0), random);
      drive(outputPin[3], phase(0), random);
      drive(outputPin[4], phase(0), random);
      drive(outputPin[5], phase(0), random);
      drive(outputPin[6], phase(0), random);
      drive(outputPin[7], phase(0), random);
      drive(outputPin[8], phase(0), random);
      drive(outputPin[9], phase(0), random);
      drive(outputPin[10], phase(0), random);
      drive(outputPin[11], phase(0), random);
      update(CLOSE);
      break;
    case ACT_3:
      drive(outputPin[0], phase(0), triangleSpike);
      drive(outputPin[1], phase(0), triangleSpike);
      drive(outputPin[2], phase(0), triangleSpike);
      drive(outputPin[3], phase(1), triangleSpike);
      drive(outputPin[4], phase(1), triangleSpike);
      drive(outputPin[5], phase(1), triangleSpike);
      drive(outputPin[6], phase(2), triangleSpike);
      drive(outputPin[7], phase(2), triangleSpike);
      drive(outputPin[8], phase(2), triangleSpike);
      drive(outputPin[9], phase(3), triangleSpike);
      drive(outputPin[10], phase(3), triangleSpike);
      drive(outputPin[11], phase(3), triangleSpike);
      update(WAIT);
      break;
    case ACT_4:
      drive(outputPin[0], phase(0), triangleSpike);
      drive(outputPin[1], phase(1), triangleSpike);
      drive(outputPin[2], phase(2), triangleSpike);
      drive(outputPin[3], phase(3), triangleSpike);
      drive(outputPin[4], phase(4), triangleSpike);
      drive(outputPin[5], phase(5), triangleSpike);
      drive(outputPin[6], phase(6), triangleSpike);
      drive(outputPin[7], phase(7), triangleSpike);
      drive(outputPin[8], phase(8), triangleSpike);
      drive(outputPin[9], phase(9), triangleSpike);
      drive(outputPin[10], phase(10), triangleSpike);
      drive(outputPin[11], phase(11), triangleSpike);
      update(WAIT);
      break;
    case ACT_5:
      drive(outputPin[0], phase(0), triangleSpike);
      drive(outputPin[1], phase(1), triangleSpike);
      drive(outputPin[2], phase(2), triangleSpike);
      drive(outputPin[3], phase(5), triangleSpike);
      drive(outputPin[4], phase(4), triangleSpike);
      drive(outputPin[5], phase(3), triangleSpike);
      drive(outputPin[6], phase(6), triangleSpike);
      drive(outputPin[7], phase(7), triangleSpike);
      drive(outputPin[8], phase(8), triangleSpike);
      drive(outputPin[9], phase(11), triangleSpike);
      drive(outputPin[10], phase(10), triangleSpike);
      drive(outputPin[11], phase(9), triangleSpike);
      update(WAIT);
      break;
    case ACT_6:
      drive(outputPin[4], phase(0), triangleSpike);
      drive(outputPin[1], phase(1), triangleSpike);
      drive(outputPin[2], phase(1), triangleSpike);
      drive(outputPin[3], phase(1), triangleSpike);
      drive(outputPin[5], phase(1), triangleSpike);
      drive(outputPin[6], phase(1), triangleSpike);
      drive(outputPin[7], phase(1), triangleSpike);
      drive(outputPin[0], phase(2), triangleSpike);
      drive(outputPin[8], phase(2), triangleSpike);
      drive(outputPin[9], phase(2), triangleSpike);
      drive(outputPin[10], phase(2), triangleSpike);
      drive(outputPin[11], phase(3), triangleSpike);
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
  if (t - pwmPeriod < pwmLength * wave(phase)) {
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
float random(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else {
    return (float)random(40, 70) / 100;
  }
}

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
