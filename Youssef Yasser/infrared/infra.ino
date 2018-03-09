int ir1=A5;
int ir2=A4;

int i1,i2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  i1=analogRead(ir1);
  i2=analogRead(ir2);
  
  Serial.print("VALUE OF I1 = ");
  Serial.println(i1);
  Serial.print("VALUE OF I2 = ");
  Serial.println(i2);
  delay(2000);

}
