//Program to implement room temperature display using lm35 and displaying it using 7 segment leds
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/


/* Setting binary values for numbers 0 to 9 in the array index 0 to 9 of number array
   connections from PORTD pin-0 to 7 is given to 7 segment led A-H respectively
   digital pin 8 and pin 9 are used as selected pins */
boolean number[10]={B111111,B000110,B01011011,B01001111,B01100110,B01101101,B01111101,B111,B1111111,B1101111};
void setup()
{

  DDRD=255;
  DDRB=3;
}
void loop()
{
  
  int temp,ledr,ledl;
  //temperature in degree C requieres following arthimetic
  temp=analogRead(2)/2;
  //splitting temperature value to display it  
  ledl=temp%10;
  ledr=temp/10;
  //display temperature using multiplexing
  PORTB=B10;
  PORTD=number[ledr];
  delay(10);
  PORTB=B01;
  PORTD=number[ledl];
  delay(10);
  
}

