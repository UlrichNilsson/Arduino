/*  Author: Ulrich Nilsson
 *  Date    2018-12-15
 * 
 * 
 */

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
int a;

for( a = 0; a < 5; a++ ){

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}

  
for( a = 0; a < 5; a++ ){

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);                       // wait for a second
}


}
