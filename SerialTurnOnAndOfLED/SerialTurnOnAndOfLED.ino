void setup() {
  Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW); 
}

void loop() {
int value=Serial.read();

if(value==49)
{
  Serial.write("On");
  digitalWrite(LED_BUILTIN, HIGH); 
}else if(value==48)
{
  Serial.write("Off");
  digitalWrite(LED_BUILTIN, LOW); 
}
  
}
