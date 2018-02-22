#define Led 4;
void setup () 
{ pinMode (Led, OUTPUT); }
void loop ()
{ digitalWrite (Led, HIGH);
Delay(500);
digitalWrite (Led, LOW);
Delay(1500);}

