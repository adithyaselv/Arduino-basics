int num;
int dat=0;
void setup()
{
  Serial.begin(9600);
  pinMode(14,OUTPUT);
}
void loop()
{
  dat=0;
while(Serial.available()>0)
 { 
   dat=dat*10;
  {
   num=Serial.read()-48;
   dat=dat+num;
  }
 }
  convert(dat);
  delay(1000);
}
  void sendCode(int number)
{
  for(int i=0;i<number;i++)
  {
    digitalWrite(14,HIGH);
    delayMicroseconds(13);
    digitalWrite(14,LOW);
    delayMicroseconds(12);
  }
  delayMicroseconds(600);
}
void convert(int value)
{
  sendCode(96);
  for(int i=0;i<12;i++)
  {
    int val=value%2;
    value = value/2;
    if(val==1)
    sendCode(48);
    else
    sendCode(24);
  }
}
