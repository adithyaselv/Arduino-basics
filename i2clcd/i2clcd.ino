//Program to implement clock using DS1307 and  print lcd display
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

#include <Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
int data[7];
void setup()
{
  pinMode(12,OUTPUT);
  lcd.begin(16,2);
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
    if(i< 4|| i > 4)
    {
    Serial.print(data[i],HEX);
    Serial.print(":");
    lcd.print(data[i],HEX);
    lcd.print(":");
    }
    if(i==4)
    {
     lcd.setCursor(0,1);
     Serial.print(data[i],HEX);
     Serial.print(":");
    
    lcd.print(data[i],HEX);
    lcd.print(":");
    }
  }   
  
  delay(1000);
  Wire.endTransmission();
  lcd.clear();
}
  
