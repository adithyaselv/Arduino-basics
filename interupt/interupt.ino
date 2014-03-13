//Program to understand interrupts
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

int flag=0;
int i=0;
boolean state=1;
void setup()
{
  pinMode(2,INPUT);
  Serial.begin(9600);
  attachInterrupt(0,count,RISING);
  pinMode(13,OUTPUT);
}
void count()
{
  i++;
  flag=1;
}
void loop()
{
  if(flag==1)
  {
    Serial.println(i);
    flag=0;
    digitalWrite(13,state);
    delay(1000);
    state=!state;
    
  }
}
