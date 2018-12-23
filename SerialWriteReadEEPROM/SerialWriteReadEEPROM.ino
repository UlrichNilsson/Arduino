#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  //String x;
  String data = "";
    Serial.println("Read and write to EEPROM from Serial window. Following commands can be used");
    Serial.println("read EEPROMAdress");
    Serial.println("write EEPROMAdress value");
    
    while(data.equals("")){
    data = Serial.readStringUntil('\n');
  }
  
if(data.substring(0,4) == "read")
{
        Serial.println("read EEPROMAdress");
        Serial.print("read Adress : ");
        Serial.println(data.substring(5,9));
        Serial.print("Value stored in adress : ");
        //Serial.println(EEPROM.read(data.substring(5,9).toInt()));
        
} else if(data.substring(0,5) == "write"){
        Serial.println("write EEPROMAdress value");
        Serial.print("write Adress : ");
        Serial.println(data.substring(6,10));
        Serial.print("Value : ");
        Serial.println(data.substring(11));
        //EEPROM.write(data.substring(6,10).toLong(),data.substring(11));
        
  }
}
