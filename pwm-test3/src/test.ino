// Copyright (C) 2018-Present Masato Nomiyama

int outputPin[] = {9, 10, 11, 13};
int count = 0;
int propagateNum = 4;
float propagateSpeed = 1.0 / 4;
int frequency = 256;
int wholeFrequency = frequency * ((propagateNum - 1) * propagateSpeed + 1.0);
float reduction = 1.0;

float period;

void setup() {
}

void loop() {
  analogWrite(outputPin[0], triangleSpike(phase(0)) / reduction);
  analogWrite(outputPin[1], triangleSpike(phase(1)) / reduction);
  analogWrite(outputPin[2], triangleSpike(phase(2)) / reduction);
  analogWrite(outputPin[3], triangleSpike(phase(3)) / reduction);
  count++;
  count = count >= wholeFrequency ? count % wholeFrequency : count;
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
  };
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
  };
}
