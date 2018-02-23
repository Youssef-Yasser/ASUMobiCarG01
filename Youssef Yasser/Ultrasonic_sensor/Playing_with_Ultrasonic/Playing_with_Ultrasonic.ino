#include<SoftwareSerial.h>
int LED=5;
int trig=7;
int echo=6;
char data, new_data;
long duration,distance, fwd_distance;

void stop_car(){

  }

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){}
  data=Serial.read();
  Serial.print(">>>DATA : ");
  Serial.println(data);

  while(data=='F'){
    digitalWrite(trig,LOW);
    delayMicroseconds(2);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW); 

    duration=pulseIn(echo,HIGH);
    distance=duration/58; 

    if(distance<=10){
        digitalWrite(LED,LOW);
        data=0;
        break;
      }
      
      //The problem is in this if condition.
    if(distance>10){
      digitalWrite(LED,HIGH);
      new_data=Serial.read();
      Serial.print("FWD DATA= ");
      Serial.println(new_data);

      if(new_data=='L'){
          break;
        }
//      while(1){
//        digitalWrite(trig,LOW);
//        delayMicroseconds(2);
//        digitalWrite(trig,HIGH);
//        delayMicroseconds(10);
//        digitalWrite(trig,LOW); 
//
//        duration=pulseIn(echo,HIGH);
//        fwd_distance=duration/58;
//        Serial.print("DISTANCE IN FORWARD= ");
//        Serial.println(fwd_distance);
//
//        if(fwd_distance<=10){
//          digitalWrite(LED,LOW);
//          data=0;
//          break;
//          }
//        }
      }
    }

      if(data=='0'){
      digitalWrite(LED,LOW);
    }
  }
     


