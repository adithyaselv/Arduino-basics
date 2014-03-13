//Program to implement counter using 7 segment led
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  DDRD=255;
}
//connect 10K or 1K resistor to ground
void loop()
{
  int number[10];
  number[0]=B111111;
  number[1]=B000110;
  number[2]=B01011011;
  number[3]=B01001111;
  number[4]=B01100110;
  number[5]=B01101101;
  number[6]=B01111101;
  number[7]=B111;
  number[8]=B1111111;
  number[9]=B1101111;
  
  for(int i=0;i<10;i++)
  {
    PORTD=number[i];
    delay(600);
  }
  
}
