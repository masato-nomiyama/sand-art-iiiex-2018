// Copyright (C) 2018-Present Masato Nomiyama

float actWhenWaiting(int place) {
  float lastPhase = 1.0;

  // Set phases
  float waveLengthRates[] = {
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
  int x1[] = { 0 };
  drive(rectangle, phases[0], 0,
    x1, sizeof(x1) / sizeof(int));
  int x2[] = { 1 };
  drive(rectangle, phases[1], 0,
    x2, sizeof(x2) / sizeof(int));
  int x3[] = { 3 };
  drive(rectangle, phases[2], 0,
    x3, sizeof(x3) / sizeof(int));
  int x4[] = { 2 };
  drive(rectangle, phases[3], 0,
    x4, sizeof(x4) / sizeof(int));

  return lastPhase;
}
