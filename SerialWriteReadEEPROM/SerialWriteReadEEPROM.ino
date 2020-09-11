#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  String data = "";
    Serial.println("Read and write to EEPROM from Serial window. Following commands can be used");
    Serial.println("read EEPROMAdress");
    Serial.println("write EEPROMAdress value");
    
    while(data.equals("")){
    data = Serial.readStringUntil('\n');
    
  }

String command = data.substring(0,data.indexOf(" "));
String options = data.substring(data.indexOf(" ") + 1,data.length());
    
  
if(command == "read")
{
        int addrRead = (int)options.toInt();
        Serial.println(EEPROM.read(addrRead),DEC);    
} else if(command == "write"){
     
        int addrWrite=(int)options.substring(0,options.indexOf(" ")).toInt();
        int value=(int)options.substring(options.indexOf(" ")+1,options.length()).toInt();
        
        EEPROM.write(addrWrite,value);
  }
}
