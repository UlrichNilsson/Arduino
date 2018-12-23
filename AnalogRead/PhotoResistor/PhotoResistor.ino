const int photoSensor = A0;
const int greenLEDPin = 13;


void setup() {
  Serial.begin(9000);
  int greenValue = 0;
  pinMode(greenLEDPin,OUTPUT);  

}

void loop() {

  
  Serial.print("Sensor value\t");
  Serial.print(String(analogRead(photoSensor)));
  if(analogRead(photoSensor)>400)
  {
    digitalWrite(greenLEDPin,LOW);
  }else
    digitalWrite(greenLEDPin,HIGH);
  
  delay(500);
}
