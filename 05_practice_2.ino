#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
 }
  
  // put your setup code here, to run once:

void loop() {

    digitalWrite(PIN_LED, 0); //turn on 
  delay(1000);  
  digitalWrite(PIN_LED, 1);  
  delay(100);
  digitalWrite(PIN_LED, 0); //turn on 
   delay(100);  
  digitalWrite(PIN_LED, 1);  
  delay(100);
  digitalWrite(PIN_LED, 0); //turn on  
  delay(100);  
  digitalWrite(PIN_LED, 1);  
  delay(100);
  digitalWrite(PIN_LED, 0); //turn on  
  delay(100);  
  digitalWrite(PIN_LED, 1);  
  delay(100);
  digitalWrite(PIN_LED, 0); //turn on  
  delay(100);  
    digitalWrite(PIN_LED, 1);  
  delay(100); 
  digitalWrite(PIN_LED, 0); //turn on  
  delay(100);  
  digitalWrite(PIN_LED, 1);  
  
  while(1){}
  // put your main code here, to run repeatedly:

}
