// Copyright (C) 2018-Present Masato Nomiyama

float defaultAction() {
  //Set phases
  float waveLengthRates[60] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    1.0
  );
  float phases[60] = {};
  float lastPhase = setPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = {  }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = {  }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = {  }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = {  }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = {  }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = {  }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
  int x8[] = {  }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
  int x9[] = {  }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));
  int x10[] = {  }; drive(triangleSpike, phases[9], 1.0, x10, sizeof(x10) / sizeof(int));
  int x11[] = {  }; drive(triangleSpike, phases[10], 1.0, x11, sizeof(x11) / sizeof(int));
  int x12[] = {  }; drive(triangleSpike, phases[11], 1.0, x12, sizeof(x12) / sizeof(int));
  int x13[] = {  }; drive(triangleSpike, phases[12], 1.0, x13, sizeof(x13) / sizeof(int));
  int x14[] = {  }; drive(triangleSpike, phases[13], 1.0, x14, sizeof(x14) / sizeof(int));
  int x15[] = {  }; drive(triangleSpike, phases[14], 1.0, x15, sizeof(x15) / sizeof(int));
  int x16[] = {  }; drive(triangleSpike, phases[15], 1.0, x16, sizeof(x16) / sizeof(int));
  int x17[] = {  }; drive(triangleSpike, phases[16], 1.0, x17, sizeof(x17) / sizeof(int));
  int x18[] = {  }; drive(triangleSpike, phases[17], 1.0, x18, sizeof(x18) / sizeof(int));
  int x19[] = {  }; drive(triangleSpike, phases[18], 1.0, x19, sizeof(x19) / sizeof(int));
  int x20[] = {  }; drive(triangleSpike, phases[19], 1.0, x20, sizeof(x20) / sizeof(int));
  int x21[] = {  }; drive(triangleSpike, phases[20], 1.0, x21, sizeof(x21) / sizeof(int));
  int x22[] = {  }; drive(triangleSpike, phases[21], 1.0, x22, sizeof(x22) / sizeof(int));
  int x23[] = {  }; drive(triangleSpike, phases[22], 1.0, x23, sizeof(x23) / sizeof(int));
  int x24[] = {  }; drive(triangleSpike, phases[23], 1.0, x24, sizeof(x24) / sizeof(int));
  int x25[] = {  }; drive(triangleSpike, phases[24], 1.0, x25, sizeof(x25) / sizeof(int));
  int x26[] = {  }; drive(triangleSpike, phases[25], 1.0, x26, sizeof(x26) / sizeof(int));
  int x27[] = {  }; drive(triangleSpike, phases[26], 1.0, x27, sizeof(x27) / sizeof(int));
  int x28[] = {  }; drive(triangleSpike, phases[27], 1.0, x28, sizeof(x28) / sizeof(int));
  int x29[] = {  }; drive(triangleSpike, phases[28], 1.0, x29, sizeof(x29) / sizeof(int));
  int x30[] = {  }; drive(triangleSpike, phases[29], 1.0, x30, sizeof(x30) / sizeof(int));
  int x31[] = {  }; drive(triangleSpike, phases[30], 1.0, x31, sizeof(x31) / sizeof(int));
  int x32[] = {  }; drive(triangleSpike, phases[31], 1.0, x32, sizeof(x32) / sizeof(int));
  int x33[] = {  }; drive(triangleSpike, phases[32], 1.0, x33, sizeof(x33) / sizeof(int));
  int x34[] = {  }; drive(triangleSpike, phases[33], 1.0, x34, sizeof(x34) / sizeof(int));
  int x35[] = {  }; drive(triangleSpike, phases[34], 1.0, x35, sizeof(x35) / sizeof(int));
  int x36[] = {  }; drive(triangleSpike, phases[35], 1.0, x36, sizeof(x36) / sizeof(int));
  int x37[] = {  }; drive(triangleSpike, phases[36], 1.0, x37, sizeof(x37) / sizeof(int));
  int x38[] = {  }; drive(triangleSpike, phases[37], 1.0, x38, sizeof(x38) / sizeof(int));
  int x39[] = {  }; drive(triangleSpike, phases[38], 1.0, x39, sizeof(x39) / sizeof(int));
  int x40[] = {  }; drive(triangleSpike, phases[39], 1.0, x40, sizeof(x40) / sizeof(int));
  int x41[] = {  }; drive(triangleSpike, phases[40], 1.0, x41, sizeof(x41) / sizeof(int));
  int x42[] = {  }; drive(triangleSpike, phases[41], 1.0, x42, sizeof(x42) / sizeof(int));
  int x43[] = {  }; drive(triangleSpike, phases[42], 1.0, x43, sizeof(x43) / sizeof(int));
  int x44[] = {  }; drive(triangleSpike, phases[43], 1.0, x44, sizeof(x44) / sizeof(int));
  int x45[] = {  }; drive(triangleSpike, phases[44], 1.0, x45, sizeof(x45) / sizeof(int));
  int x46[] = {  }; drive(triangleSpike, phases[45], 1.0, x46, sizeof(x46) / sizeof(int));
  int x47[] = {  }; drive(triangleSpike, phases[46], 1.0, x47, sizeof(x47) / sizeof(int));
  int x48[] = {  }; drive(triangleSpike, phases[47], 1.0, x48, sizeof(x48) / sizeof(int));
  int x49[] = {  }; drive(triangleSpike, phases[48], 1.0, x49, sizeof(x49) / sizeof(int));
  int x50[] = {  }; drive(triangleSpike, phases[49], 1.0, x50, sizeof(x50) / sizeof(int));
  int x51[] = {  }; drive(triangleSpike, phases[50], 1.0, x51, sizeof(x51) / sizeof(int));
  int x52[] = {  }; drive(triangleSpike, phases[51], 1.0, x52, sizeof(x52) / sizeof(int));
  int x53[] = {  }; drive(triangleSpike, phases[52], 1.0, x53, sizeof(x53) / sizeof(int));
  int x54[] = {  }; drive(triangleSpike, phases[53], 1.0, x54, sizeof(x54) / sizeof(int));
  int x55[] = {  }; drive(triangleSpike, phases[54], 1.0, x55, sizeof(x55) / sizeof(int));
  int x56[] = {  }; drive(triangleSpike, phases[55], 1.0, x56, sizeof(x56) / sizeof(int));
  int x57[] = {  }; drive(triangleSpike, phases[56], 1.0, x57, sizeof(x57) / sizeof(int));
  int x58[] = {  }; drive(triangleSpike, phases[57], 1.0, x58, sizeof(x58) / sizeof(int));
  int x59[] = {  }; drive(triangleSpike, phases[58], 1.0, x59, sizeof(x59) / sizeof(int));
  int x60[] = {  }; drive(triangleSpike, phases[59], 1.0, x60, sizeof(x60) / sizeof(int));

  return lastPhase;
}

float walkAction(int place) {
  switch(place) {
    case 0: {
      //Set phases
      float waveLengthRates[23] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        -0.5,
        2.0
      );
      float phases[23] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 0, 1 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 2 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 3 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 4, 9 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 5, 10 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 6, 11 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 7, 12, 14, 19 }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 8, 13, 15, 20 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 16, 21 }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 17, 22, 24, 29 }; drive(triangleSpike, phases[9], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 18, 23, 25, 30 }; drive(triangleSpike, phases[10], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 26, 31 }; drive(triangleSpike, phases[11], 1.0, x12, sizeof(x12) / sizeof(int));
      int x13[] = { 27, 32, 34, 39 }; drive(triangleSpike, phases[12], 1.0, x13, sizeof(x13) / sizeof(int));
      int x14[] = { 28, 33, 35, 40 }; drive(triangleSpike, phases[13], 1.0, x14, sizeof(x14) / sizeof(int));
      int x15[] = { 36, 41 }; drive(triangleSpike, phases[14], 1.0, x15, sizeof(x15) / sizeof(int));
      int x16[] = { 37, 42, 44, 49 }; drive(triangleSpike, phases[15], 1.0, x16, sizeof(x16) / sizeof(int));
      int x17[] = { 38, 43, 45, 50 }; drive(triangleSpike, phases[16], 1.0, x17, sizeof(x17) / sizeof(int));
      int x18[] = { 46, 51 }; drive(triangleSpike, phases[17], 1.0, x18, sizeof(x18) / sizeof(int));
      int x19[] = { 47, 52 }; drive(triangleSpike, phases[18], 1.0, x19, sizeof(x19) / sizeof(int));
      int x20[] = { 48, 53, 54 }; drive(triangleSpike, phases[19], 1.0, x20, sizeof(x20) / sizeof(int));
      int x21[] = { 55 }; drive(triangleSpike, phases[20], 1.0, x21, sizeof(x21) / sizeof(int));
      int x22[] = { 56, 58 }; drive(triangleSpike, phases[21], 1.0, x22, sizeof(x22) / sizeof(int));
      int x23[] = { 57, 59 }; drive(triangleSpike, phases[22], 1.0, x23, sizeof(x23) / sizeof(int));

      return lastPhase;
    }
    case 1: {
      return 1.0;
    }
    case 2: {
      //Set phases
      float waveLengthRates[23] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        -0.5,
        2.0
      );
      float phases[23] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 0, 1 }; drive(triangleSpike, phases[22], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 2 }; drive(triangleSpike, phases[21], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 3 }; drive(triangleSpike, phases[20], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 4, 9 }; drive(triangleSpike, phases[19], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 5, 10 }; drive(triangleSpike, phases[18], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 6, 11 }; drive(triangleSpike, phases[17], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 7, 12, 14, 19 }; drive(triangleSpike, phases[16], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 8, 13, 15, 20 }; drive(triangleSpike, phases[15], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 16, 21 }; drive(triangleSpike, phases[14], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 17, 22, 24, 29 }; drive(triangleSpike, phases[13], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 18, 23, 25, 30 }; drive(triangleSpike, phases[12], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 26, 31 }; drive(triangleSpike, phases[11], 1.0, x12, sizeof(x12) / sizeof(int));
      int x13[] = { 27, 32, 34, 39 }; drive(triangleSpike, phases[10], 1.0, x13, sizeof(x13) / sizeof(int));
      int x14[] = { 28, 33, 35, 40 }; drive(triangleSpike, phases[9], 1.0, x14, sizeof(x14) / sizeof(int));
      int x15[] = { 36, 41 }; drive(triangleSpike, phases[8], 1.0, x15, sizeof(x15) / sizeof(int));
      int x16[] = { 37, 42, 44, 49 }; drive(triangleSpike, phases[7], 1.0, x16, sizeof(x16) / sizeof(int));
      int x17[] = { 38, 43, 45, 50 }; drive(triangleSpike, phases[6], 1.0, x17, sizeof(x17) / sizeof(int));
      int x18[] = { 46, 51 }; drive(triangleSpike, phases[5], 1.0, x18, sizeof(x18) / sizeof(int));
      int x19[] = { 47, 52 }; drive(triangleSpike, phases[4], 1.0, x19, sizeof(x19) / sizeof(int));
      int x20[] = { 48, 53, 54 }; drive(triangleSpike, phases[3], 1.0, x20, sizeof(x20) / sizeof(int));
      int x21[] = { 55 }; drive(triangleSpike, phases[2], 1.0, x21, sizeof(x21) / sizeof(int));
      int x22[] = { 56, 58 }; drive(triangleSpike, phases[1], 1.0, x22, sizeof(x22) / sizeof(int));
      int x23[] = { 57, 59 }; drive(triangleSpike, phases[0], 1.0, x23, sizeof(x23) / sizeof(int));

      return lastPhase;
    }
  }
}

float rippleAction(int place) {
  switch (place) {
    case 0: {
      // Set phases
      float waveLengthRates[4] = {};
      initWaveLengthRates(waveLengthRates, sizeof(waveLengthRates) / sizeof(float), 1.0);
      float phases[4] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 11 };
      drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 5, 6, 12, 17, 16, 10 };
      drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 4, 1, 2, 3, 7, 13, 18, 23, 22, 21, 15, 9 };
      drive(triangleSpike, phases[2], 0.9, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 14, 20, 26, 27, 28 };
      drive(triangleSpike, phases[3], 0.7, x4, sizeof(x4) / sizeof(int));

      return lastPhase;
    }
    case 1: {
      // Set phases
      float waveLengthRates[4] = {};
      initWaveLengthRates(waveLengthRates, sizeof(waveLengthRates) / sizeof(float), 1.0);
      float phases[4] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 26 };
      drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 15, 20, 21, 25, 27, 31, 32 };
      drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 14, 15, 16, 19, 22, 24, 28, 30, 33, 36, 37, 38 };
      drive(triangleSpike, phases[2], 0.9, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 9, 10, 11, 17, 23, 29, 35, 41, 42, 43 };
      drive(triangleSpike, phases[3], 0.7, x4, sizeof(x4) / sizeof(int));

      return lastPhase;
    }
    case 2: {
      // Set phases
      float waveLengthRates[4] = {};
      initWaveLengthRates(waveLengthRates, sizeof(waveLengthRates) / sizeof(float), 1.0);
      float phases[4] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 46 };
      drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 40, 41, 47, 52, 51, 45 };
      drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 39, 34, 35, 36, 42, 48, 53, 57, 56, 55, 50, 44 };
      drive(triangleSpike, phases[2], 0.9, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 29, 30, 31, 37, 43, 49, 54, 55, 58, 59 };
      drive(triangleSpike, phases[3], 0.7, x4, sizeof(x4) / sizeof(int));

      return lastPhase;
    }
  }
}

float waveAction(int place) {
  switch(place) {
    case 0: {
      // Set phases
      float waveLengthRates[30] = {};
      initWaveLengthRates(waveLengthRates, sizeof(waveLengthRates) / sizeof(float), 0.75);
      waveLengthRates[16] = 0.83;
      waveLengthRates[17] = 0.92;
      waveLengthRates[18] = 1.01;
      waveLengthRates[19] = 1.1;
      waveLengthRates[20] = 1.19;
      waveLengthRates[21] = 1.28;
      waveLengthRates[22] = 1.37;
      waveLengthRates[23] = 1.46;
      waveLengthRates[24] = 1.55;
      waveLengthRates[25] = 1.64;
      waveLengthRates[26] = 1.73;
      waveLengthRates[27] = 1.82;
      waveLengthRates[28] = 1.82;
      waveLengthRates[29] = 1.82;
      float phases[30] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 0 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 1 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 2 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 3, 4 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 5 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 6, 9 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 7, 10 }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 8, 11, 14 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 12, 15 }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 13, 16, 19 }; drive(triangleSpike, phases[9], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 17, 20 }; drive(triangleSpike, phases[10], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 18, 21, 24 }; drive(triangleSpike, phases[11], 1.0, x12, sizeof(x12) / sizeof(int));
      int x13[] = { 22, 25 }; drive(triangleSpike, phases[12], 1.0, x13, sizeof(x13) / sizeof(int));
      int x14[] = { 23, 26, 29 }; drive(triangleSpike, phases[13], 1.0, x14, sizeof(x14) / sizeof(int));
      int x15[] = { 27, 30 }; drive(triangleSpike, phases[14], 1.0, x15, sizeof(x15) / sizeof(int));
      int x16[] = { 28, 31, 34 }; drive(triangleSpike, phases[15], 1.0, x16, sizeof(x16) / sizeof(int));
      int x17[] = { 32, 35 }; drive(triangleSpike, phases[16], 1.0, x17, sizeof(x17) / sizeof(int));
      int x18[] = { 33, 36, 39 }; drive(triangleSpike, phases[17], 1.0, x18, sizeof(x18) / sizeof(int));
      int x19[] = { 37, 40 }; drive(triangleSpike, phases[18], 1.0, x19, sizeof(x19) / sizeof(int));
      int x20[] = { 38, 41, 44 }; drive(triangleSpike, phases[19], 1.0, x20, sizeof(x20) / sizeof(int));
      int x21[] = { 42, 45 }; drive(triangleSpike, phases[20], 1.0, x21, sizeof(x21) / sizeof(int));
      int x22[] = { 43, 46, 49 }; drive(triangleSpike, phases[21], 1.0, x22, sizeof(x22) / sizeof(int));
      int x23[] = { 47, 50 }; drive(triangleSpike, phases[22], 1.0, x23, sizeof(x23) / sizeof(int));
      int x24[] = { 48, 51 }; drive(triangleSpike, phases[23], 1.0, x24, sizeof(x24) / sizeof(int));
      int x25[] = { 52, 54 }; drive(triangleSpike, phases[24], 1.0, x25, sizeof(x25) / sizeof(int));
      int x26[] = { 53, 55 }; drive(triangleSpike, phases[25], 1.0, x26, sizeof(x26) / sizeof(int));
      int x27[] = { 56 }; drive(triangleSpike, phases[26], 1.0, x27, sizeof(x27) / sizeof(int));
      int x28[] = { 57 }; drive(triangleSpike, phases[27], 1.0, x28, sizeof(x28) / sizeof(int));
      int x29[] = { 58 }; drive(triangleSpike, phases[28], 1.0, x29, sizeof(x29) / sizeof(int));
      int x30[] = { 59 }; drive(triangleSpike, phases[29], 1.0, x30, sizeof(x30) / sizeof(int));

      return lastPhase;
    }
    case 1: {
      return 1.0;
    }
    case 2:
      // Set phases
      float waveLengthRates[30] = {};
      initWaveLengthRates(waveLengthRates, sizeof(waveLengthRates) / sizeof(float), 0.75);
      waveLengthRates[16] = 0.83;
      waveLengthRates[17] = 0.92;
      waveLengthRates[18] = 1.01;
      waveLengthRates[19] = 1.1;
      waveLengthRates[20] = 1.19;
      waveLengthRates[21] = 1.28;
      waveLengthRates[22] = 1.37;
      waveLengthRates[23] = 1.46;
      waveLengthRates[24] = 1.55;
      waveLengthRates[25] = 1.64;
      waveLengthRates[26] = 1.73;
      waveLengthRates[27] = 1.82;
      waveLengthRates[28] = 1.82;
      waveLengthRates[29] = 1.82;
      float phases[30] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 0 }; drive(triangleSpike, phases[29], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 1 }; drive(triangleSpike, phases[28], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 2 }; drive(triangleSpike, phases[27], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 3, 4 }; drive(triangleSpike, phases[26], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 5 }; drive(triangleSpike, phases[25], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 6, 9 }; drive(triangleSpike, phases[24], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 7, 10 }; drive(triangleSpike, phases[23], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 8, 11, 14 }; drive(triangleSpike, phases[22], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 12, 15 }; drive(triangleSpike, phases[21], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 13, 16, 19 }; drive(triangleSpike, phases[20], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 17, 20 }; drive(triangleSpike, phases[19], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 18, 21, 24 }; drive(triangleSpike, phases[18], 1.0, x12, sizeof(x12) / sizeof(int));
      int x13[] = { 22, 25 }; drive(triangleSpike, phases[17], 1.0, x13, sizeof(x13) / sizeof(int));
      int x14[] = { 23, 26, 29 }; drive(triangleSpike, phases[16], 1.0, x14, sizeof(x14) / sizeof(int));
      int x15[] = { 27, 30 }; drive(triangleSpike, phases[15], 1.0, x15, sizeof(x15) / sizeof(int));
      int x16[] = { 28, 31, 34 }; drive(triangleSpike, phases[14], 1.0, x16, sizeof(x16) / sizeof(int));
      int x17[] = { 32, 35 }; drive(triangleSpike, phases[13], 1.0, x17, sizeof(x17) / sizeof(int));
      int x18[] = { 33, 36, 39 }; drive(triangleSpike, phases[12], 1.0, x18, sizeof(x18) / sizeof(int));
      int x19[] = { 37, 40 }; drive(triangleSpike, phases[11], 1.0, x19, sizeof(x19) / sizeof(int));
      int x20[] = { 38, 41, 44 }; drive(triangleSpike, phases[10], 1.0, x20, sizeof(x20) / sizeof(int));
      int x21[] = { 42, 45 }; drive(triangleSpike, phases[9], 1.0, x21, sizeof(x21) / sizeof(int));
      int x22[] = { 43, 46, 49 }; drive(triangleSpike, phases[8], 1.0, x22, sizeof(x22) / sizeof(int));
      int x23[] = { 47, 50 }; drive(triangleSpike, phases[7], 1.0, x23, sizeof(x23) / sizeof(int));
      int x24[] = { 48, 51 }; drive(triangleSpike, phases[6], 1.0, x24, sizeof(x24) / sizeof(int));
      int x25[] = { 52, 54 }; drive(triangleSpike, phases[5], 1.0, x25, sizeof(x25) / sizeof(int));
      int x26[] = { 53, 55 }; drive(triangleSpike, phases[4], 1.0, x26, sizeof(x26) / sizeof(int));
      int x27[] = { 56 }; drive(triangleSpike, phases[3], 1.0, x27, sizeof(x27) / sizeof(int));
      int x28[] = { 57 }; drive(triangleSpike, phases[2], 1.0, x28, sizeof(x28) / sizeof(int));
      int x29[] = { 58 }; drive(triangleSpike, phases[1], 1.0, x29, sizeof(x29) / sizeof(int));
      int x30[] = { 59 }; drive(triangleSpike, phases[0], 1.0, x30, sizeof(x30) / sizeof(int));

      return lastPhase;
  }
}

float lineAction(int place) {
  switch(place) {
    case 0: {
      //Set phases
      float waveLengthRates[10] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        0.6,
        0.6
      );
      float phases[10] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 11 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 16 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 21 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 26 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 31 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 36 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 41 }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 46 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 51 }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 55 }; drive(triangleSpike, phases[9], 1.0, x10, sizeof(x10) / sizeof(int));

      return lastPhase;
    }
    case 1: {
      //Set phases
      float waveLengthRates[7] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        0.6,
        0.6
      );
      float phases[7] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x6[] = { 26 }; drive(triangleSpike, phases[0], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 21, 31 }; drive(triangleSpike, phases[1], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 16, 36 }; drive(triangleSpike, phases[2], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 11, 41 }; drive(triangleSpike, phases[3], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 6, 46 }; drive(triangleSpike, phases[4], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 3, 51 }; drive(triangleSpike, phases[5], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 55 }; drive(triangleSpike, phases[6], 1.0, x12, sizeof(x12) / sizeof(int));

      return lastPhase;
    }
    case 2: {
      //Set phases
      float waveLengthRates[10] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        0.6,
        0.6
      );
      float phases[10] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 3 }; drive(triangleSpike, phases[9], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 6 }; drive(triangleSpike, phases[8], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 11 }; drive(triangleSpike, phases[7], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 16 }; drive(triangleSpike, phases[6], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 21 }; drive(triangleSpike, phases[5], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 26 }; drive(triangleSpike, phases[4], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 31 }; drive(triangleSpike, phases[3], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 36 }; drive(triangleSpike, phases[2], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 41 }; drive(triangleSpike, phases[1], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 46 }; drive(triangleSpike, phases[0], 1.0, x10, sizeof(x10) / sizeof(int));

      return lastPhase;
    }
  }
}

float gravityAction(int place) {
  switch(place) {
    case 0: {
      //Set phases
      float waveLengthRates[9] = {
        0.46,
        0.55,
        0.64,
        0.73,
        0.82,
        0.91,
        1.0,
        1.0,
        1.0
      };
      float phases[9] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 55 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 51 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 46 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 41 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 36 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 31 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 3, 26 }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 15, 21, 22, 5, 6, 12 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 10, 11, 16, 17 }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));

      return lastPhase;
    }
    case 1: {
      //Set phases
      float waveLengthRates[8] = {};
      initWaveLengthRates(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        1.0
      );
      float phases[8] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 3, 55 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 6, 51 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 11, 46 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 16, 41 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 20, 21, 27, 37, 36, 30 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 25, 26, 31, 32 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));

      return lastPhase;
    }
    case 2: {
      //Set phases
      float waveLengthRates[9] = {
        0.46,
        0.55,
        0.64,
        0.73,
        0.82,
        0.91,
        1.0,
        1.0,
        1.0
      };
      float phases[9] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 3 }; drive(triangleSpike, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 6 }; drive(triangleSpike, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 11 }; drive(triangleSpike, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 16 }; drive(triangleSpike, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 21 }; drive(triangleSpike, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 26 }; drive(triangleSpike, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 31, 55 }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 35, 36, 42, 45, 51, 52 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 40, 41, 46, 47 }; drive(triangleSpike, phases[8], 1.0, x9, sizeof(x9) / sizeof(int));

      return lastPhase;
    }
  }
}

float wriggleAction(int place) {
  switch(place) {
    case 0:
    case 1:
    case 2: {
      // Set phases
      float waveLengthRates[30] = {};
      initWaveLengthRatesForAcceleration(
        waveLengthRates,
        sizeof(waveLengthRates) / sizeof(float),
        -0.5,
        2.0
      );
      float phases[30] = {};
      float lastPhase = setPhases(
        phases,
        waveLengthRates,
        sizeof(phases) / sizeof(float)
      );

      // Drive magnets
      int x1[] = { 0 }; drive(triangleSpike, phases[21], 1.0, x1, sizeof(x1) / sizeof(int));
      int x2[] = { 1 }; drive(triangleSpike, phases[20], 1.0, x2, sizeof(x2) / sizeof(int));
      int x3[] = { 2 }; drive(triangleSpike, phases[19], 1.0, x3, sizeof(x3) / sizeof(int));
      int x4[] = { 3, 4 }; drive(triangleSpike, phases[18], 1.0, x4, sizeof(x4) / sizeof(int));
      int x5[] = { 5 }; drive(triangleSpike, phases[17], 1.0, x5, sizeof(x5) / sizeof(int));
      int x6[] = { 6, 9 }; drive(triangleSpike, phases[16], 1.0, x6, sizeof(x6) / sizeof(int));
      int x7[] = { 7, 10 }; drive(triangleSpike, phases[15], 1.0, x7, sizeof(x7) / sizeof(int));
      int x8[] = { 8, 11, 14 }; drive(triangleSpike, phases[7], 1.0, x8, sizeof(x8) / sizeof(int));
      int x9[] = { 12, 15 }; drive(triangleSpike, phases[14], 1.0, x9, sizeof(x9) / sizeof(int));
      int x10[] = { 13, 16, 19 }; drive(triangleSpike, phases[9], 1.0, x10, sizeof(x10) / sizeof(int));
      int x11[] = { 17, 20 }; drive(triangleSpike, phases[13], 1.0, x11, sizeof(x11) / sizeof(int));
      int x12[] = { 18, 21, 24 }; drive(triangleSpike, phases[11], 1.0, x12, sizeof(x12) / sizeof(int));
      int x13[] = { 22, 25 }; drive(triangleSpike, phases[12], 1.0, x13, sizeof(x13) / sizeof(int));
      int x14[] = { 23, 26, 29 }; drive(triangleSpike, phases[13], 1.0, x14, sizeof(x14) / sizeof(int));
      int x15[] = { 27, 30 }; drive(triangleSpike, phases[11], 1.0, x15, sizeof(x15) / sizeof(int));
      int x16[] = { 28, 31, 34 }; drive(triangleSpike, phases[15], 1.0, x16, sizeof(x16) / sizeof(int));
      int x17[] = { 32, 35 }; drive(triangleSpike, phases[10], 1.0, x17, sizeof(x17) / sizeof(int));
      int x18[] = { 33, 36, 39 }; drive(triangleSpike, phases[17], 1.0, x18, sizeof(x18) / sizeof(int));
      int x19[] = { 37, 40 }; drive(triangleSpike, phases[9], 1.0, x19, sizeof(x19) / sizeof(int));
      int x20[] = { 38, 41, 44 }; drive(triangleSpike, phases[19], 1.0, x20, sizeof(x20) / sizeof(int));
      int x21[] = { 42, 45 }; drive(triangleSpike, phases[8], 1.0, x21, sizeof(x21) / sizeof(int));
      int x22[] = { 43, 46, 49 }; drive(triangleSpike, phases[21], 1.0, x22, sizeof(x22) / sizeof(int));
      int x23[] = { 47, 50 }; drive(triangleSpike, phases[7], 1.0, x23, sizeof(x23) / sizeof(int));
      int x24[] = { 48, 51 }; drive(triangleSpike, phases[6], 1.0, x24, sizeof(x24) / sizeof(int));
      int x25[] = { 52, 54 }; drive(triangleSpike, phases[5], 1.0, x25, sizeof(x25) / sizeof(int));
      int x26[] = { 53, 55 }; drive(triangleSpike, phases[4], 1.0, x26, sizeof(x26) / sizeof(int));
      int x27[] = { 56 }; drive(triangleSpike, phases[3], 1.0, x27, sizeof(x27) / sizeof(int));
      int x28[] = { 57 }; drive(triangleSpike, phases[2], 1.0, x28, sizeof(x28) / sizeof(int));
      int x29[] = { 58 }; drive(triangleSpike, phases[1], 1.0, x29, sizeof(x29) / sizeof(int));
      int x30[] = { 59 }; drive(triangleSpike, phases[0], 1.0, x30, sizeof(x30) / sizeof(int));

      return lastPhase;
    }
  }
}

float digitalArrowAction() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.2
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 0, 2, 6, 7, 8 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 4, 10, 16, 17, 18 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 14, 20, 26, 27, 28 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 24, 30, 36, 37, 38 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 34, 40, 46, 47, 48 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 44, 50, 55, 56, 57 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(rectangle, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}

float digitalRevertArrowAction() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.2
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 49, 50, 51, 56, 59 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 39, 40, 41, 47, 53 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 29, 30, 31, 37, 43 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 19, 20, 21, 27, 33 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 9, 10, 11, 17, 23 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 1, 2, 3, 7, 13 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(triangleSpike, phases[6], 1.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}

float digitalRippleAction() {
  //Set phases
  float waveLengthRates[5] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.4
  );
  waveLengthRates[4] = 10.0;
  float phases[5] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 26 };
  drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 14, 15, 16, 19, 22, 24, 28, 30, 33, 36, 37, 38 };
  drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 4, 5, 6, 12, 18, 34, 40, 46, 47, 48 };
  drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 44, 50, 55, 56, 57 };
  drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = {  }; drive(triangleSpike, phases[4], 0.0, x5, sizeof(x5) / sizeof(int));

  return lastPhase;
}

float digitalRippleAction2() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.4
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 12 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 23, 22, 16, 10, 5, 2 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 33, 32, 26, 20, 14, 9, 4, 1, 0 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 43, 42, 36, 30, 24 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 53, 52, 46, 40, 34 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 59, 58, 55, 50, 44 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(rectangle, phases[6], 0.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}

float digitalRippleAction3() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.4
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 5 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 9, 15, 16, 17, 12, 7, 3 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 19, 25, 26, 27, 28, 23, 18, 13, 8 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 29, 35, 36, 37, 38 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 39, 45, 46, 47, 48 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 49, 54, 55, 56, 57 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(rectangle, phases[6], 0.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}

float digitalRippleAction4() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.4
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 56 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 54, 50, 45, 46, 47, 53 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 49, 44, 39, 34, 35, 36, 37, 43 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 24, 25, 26, 27, 33 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 14, 15, 16, 17, 23 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 4, 5, 6, 7, 13 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(rectangle, phases[6], 0.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}

float digitalRippleAction5() {
  //Set phases
  float waveLengthRates[7] = {};
  initWaveLengthRates(
    waveLengthRates,
    sizeof(waveLengthRates) / sizeof(float),
    0.4
  );
  waveLengthRates[6] = 10.0;
  float phases[7] = {};
  float lastPhase = setDigitalPhases(
    phases,
    waveLengthRates,
    sizeof(phases) / sizeof(float)
  );

  // Drive magnets
  int x1[] = { 50 }; drive(rectangle, phases[0], 1.0, x1, sizeof(x1) / sizeof(int));
  int x2[] = { 39, 40, 46, 52, 56, 58 }; drive(rectangle, phases[1], 1.0, x2, sizeof(x2) / sizeof(int));
  int x3[] = { 29, 30, 36, 42, 48, 53, 57, 59 }; drive(rectangle, phases[2], 1.0, x3, sizeof(x3) / sizeof(int));
  int x4[] = { 19, 20, 26, 32, 38 }; drive(rectangle, phases[3], 1.0, x4, sizeof(x4) / sizeof(int));
  int x5[] = { 9, 10, 16, 22, 28 }; drive(rectangle, phases[4], 1.0, x5, sizeof(x5) / sizeof(int));
  int x6[] = { 1, 2, 3, 8 }; drive(rectangle, phases[5], 1.0, x6, sizeof(x6) / sizeof(int));
  int x7[] = {  }; drive(rectangle, phases[6], 0.0, x7, sizeof(x7) / sizeof(int));

  return lastPhase;
}
