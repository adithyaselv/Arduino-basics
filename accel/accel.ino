//Program to interface with low cost MEMS accelerometer
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

/* the three analog output pins of the accelerometer are directly tied to arduino A0 to A2*/
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int x=analogRead(0);
  int y=analogRead(1);
  int z=analogRead(2);
  Serial.print("x=");
  Serial.println(x);
  Serial.print("y=");
  Serial.println(y);
  Serial.print("z=");
  Serial.println(z);
  delay(500);
}
