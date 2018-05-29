#define m11 11 // M1a
#define m12 12 // M1b

#define m21 10 // M2a
#define m22 9 // M2b
char data;

void backward()
{
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);
}

void setup() {
   // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  if(data =='B') //backward
{
Serial.println("backward");
backward();

}
  }
}
