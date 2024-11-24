const int buttonPin = 2; // Pin for button
const int ledPin = 13;   // Pin for LED
volatile bool ledState = LOW; // Variable to track LED state

void handleButtonPress() {
  ledState = !ledState; // Toggle LED state
}

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with pull-up
  attachInterrupt(digitalPinToInterrupt(buttonPin), handleButtonPress, FALLING); // Attach interrupt
}

void loop() {
  digitalWrite(ledPin, ledState); // Write LED state to pin
  delay(50); // Small delay
}
