//==================================TX CODE ===============================
int trig=7;
int echo=8;
int distance;
long duration;

void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
void loop(){
  digitalWrite(trig,LOW);
  delay(2000);
  digitalWrite(trig,HIGH);
  delay(10000);
  digitalWrite(trig,LOW);

  duration =pulseIn(echo,HIGH);
  distance=duration* 0.0344 / 2;
  Serial.print(distance);
  delay(2000);
}
//=========================================RX CODE====================
void setup() {
  Serial.begin(9600); 
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read and store the incoming data
    String receivedData = Serial.readString();  
    Serial.print("Received Distance: ");
    Serial.println(receivedData);  // Print the distance value received from Arduino 1
  }
}
//============================================================================================
