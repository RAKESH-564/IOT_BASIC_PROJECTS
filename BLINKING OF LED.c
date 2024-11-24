// ===============================================BLINKING OF LED ===========================
// Pin definition for the LED
int ledPin = 13; 

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);

  // Wait for 5 seconds 
  delay(5000);

  // Turn the LED off
  digitalWrite(ledPin, LOW);

  // Wait for another 5 seconds
  delay(5000);
}
//===================================================================================
