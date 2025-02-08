void CheckError(){
  ConvertTracking();

  // Black = 0, Write = 1
  if(T1 == 0 && T2 == 1 && T3 == 1 && T4 == 1) error = -2;
  if(T1 == 1 && T2 == 0 && T3 == 1 && T4 == 1) error = -1;
  if(T1 == 1 && T2 == 1 && T3 == 0 && T4 == 1) error = 1;
  if(T1 == 1 && T2 == 1 && T3 == 1 && T4 == 0) error = 2;

  if(T1 == 0 && T2 == 0 && T3 == 0 && T4 == 0) error = 100; // เจอแยก

  Serial.println(error);
}

void PID(int speed){
  int U, U_L , U_R ;

  CheckError();
  TuneMotor(speed);

  P = error;

  U = P * GainP;

  U_L = constrain(TuneL + U, -speed, speed);
  U_R = constrain(TuneR - U, -speed, speed);

  Motor(U_L, U_R);
}

void CheckCross(int){
  if(error == 100){
    count++;

    Stop();
    delay(500);
    Forward(255, 400);  // delay จนกว่าเส้นตัดอยู่กลางหุ่น

  }
}
void CheckCrossRight(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      Forward(255, 400);  // delay จนกว่าเส้นตัดอยู่กลางหุ่น
      turnRight();
    }
    PID(baseSpeed);
  }
  count = 0;
}

void CheckCrossLeft(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      Forward(255, 200);  // delay จนกว่าเส้นตัดอยู่กลางหุ่น
      turnLeft();
    }
    PID(baseSpeed);
  }
  count = 0;
}

void CheckCrossForward(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      Forward(255, 200);  // delay จนกว่าเส้นตัดอยู่กลางหุ่น
    }
    PID(baseSpeed);
  }
  count = 0;
}

void CheckCrossRight(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      Forward(255, 200);  // delay จนกว่าเส้นตัดอยู่กลางหุ่น
      turnRight();
    }
    PID(baseSpeed);
  }
  count = 0;
}
void CheckCrossFlame(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      CheckFlame();
    }
    PID(baseSpeed);
  }
  count = 0;
}

void CheckCrossandFlame(int round){
  while (count < round){
    if(error == 100){
      count++;
      Stop();
      delay(500);
      CheckFlame();
    }
    PID(baseSpeed);
  }
  count = 0;
}








