/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(A0, OUTPUT);
  pinMode(1, OUTPUT);    
  pinMode(2, OUTPUT);    
  pinMode(3, OUTPUT);    
  pinMode(4, OUTPUT);    
  pinMode(6, OUTPUT);    
  pinMode(5, OUTPUT);    
  pinMode(8, OUTPUT);    
  pinMode(13, OUTPUT);    

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(A0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(A0, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
}
