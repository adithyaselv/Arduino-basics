//Program to implement timer based control using DS1307 
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

#include <Wire.h>
int data[7];
void setup()
{
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  Wire.begin();
  Wire.beginTransmission(0x68);
  Wire.write((byte)0);
  Wire.write(0x25);
  Wire.write(0x05);
  Wire.write(0x18);
  Wire.write(0x07);
  Wire.write(0x12);
  Wire.write(0x10);
  Wire.write(0x13);
  Wire.endTransmission();
}
void loop()
{
  Wire.beginTransmission(0x68);
  Wire.write((byte)0);
  Wire.endTransmission();
  Wire.requestFrom(0x68,7);
  Wire.beginTransmission(0x68);
  for(int i=0;i<7;i++)
  {
    data[i]=Wire.read();
    
    Serial.print(data[i],HEX);
    Serial.print(":");
  }
  Serial.println();
  if(data[0]==0x30 && data[1]==0x5)
    digitalWrite(12,1);
    if(data[0]==0x0 && data[1]==0x6)
    digitalWrite(12,0);
  delay(1000);
  Wire.endTransmission();
}
  
