int LEDpin = 4;
int timeOn= 500;
int timeOff= 1500; 
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDpin,HIGH);
delay(timeOn);
digitalWrite(LEDpin,LOW);
delay(timeOff);

}
