//Program to implement random color mixing and displaying them in LCD display
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

int pin=0;
int red=0,blue=0,green=0,i=0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  
  
}
void loop()
{
  lcd.print("red");
  lcd.setCursor(5,0);
  lcd.print("blue");
  lcd.setCursor(10,0);
  lcd.print("green");
  int x=random(0,255);
  int y=random(0,255);
  int z=random(0,255);
  analogWrite(3,x);
  analogWrite(5,y);
  analogWrite(6,z);
  {
  lcd.setCursor(0,1);
  if(x<10)
  {
  lcd.print("00");
  lcd.setCursor(2,1);
  lcd.print(x);
  }
  else if(x<100)
  {
  
  lcd.print("0");
  lcd.setCursor(1,1);
  lcd.print(x);
  }
  else{
  lcd.print(x);
  }
  }
  {
  lcd.setCursor(5,1);
  if(y<10)
  {
  lcd.print("00");
  lcd.setCursor(7,1);
  lcd.print(y);
  }
  else if(y<100)
  {
  
  lcd.print("0");
  lcd.setCursor(6,1);
  lcd.print(y);
  }
  else{
  lcd.print(y);
  }
  }
  {
  lcd.setCursor(10,1);
  if(z<10)
  {
  lcd.print("00");
  lcd.setCursor(12,1);
  lcd.print(z);
  }
  else if(z<100)
  {
  
  lcd.print("0");
  lcd.setCursor(11,1);
  lcd.print(z);
  }
  else{
  lcd.print(z);
  }
  }
  delay(1000);
  lcd.clear();
  
}
