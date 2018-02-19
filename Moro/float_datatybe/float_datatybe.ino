float value = 1.1; 
void setup ()
{
 Serial.begin(9600);
}
void loop()
{
  value = value - 0.1;
 if (value == 0)
 Serial.println("THE VALUE IS zero");
 else if (fabs (value)< .0001)
 Serial.println("THE VALUE IS CLOSE TO ZERO");
 else 
 Serial.println(value);
 delay(100);
  }
  
