void setup()
{
pinMode(13,OUTPUT);
}

void loop()
{
int c=1;
while(c<6)
{
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
c++;
}
int t=1;
while(t<6)
{
digitalWrite(13,HIGH);
delay(2000);
digitalWrite(13,LOW);
delay(2000);
t++;
}
}
