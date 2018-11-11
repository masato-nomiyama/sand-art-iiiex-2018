// Copyright (C) 2018-Present Masato Nomiyama

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
