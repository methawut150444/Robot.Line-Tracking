// void CheckFlame(){
//   int result = digitalRead(12);
//   // Serial.println(result);
//   Stop();
//   if(result == 0){  //found flame
//     Blow(0, 2000);
//   }
// }

void CheckFlame(){
  int result = digitalRead(12);
  Stop();
  if(result == 0){
    Blow(0, 2000);
  }
}


void Blow(int status, int time){
  digitalWrite(RelayFan, status);
  delay(time);
  digitalWrite(RelayFan, 1); //turn off

}




