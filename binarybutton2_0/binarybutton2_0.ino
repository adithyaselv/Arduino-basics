//Program to implement simple 3 bit binary counter(with buttons)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

/* this program increments and decrements counter when recived input from two buttons connected to pins 9 and 8 respectively*/
int state=0;
int i;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(9,INPUT);
  digitalWrite(9,HIGH); //internal pullup
  pinMode(8,INPUT);
  digitalWrite(8,HIGH); //internal pullup
}
void loop()
{
  int a,b,c;
  
  if (digitalRead(9)==0)
  {
  {
    i++;
    if(i==8)
    i=0;
    while(digitalRead(9)==0);
    delay(50);//debounce
  }
    /* simple logic to slice binary bits from an integer*/
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
  }
  if (digitalRead(8)==0)
  {
  {
    i--;
    if(i==-1)
    i=7;
    while(digitalRead(8)==0);
    delay(50);//debounce
  }
    
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
  }
  
}
