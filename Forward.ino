#define m11 11 // M1a
#define m12 12 // M1b

#define m21 10 // M2a
#define m22 9 // M2b

char data;

void forward()
{
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);

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
  char data = Serial.read();

if(data =='F') // forward
{
Serial.println("forward");
forward();
}
}
}
