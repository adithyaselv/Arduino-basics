//Program to implement a 2 digit counter using 7 segment led (charlieplexing)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

boolean number[10]={B111111,B000110,B01011011,B01001111,B01100110,B01101101,B01111101,B111,B1111111,B1101111};
void setup()
{
  DDRD=255;
  DDRB=3;
}
void loop()
{
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      for(int k=0;k<80;k++)
      {
        PORTB=B10;
        PORTD=number[i];
        delay(10);
        PORTB=B01;
        PORTD=number[j];
        delay(10);
      }
    }
  }
}
