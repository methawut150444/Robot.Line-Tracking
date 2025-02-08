#define ena 6
#define in1 8
#define in2 7
#define in3 10
#define in4 9
#define enb 11

int s1, s2, s3, s4;
int sv1, sv2, sv3 ,sv4;

int tuneL, tuneR;

void setup() {
  Serial.begin(9600);
  setupPin();

}

void loop() {
  readSensor();
  trackingLine();
}

