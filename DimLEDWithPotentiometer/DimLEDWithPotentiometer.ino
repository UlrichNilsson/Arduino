int LEDPin = 9;
int potPin = A0;
int readValue;
int writeValue;

void setup() {

  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(LEDPin,OUTPUT);


}

void loop() {
  readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(LEDPin,writeValue);
  Serial.print("You are writing the value of ");
  Serial.println(writeValue);
}
