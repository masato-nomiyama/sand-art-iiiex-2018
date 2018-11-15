// Copyright (C) 2018-Present Masato Nomiyama

float actWhenClose(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 2) {
    case 0: {
      lastPhase = walkAction(place);
      break;
    }
    case 1: {
      lastPhase = waveAction(place);
      break;
    }
  }
  return lastPhase;
}
