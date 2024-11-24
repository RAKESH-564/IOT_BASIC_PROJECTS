int ledPin = 9;  // Pin connected to the LED
int a = 0;        // Variable to control brightness

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  // Gradually increase the brightness
  for (a = 0; a <= 255; a++) {
    analogWrite(ledPin, a);  // Set the LED brightness
    delay(10);  // Wait for 10 milliseconds
  }

  // Gradually decrease the brightness
  for (a = 255; a >= 0; a--) {
    analogWrite(ledPin, a);  // Set the LED brightness
    delay(10);  // Wait for 10 milliseconds
  }
}
//===============================================================================
