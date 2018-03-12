#define motor11 11 
#define motor12 12 

#define motor21 10 
#define motor22 9 

void forward()
{
digitalWrite(motor11, HIGH);
digitalWrite(motor12, LOW);
digitalWrite(motor21, HIGH);
digitalWrite(motor22, LOW);

}

void backward()
{
digitalWrite(motor11, LOW);
digitalWrite(motor12, HIGH);
digitalWrite(motor21, LOW);
digitalWrite(motor22, HIGH);
}

void stop1()
{
digitalWrite(motor11, LOW);
digitalWrite(motor12, LOW);
digitalWrite(motor21, LOW);
digitalWrite(motor22, LOW);
}

 void right_only()
{
digitalWrite(motor11, LOW);
digitalWrite(motor12, LOW);
digitalWrite(motor21, HIGH);
digitalWrite(motor22, LOW);
 }

 void left_only()
{
digitalWrite(motor11, HIGH);
digitalWrite(motor12, LOW);
digitalWrite(motor21, LOW);
digitalWrite(motor22, LOW);
 }

 

 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motor11, OUTPUT);
pinMode(motor12, OUTPUT);
pinMode(motor21, OUTPUT);
pinMode(motor22, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
void loop()
{
while(Serial.available())
{
char data = Serial.read();

if(data =='F') // forward
{
Serial.println("forward");
forward();

}
else if(data =='L') //left
{
Serial.println("Left only");
left_only();

}
else if(data =='R') //right
{
Serial.println("right only");
right_only();

}

else if(data =='B') //backward
{
Serial.println("backward");
backward();

}
else if(data =='S') //stop
{
Serial.println("stop");
stop1();
}
