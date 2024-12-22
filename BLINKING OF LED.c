// ===============================================BLINKING OF LED ===========================
// Pin definition for the LED
int ledPin = 13; 

void setup() {
 
  pinMode(ledPin, OUTPUT);
}
void loop() {
 
  digitalWrite(ledPin, HIGH);

  // Wait for 5 seconds 
  delay(5000);

  // Turn the LED off
  digitalWrite(ledPin, LOW);

  // Wait for another 5 seconds
  delay(5000);
}
//===================================================================================
