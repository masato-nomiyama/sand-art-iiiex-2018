// Copyright (C) 2018-Present Masato Nomiyama

float actWhenWaiting(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 3) {
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
    default: {
      break;
    }
  }
  return lastPhase;
}
