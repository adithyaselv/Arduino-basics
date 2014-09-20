//Program to implement intelligent lighting using LDR
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
  pinMode(12,OUTPUT);  
}
void loop()
{
  int ldr=analogRead(3);
  Serial.println(ldr);
  delay(200);
  //check ldr value and switch on different lights in the room based on the those values
  if(ldr<500)
  {
  digitalWrite(11,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  }
  else if(ldr>500&&ldr<650)
  {
  digitalWrite(11,1);
  digitalWrite(12,0);
  digitalWrite(13,0);
  }
  else if(ldr>650&&ldr<800)
  {
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,0);
  }
  else
  {
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
  }
  delay(400);
}
