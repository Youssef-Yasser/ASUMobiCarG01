int yellow=13 , red =12 , green=11 ;
void setup ()
{
  
   pinMode(red , OUTPUT);
   pinMode(yellow ,OUTPUT);
   pinMode(green ,OUTPUT);
}
void loop ()
{
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  delay (3000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  delay(3000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  delay(3000);
  
}
