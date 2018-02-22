#define Led1 4;
#define Led2 5;
#define Led3 6;
#define Led4 7;
void setup ()
{pinMode(Led1, OUTPUT);
pinMode(Led2, OUTPUT);
pinMode(Led3, OUTPUT);
pinMode(Led4, OUTPUT);}
void loop ()
{digitalWrite(Led1, HIGH);
delay(1000);
digitalWrite(Led1, LOW);
digitalWrite(Led2, HIGH);
delay(1000);
digitalWrite(Led2, LOW);
digitalWrite(Led3, HIGH);
delay(1000);
digitalWrite(Led3, LOW);
digitalWrite(Led4, HIGH);
delay(1000);
digitalWrite(Led4, LOW);
digitalWrite(Led3, HIGH);
delay(1000);
digitalWrite(Led3, LOW);
digitalWrite(Led2, HIGH);
delay(1000);
digitalWrite(Led2, LOW);}
