// Copyright (C) 2018-Present Masato Nomiyama

float actWhenTouched(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 2) {
    case 0: {
      lastPhase = rippleAction(place);
      break;
    }
    case 1: {
      lastPhase = gravityAction(place);
      break;
    }
    default: {
      break;
    }
  }
  return lastPhase;
}
