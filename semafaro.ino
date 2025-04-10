#define ledRed 8
#define ledYellow 9
#define ledGreen 10


void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

  void red(int time){
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,LOW);
  delay(time*1000);
  }

  void green(int time){
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,HIGH);
  delay(time*1000);
  }

  void yellow(int time){
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledGreen,LOW);
  delay(time*1000);
  }


void loop() {

red(9);
green(7);
yellow(2);
 
}
