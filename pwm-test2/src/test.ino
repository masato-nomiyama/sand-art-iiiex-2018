// Copyright (C) 2018-Present Masato Nomiyama

int outputPin[] = {9, 10, 11, 13};
int count = 0;
int frequency = 256;
float period;
float reduction = 1.0;

void setup() {
}

void loop() {
  analogWrite(outputPin[0], triangleSpike(phase(0.0)) / reduction);
  analogWrite(outputPin[1], triangleSpike(phase(-1.0 / 3)) / reduction);
  analogWrite(outputPin[2], triangleSpike(phase(-2.0 / 3)) / reduction);
  analogWrite(outputPin[3], triangleSpike(phase(-3.0 / 3)) / reduction);
  count++;
  count = count >= frequency ? count % frequency : count;
  delay(10);
}

float phase(float difference) {
  period = (float)count / frequency + difference;
  period = period < 0 ? ceil(-1 * period) + period : period;
  return period - floor(period);
}

int triangle(float phase) {
  if (phase <= 0.5) {
    return 255 * phase / 0.5;
  } else {
    return 255 * (1.0 - phase) / 0.5;
  };
}

int triangleSpike(float phase) {
  if (phase <= 0.25) {
    return 100 * phase / 0.25;
  } else if (phase <= 0.5) {
    return (255 - 100) * (phase - 0.25) / 0.25 + 100;
  } else if (phase <= 0.75) {
    return (255 - 100) * (0.75 - phase) / 0.25 + 100;
  } else {
    return 100 * (1.0 - phase) / 0.25;
  };
}
