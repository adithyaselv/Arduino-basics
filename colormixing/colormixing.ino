//Program to implement color mixing using buttons with rgb led
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

int pin=0;
int red=0,blue=0,green=0,i=0;

void setup()
{
  
  pinMode(9,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  Serial.begin(9600);
  
}
void loop()
{
  
  
  if (digitalRead(7)==0)
  {
  {
    pin=pin+3;
    if(pin==9)
    pin=5;
    if(pin==8)
    pin=3;
    Serial.println(pin);
  }
    while(digitalRead(7)==0);
    delay(50);//debounce
  }
  switch(pin)
  {
  case 3:
  {
  if (digitalRead(8)==0)
  {
  {
    if(blue==256)
    blue=0;
      delay(50);
      blue++;
      analogWrite(pin,blue);
      Serial.println(blue);
  }
    
    delay(50);//debounce
  }
  if (digitalRead(9)==0)
  {
  {
    if(blue==-1)
    blue=255;
      delay(50);
      blue--;
      analogWrite(pin,blue);
      Serial.println(blue);
     }
    
    delay(50);//debounce
  }
  break;
  }
  case 5:
  {
  if (digitalRead(8)==0)
  {
  {
    if(green==256)
    green=0;
      delay(50);
      green++;
      analogWrite(pin,green);
      Serial.println(green);
  }
    
    delay(50);//debounce
  }
  if (digitalRead(9)==0)
  {
  {
    if(green==-1)
    green=255;
      delay(50);
      green--;
      analogWrite(pin,green);
      Serial.println(green);
     }
    
    delay(50);//debounce
  }
  break;
  }
  case 6:
  {
  if (digitalRead(8)==0)
  {
  {
    if(red==256)
    red=0;
      delay(50);
      red++;
      analogWrite(pin,red);
      Serial.println(red);
  }
    
    delay(50);//debounce
  }
  if (digitalRead(9)==0)
  {
  {
    if(red==-1)
    red=255;
      delay(50);
      red--;
      analogWrite(pin,red);
      Serial.println(red);
     }
    
    delay(50);//debounce
  }
  break;
  }
  }
  
}
