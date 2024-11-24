#include <SoftwareSerial.h>
#include <SPI.h>
#include <SD.h>

SoftwareSerial RFID(2, 3); // RFID pins
const int buzzerPin = 8;   // Buzzer pin
const int chipSelect = 4;  // Chip select pin for SD card

void setup() {
  Serial.begin(9600);      // Start Serial communication
  RFID.begin(9600);        // Start RFID communication
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output

  if (!SD.begin(chipSelect)) {
    Serial.println("SD card initialization failed!");
    return;
  }
  
  Serial.println("CEMIS RFID Reader Ready");
}

void loop() {
  if (RFID.available()) {
    String tag = ""; // To store the RFID tag
    while (RFID.available()) {
      char c = RFID.read(); // Read data from RFID
      tag += c;             // Append to the tag string
    }

    Serial.println("Tag detected");
    Serial.println(tag);

    logAttendance(tag);  // Log the tag to SD card
    
    digitalWrite(buzzerPin, HIGH); // Activate buzzer
    delay(100);                    // Wait for 100ms
    digitalWrite(buzzerPin, LOW);  // Deactivate buzzer
  }
}

void logAttendance(String tag) {
  File dataFile = SD.open("attendance.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.print("Tag detected: ");
    dataFile.println(tag);
    dataFile.close(); // Close the file after writing
  } else {
    Serial.println("Error writing to file");
  }
}
