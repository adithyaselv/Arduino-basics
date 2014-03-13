//Program to interface with 16x2 LCD display
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup()
{
  lcd.begin(16,2);
  
}
void loop()
{
  
  for(int i=15;i>-1;i--)
  {
    lcd.setCursor(i,0);
    lcd.print("hello");
    delay(300);
    lcd.clear();
  }
  
}

