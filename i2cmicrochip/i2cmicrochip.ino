//Program to do basic interface with MCP23017
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

#include <Wire.h>
void setup()
{
  
  Serial.begin(9600);
  Wire.begin();
  Wire.beginTransmission(0x20);
  Wire.write((byte)0);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.write(0xFF);
  Wire.endTransmission();
}
void loop()
{
}
