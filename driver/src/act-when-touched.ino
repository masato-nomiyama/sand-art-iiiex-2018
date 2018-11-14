// Copyright (C) 2018-Present Masato Nomiyama

float actWhenTouched(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 5) {
    case 0: {
      lastPhase = walkAction(place);
      break;
    }
    case 1: {
      lastPhase = rippleAction(place);
      break;
    }
    case 2: {
      lastPhase = waveAction(place);
      break;
    }
    case 3: {
      lastPhase = lineAction(place);
      break;
    }
    case 4: {
      lastPhase = gravityAction(place);
      break;
    }
    default: {
      break;
    }
  }
  return lastPhase;
}
