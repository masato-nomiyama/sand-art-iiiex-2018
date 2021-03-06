// Copyright (C) 2018-Present Masato Nomiyama

int outputPin[] = {9, 10, 11, 13};
int count = 0;
int propagateNum = 4;
float propagateSpeed = 1.0 / 4;
int frequency = 256;
int wholeFrequency = frequency * ((propagateNum - 1) * propagateSpeed + 1.0);

#define TOUCHED 0
#define ACT 1
#define ACT_END 2
#define CLOSE 3
#define WAIT 4
int state = WAIT;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < sizeof(outputPin) / sizeof(outputPin[0]); i++) {
    pinMode(outputPin[i], OUTPUT);
  }
}

void loop() {
  // Receive touche state
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();
    Serial.println(incomingByte);

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
      analogWrite(outputPin[0], triangleSpike(phase(0)));
      analogWrite(outputPin[1], triangleSpike(phase(1)));
      analogWrite(outputPin[2], triangleSpike(phase(2)));
      analogWrite(outputPin[3], triangleSpike(phase(3)));
      count++;
      if (count >= wholeFrequency) {
        state = ACT_END;
      }
      break;
    case ACT_END:
      state = WAIT;
      break;
    case CLOSE:
      analogWrite(outputPin[0], random(48, 155));
      analogWrite(outputPin[1], random(48, 155));
      analogWrite(outputPin[2], random(48, 155));
      analogWrite(outputPin[3], random(48, 155));
      break;
    case WAIT:
      analogWrite(outputPin[0], 0);
      analogWrite(outputPin[1], 0);
      analogWrite(outputPin[2], 0);
      analogWrite(outputPin[3], 0);
      break;
    default:
      break;
  }
  delay(1);
}

float phase(int propagateOrder) {
  return (float)count / frequency - ((float)propagateOrder * propagateSpeed);
}

int triangle(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else if (phase <= 0.5) {
    return 255 * phase / 0.5;
  } else {
    return 255 * (1.0 - phase) / 0.5;
  }
}

int triangleSpike(float phase) {
  if (phase < 0 || phase > 1) {
    return 0;
  } else if (phase <= 0.25) {
    return 100 * phase / 0.25;
  } else if (phase <= 0.5) {
    return (255 - 100) * (phase - 0.25) / 0.25 + 100;
  } else if (phase <= 0.75) {
    return (255 - 100) * (0.75 - phase) / 0.25 + 100;
  } else {
    return 100 * (1.0 - phase) / 0.25;
  }
}
