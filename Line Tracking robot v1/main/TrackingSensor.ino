void Tracking(){
  T1 = analogRead(Track1);
  T2 = analogRead(Track2);
  T3 = analogRead(Track3);
  T4 = analogRead(Track4);
}

void ConvertTracking(){ // 1 white , 0 black
  Tracking();

  if(T1 > RefT1) T1 = 1; else T1 = 0;
  if(T2 > RefT2) T2 = 1; else T2 = 0;
  if(T3 > RefT3) T3 = 1; else T3 = 0;
  if(T4 > RefT4) T4 = 1; else T4 = 0;

  Serial.println(String(T1) + " " + String(T2) + " " + String(T3) + " " + String(T4));
}

