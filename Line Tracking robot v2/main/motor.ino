void motor(int speedL, int speedR){
  // ------------------------------------ motor Left
  if(speedL > 0){
    digitalWrite(in4, 1);
    digitalWrite(in3, 0);
  }
  else{
    digitalWrite(in4, 0);
    digitalWrite(in3, 1);
    speedL = speedL * -1;
  }
  analogWrite(enb, speedL);

  // ------------------------------------ motor Right
  if(speedR > 0){
    digitalWrite(in1, 1);
    digitalWrite(in2, 0);
  }
  else{
    digitalWrite(in1, 0);
    digitalWrite(in2, 1);
    speedR = speedR * -1;
  }
  analogWrite(ena, speedR);
}

// ------------------------------------ Forward
void forward(int speed, int time){

  tuneMotor(speed);

  motor(tuneL, tuneR);

  delay(time);
  stop();
}

// ------------------------------------ Stop
void stop(){
  motor(0, 0);
}

// ------------------------------------ tuneMotor
void tuneMotor(int speed){
  tuneL = speed - 0;
  tuneR = speed - 0;
}




