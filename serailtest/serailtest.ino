//Program to implement binatry counter with serial interfacing
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{

  if(Serial.available()>0)
  {
    int count=Serial.read();
    count=count-48;
    if(count>=0&&count<8)
    {
      int a=count%2;
      int b=(count/2)%2;
      int c=(count/4)%2;
      digitalWrite(11,a);
      digitalWrite(12,b);
      digitalWrite(13,c);
      Serial.print(c);
      Serial.print(b);
      Serial.println(a);
      
    }
  }
}
  
