
int ledpin4 = 4 , ledpin5 = 5 , ledpin6 = 6 , ledpin7 = 7 ;


void setup() {
pinMode (ledpin4 , OUTPUT ) ; 
pinMode (ledpin5 , OUTPUT ); 
pinMode (ledpin6 , OUTPUT ); 
pinMode (ledpin7 , OUTPUT ); 
 
}


void loop() {
 
 digitalWrite (ledpin4 , HIGH);
 delay (1000);
  
  digitalWrite (ledpin4 ,LOW );
  digitalWrite (ledpin5 , HIGH);

    delay (1000);
   
   digitalWrite (ledpin5 ,LOW );
   digitalWrite (ledpin6 , HIGH);

   delay (1000);
   
    digitalWrite (ledpin6 ,LOW );
    digitalWrite (ledpin7 , HIGH);
    
    delay (1000);
    
      digitalWrite (ledpin7 ,LOW );

}
