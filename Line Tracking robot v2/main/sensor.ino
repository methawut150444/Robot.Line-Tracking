void readSensor(){
  s1 = analogRead(A1);
  s2 = analogRead(A2);
  s3 = analogRead(A3);
  s4 = analogRead(A4);
  // Serial.println(String(s1) + " " + String(s2) + " " + String(s3) + " " + String(s4));
  
  // ดำ --> 150-400 
  // ขาว --> 800-1000
  // max ดำ + 200 -----> 400 + 200 = 600

  // 1 = ขาว, 0 = ดำ
  if(s1 > 600) sv1 = 1; else sv1 = 0;
  if(s2 > 600) sv2 = 1; else sv2 = 0;
  if(s3 > 600) sv3 = 1; else sv3 = 0;
  if(s4 > 600) sv4 = 1; else sv4 = 0;
  Serial.println(String(sv1) + " " + String(sv2) + " " + String(sv3) + " " + String(sv4));
}