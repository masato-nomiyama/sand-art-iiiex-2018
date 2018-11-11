// Copyright (C) 2018-Present Masato Nomiyama

// I/O
char incomingByte;
boolean flag = false;
int count = 0;

void setup() {
  Serial3.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial3.available() > 0) {
    incomingByte = Serial3.read();
    switch(incomingByte) {
      case 'c':
        flag = true;
        break;
      default:
        flag = false;
        break;
    }
  }
  if (flag) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
}
