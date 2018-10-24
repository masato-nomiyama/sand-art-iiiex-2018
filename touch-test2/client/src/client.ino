// Copyright (C) 2018-Present Masato Nomiyama

#define INT_MAX 32767

int inputPin[] = {5, 4, 3, 2, 1, 0};
int outputPin[] = {3, 5, 6, 9, 10, 11};
int pinNum = sizeof(inputPin) / sizeof(inputPin[0]);
int frequency = 256;
int count[] = {frequency, frequency ,frequency, frequency};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < pinNum; i++) {
    pinMode(inputPin[i], INPUT);
    pinMode(outputPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < pinNum; i++) {
    if (analogRead(inputPin[i]) > 512) {
      count[i] = 0;
    }
    analogWrite(outputPin[i], triangleSpike((float)count[i] / frequency));
    count[i]++;
    if (count[i] >= INT_MAX) {
      count[i] = frequency;
    }
  }
  delay(10);
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
