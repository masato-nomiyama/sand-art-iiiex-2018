// Copyright (C) 2018-Present Masato Nomiyama

int outputPin[] = {4, 3, 2, 7, 6, 5, 8, 9, 10, 13, 12, 11};
int pinNum = sizeof(outputPin) / sizeof(outputPin[0]);
int *output = new int[pinNum];
int count = 0;
int frequency = 256;
int propagateSpeed = frequency / 3;
int propagateNum = 0;

#define TOUCHED 0
#define ACT 1
#define ACT_END 2
#define CLOSE 3
#define WAIT 4
int state = WAIT;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < pinNum; i++) {
    pinMode(outputPin[i], OUTPUT);
    output[i] = LOW;
  }
}

void loop() {
  // Receive touche state
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();

    if (state != ACT && state != ACT_END) {
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

  switch(state) {
    case TOUCHED:
      count = 0;
      state = ACT;
      break;
    case ACT:
      entry(0, phase(4));
      entry(1, phase(3));
      entry(2, phase(2));
      entry(3, phase(3));
      entry(4, phase(2));
      entry(5, phase(1));
      entry(6, phase(2));
      entry(7, phase(1));
      entry(8, phase(0));
      entry(9, phase(3));
      entry(10, phase(4));
      entry(11, phase(5));
      start();
      count++;
      if (phase(propagateNum) >= 1) {
        state = ACT_END;
      }
      break;
    case ACT_END:
      state = WAIT;
      break;
    case CLOSE:
      clear();
      break;
    case WAIT:
      clear();
      break;
    default:
      break;
  }
  delay(1);
}

float phase(int propagateOrder) {
  if (propagateOrder > propagateNum) {
    propagateNum = propagateOrder;
  }
  return (float)(count - propagateOrder * propagateSpeed) / frequency;
}

void entry(int id, float phase) {
  if (phase >= 0.0 && phase <= 2.0 / frequency) {
    output[id] = HIGH;
  }
}

void clear() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(outputPin[i], LOW);
  }
}

void start() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(outputPin[i], output[i]);
    output[i] = LOW;
  }
}
