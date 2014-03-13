//Program to implement room temperature display using lm35 and displaying it using 7 segment leds
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
  
  int temp,ledr,ledl;
  temp=analogRead(2)/2;  
  ledl=temp%10;
  ledr=temp/10;
  PORTB=B10;
  PORTD=number[ledr];
  delay(10);
  PORTB=B01;
  PORTD=number[ledl];
  delay(10);
  
}

