//Program to implement IR transmission(sony protocol) and serial display
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

int num;

int x[3];
void setup()
{
  Serial.begin(9600);
  pinMode(14,OUTPUT);
}
void loop()
{
  
if(Serial.available()>0)
 { 
  for(int i=0;i<3;i++)
  {
    x[i]=Serial.read()-48;
    delay(30);
  }
  int dat=(x[0]*100)+(x[1]*10)+(x[2]);
  Serial.println(dat);
  convert(dat);
  convert(dat);
  convert(dat);
 }
   delay(1000);
}
  void sendCode(int number)
{
  for(int i=0;i<number;i++)
  {
    digitalWrite(14,HIGH);
    delayMicroseconds(8);
    digitalWrite(14,LOW);
    delayMicroseconds(7);
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
