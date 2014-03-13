//Program to implement blinking without delay function(millis implementation)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

long int current;
long int previous;
boolean state=0;
void setup()
{
  pinMode(12,OUTPUT);
}
void loop()
{
  
  current=millis();
  if(current-previous>=1000)
  {
    state=!state;
    previous=current;
  }
  digitalWrite(12,state);
}

