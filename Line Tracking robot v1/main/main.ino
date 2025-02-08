//Relay & Motor fan
#define RelayFan 2

// Tracking sensor
#define Track1 A1
#define Track2 A2
#define Track3 A3
#define Track4 A4

// motor Left
#define ENB 11
#define IN4 10
#define IN3 9

// motor Right
#define IN2 7
#define IN1 6
#define ENA 5

int T1 = 0; //black: 120 white:850
int T2 = 0; //black: 360 white:700
int T3 = 0;
int T4 = 0;

int RefT1 = 569;  // black + 200
int RefT2 = 580;  // black + 200
int RefT3 = 667;
int RefT4 = 571;

int TuneL;
int TuneR;

int baseSpeed = 225;

int error;

int P;
int GainP = 120; // step 5

int count = 0;

//-------------------------------< SETUP >-----------------------------//

void setup() {
  digitalWrite(RelayFan, 1);  // เฉพาะคนที่สั่ง 0 แล้วพัดลมติด

  Serial.begin(9600);
  PinSetup();

  CheckCrossForward(1);
  CheckCrossRight(1);
  CheckCrossForward(2);
  
}

//-------------------------------< LOOP >-----------------------------//

void loop() {
  PID(baseSpeed);
  
}





