//Program to implement simple Rpm counter in wheel with spokes using interupt
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/
int flag=0;
int i=0;
float rpm=0;
long int current;
long int previous=0;
void setup()
{
  pinMode(2,INPUT);
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  digitalWrite(3,1);
  attachInterrupt(0,count,RISING);
  pinMode(13,OUTPUT);
  analogWrite(9,255);
  analogWrite(10,0);
}
void count()
{
  i++;
}
void loop()
{
 
  
  
  if(millis()-previous>=30000)
  {
    rpm=i/6*2;
    i=0;
    previous=millis();
    Serial.println(rpm);
  }
  
}
