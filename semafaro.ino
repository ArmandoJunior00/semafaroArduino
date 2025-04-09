int ledRed=8;
int ledYellow=9;
int ledGreen=10;

void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);

}

void loop() {
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,LOW);
  delay(7000);

  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,HIGH);
  delay(9000);

  
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledGreen,LOW);
  delay(2000);
}
