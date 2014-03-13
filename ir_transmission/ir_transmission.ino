//Program to implement IR control(transmission sony protocol)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  pinMode(14,OUTPUT);
}
void loop()
{
  convert(999);
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
