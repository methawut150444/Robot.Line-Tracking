void turnLeft(){
  ConvertTracking();
  while(T1 == 1){
    ConvertTracking();
    Motor(-255, 255);
  }
  PID(baseSpeed);
}

void turnRight(){
  ConvertTracking();
  while(T4 == 1){
    ConvertTracking();
    Motor(255, -255);
  }
  PID(baseSpeed);
}

void Uturn(){
  Motor(-255, -255);
  delay(400);
  ConvertTracking();
  while(T1 == 1){
    ConvertTracking();
    Motor(-255, 255);
  }
  while(T3 == 1){
    ConvertTracking();
    Motor(-255, 255);
  }
  PID(baseSpeed);
}







