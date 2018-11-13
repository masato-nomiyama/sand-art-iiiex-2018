// Copyright (C) 2018-Present Masato Nomiyama

float actWhenWaiting(int place) {
  float lastPhase = 1.0;

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
  drive(rectangle, phases[0], 1.0,
    pinIndex1, sizeof(pinIndex1) / sizeof(int));
  int pinIndex2[] = { 1 };
  drive(rectangle, phases[1], 1.0,
    pinIndex2, sizeof(pinIndex2) / sizeof(int));
  int pinIndex3[] = { 3 };
  drive(rectangle, phases[2], 1.0,
    pinIndex3, sizeof(pinIndex3) / sizeof(int));
  int pinIndex4[] = { 2 };
  drive(rectangle, phases[3], 1.0,
    pinIndex4, sizeof(pinIndex4) / sizeof(int));

  return lastPhase;
}
