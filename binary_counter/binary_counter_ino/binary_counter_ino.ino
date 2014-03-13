//Program to implement simple 3 bit binary counter(Automatic)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop ()
{
  int a,b,c;
  int i;
  for(i=0;i<8;i++)
  {
    
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
    delay(1000);
    
  }
}
    
