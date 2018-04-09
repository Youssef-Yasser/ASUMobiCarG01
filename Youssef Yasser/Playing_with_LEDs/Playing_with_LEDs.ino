
int ledPins[] = {2,3,4,5,6,7,8,9};

void setup()
{
  pinMode(ledPins[0],OUTPUT); 
  pinMode(ledPins[1],OUTPUT);
  pinMode(ledPins[2],OUTPUT);
  pinMode(ledPins[3],OUTPUT);
  pinMode(ledPins[4],OUTPUT);
  pinMode(ledPins[5],OUTPUT);
  pinMode(ledPins[6],OUTPUT);
  pinMode(ledPins[7],OUTPUT);
}

void loop()
{
  oneAfterAnother();
  delay(3000);
  pingPong();
}


void oneAfterAnother(){
  int index;
  int delayTime = 100;

  // Turn all the LEDs on:  
  for(index = 0; index <= 7; index = ++index)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                
  }                                  

  // Turn all the LEDs off: 
  for(index = 7; index >= 0; index = --index)
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }               
}
 
void pingPong(){
  int index;
  int delayTime = 100;
   
  for(index = 0; index <= 7; index = ++index){
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                  
    digitalWrite(ledPins[index], LOW);
  }
 
  for(index = 7; index >= 0; index = --index)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                  
    digitalWrite(ledPins[index], LOW);
  }
}
