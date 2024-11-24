int trig=7;
int echo=8;
int timeInMicroseconds;
int distanceInCm;
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
  timeInMicroseconds =pulseIn(echo,HIGH);
  distanceInCm=timeInMicroseconds/29/2;
  Serial.print(distanceInCm);
  delay(2000);
}
