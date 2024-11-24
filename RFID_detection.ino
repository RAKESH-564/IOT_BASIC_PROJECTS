#include <SoftwareSerial.h>

SoftwareSerial RFID(2, 3);  // RX, TX pins for the RFID module

void setup() {
  Serial.begin(9600);      // Start serial communication at 9600 baud
  RFID.begin(9600);        // Start RFID communication at 9600 baud
  Serial.println("RFID ready");
}

void loop() {
  if (RFID.available()) {  // Check if data is available from the RFID reader
    String tag = "";        // Declare a string to store the tag data
    while (RFID.available()) {
      char c = RFID.read();  // Read a byte from the RFID reader
      tag += c;              // Append the character to the tag string
    }
    Serial.print("Tag detected: ");  // Print a message indicating a tag was detected
    Serial.println(tag);             // Print the tag data
  }
}
