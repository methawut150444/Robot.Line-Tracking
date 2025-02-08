void Motor(int speedL, int speedR){
  // ------------------------------------ motor Left
  if(speedL > 0){
    digitalWrite(IN4, 1);
    digitalWrite(IN3, 0);
  }
  else{
    digitalWrite(IN4, 0);
    digitalWrite(IN3, 1);
    speedL = speedL * -1;
  }
  analogWrite(ENB, speedL);

  // ------------------------------------ motor Right
  if(speedR > 0){
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 0);
  }
  else{
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
    speedR = speedR * -1;
  }
  analogWrite(ENA, speedR);
}

// ------------------------------------ tuneMotor
void TuneMotor(int speed){
  TuneL = speed - 57;
  TuneR = speed - 0;
}
// ------------------------------------ Forward
void Forward(int speed, int time){

  TuneMotor(speed);

  Motor(TuneL, TuneR);

  delay(time);
  Stop();
}

// ------------------------------------ Stop
void Stop(){
  Motor(0, 0);
}





