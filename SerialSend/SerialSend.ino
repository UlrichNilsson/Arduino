void setup() {
  Serial.begin(9600);
  //Serial1.begin(9600);
}

void loop() {
  /*if (Serial.available()) {      // If anything comes in Serial (USB),
    Serial1.write(Serial.read());   // read it and send it out Serial1 (pins 0 & 1)
  }

  if (Serial1.available()) {     // If anything comes in Serial1 (pins 0 & 1)
    Serial.write(Serial1.read());   // read it and send it out Serial (USB)
  }*/

int bytenum = Serial.available();
char bytnumAsChar[10];
char valueAsChar[10];

itoa(bytenum,bytnumAsChar,10);
Serial.write("bytenum:");
Serial.write(bytnumAsChar);

int value=Serial.read();

itoa(value,valueAsChar,10);
Serial.write("First byte:");
Serial.write(valueAsChar);

delay(1000);
  
}
