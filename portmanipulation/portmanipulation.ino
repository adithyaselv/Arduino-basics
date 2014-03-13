//Program to use Port manupulation
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  DDRB=B111000;
}
void loop()
{
  PORTB=B111000;
  delay(500);
  PORTB=B010000;
  delay(500);
}
