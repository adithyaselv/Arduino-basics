//Program to implement IR control (reception)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

boolean data[12];

void setup()
{
  Serial.begin(9600);
  pinMode(15,INPUT);
  
}
void loop()
{
  int val;
  if(pulseIn(15,LOW)>2000)
  {
    val=0;
    for(int i=0;i<12;i++)
    {
      if(pulseIn(15,LOW)>1000)
      data[i]=1;
      else
      data[i]=0;
    }
    for(int i=0;i<12;i++)
    {
      if(data[i]==1)
      val=val+(1<<i);
    }
    Serial.println(val);
  }
  
  

  
}
