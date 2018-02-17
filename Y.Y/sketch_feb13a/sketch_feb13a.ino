#include<SoftwareSerial.h>
int LED=9;
char data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){}
  data=Serial.read();

  if(data=='0'){
      digitalWrite(LED,LOW);
    }

  if(data=='F'){
      digitalWrite(LED,HIGH);
    }
    
  if(data=='B'){
      digitalWrite(LED,HIGH);
      delay(500);
      digitalWrite(LED,LOW);
      delay(500);
      digitalWrite(LED,HIGH);
    }

  if(data=='L'){
      digitalWrite(LED,HIGH);
      delay(200);
      digitalWrite(LED,LOW);
      delay(200);
      digitalWrite(LED,HIGH);
      delay(200);
      digitalWrite(LED,LOW);
      delay(200);
      digitalWrite(LED,HIGH);      
    }

  if (data=='R'){
      digitalWrite(LED,HIGH);
      delay(3000);
    }

}
