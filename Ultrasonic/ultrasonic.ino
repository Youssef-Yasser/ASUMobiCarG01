#define trigPin 4 //or 13 
#define echoPin 7 //or 12
#define trigPin2 8 //or 13 
#define echoPin2 9
 int flag=0;
// ultrasonic max range in 200 cm
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(trigPin2,OUTPUT);
pinMode(echoPin2,INPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  
  // put your main code here, to run repeatedly:
long duration, distance;long duration2, distance2;

//second one

digitalWrite(trigPin2,LOW);
delayMicroseconds(2);
digitalWrite(trigPin2,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2,LOW);
duration2 = pulseIn(echoPin2,HIGH);
distance2 = (duration2/2) / 29.1;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distance = (duration/2) / 29.1;

Serial.print(distance);Serial.print(".......");Serial.println(distance2);

if((distance2 <= 15)&&(distance >= 15))
{
  flag++;
  delay(500);
  }
 else if((distance2 >= 15)&&(distance <= 15)){
  if (flag >0)
  {
    flag--;
  }
  delay(500);
  }
  if (flag >0)
  {
    digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
  }
  else if (flag==0)
  {
  digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
  }
Serial.println(flag);
}
