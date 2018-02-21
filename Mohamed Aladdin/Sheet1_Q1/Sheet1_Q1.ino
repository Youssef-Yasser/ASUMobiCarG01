int blinkLED=2;

void setup() {
  pinMode(blinkLED,OUTPUT);

}

void loop() {
  digitalWrite(blinkLED,HIGH);
  delay(500);
  digitalWrite(blinkLED,LOW);
  delay(1500);

}
