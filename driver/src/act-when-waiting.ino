// Copyright (C) 2018-Present Masato Nomiyama

float actWhenWaiting(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 4) {
    case 0: {
      lastPhase = digitalRippleAction();
      break;
    }
    case 1: {
      lastPhase = digitalArrowAction();
      break;
    }
    case 2: {
      lastPhase = digitalRevertArrowAction();
      break;
    }
    case 3: {
      lastPhase = digitalNumberAction();
      break;
    }
    default: {
      break;
    }
  }
  return lastPhase;
}
