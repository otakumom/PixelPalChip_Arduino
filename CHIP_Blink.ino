/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Define the left and right eyes as LEDs 
// give it a name:
int leftEye = 11;
int rightEye = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(leftEye, OUTPUT); 
  pinMode(rightEye, OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(leftEye, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightEye, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(leftEye, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(rightEye, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
