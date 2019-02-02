// Copyright (C) 2018-Present Masato Nomiyama

float actWhenWaiting(int place, int action) {
  float lastPhase = 1.0;
  switch(action % 5) {
    case 0: {
      lastPhase = digitalRippleAction();
      break;
    }
    case 1: {
      lastPhase = digitalRippleAction2();
      break;
    }
    case 2: {
      lastPhase = digitalRippleAction3();
      break;
    }
    case 3: {
      lastPhase = digitalRippleAction4();
      break;
    }
    case 4: {
      lastPhase = digitalRippleAction5();
      break;
    }
    default: {
      break;
    }
  }
  return lastPhase;
}
