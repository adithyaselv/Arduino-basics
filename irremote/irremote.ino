  //Program to implement IR control(reception)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

boolean data[12];
int d=0;
void setup()
{
  Serial.begin(9600);
  pinMode(15,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  int val,a,b,c;
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
  
  if(val==144) 
  {
    d++;
    if(d>7)
    d=0;
  }
  else if(val==145) 
  {
    d--;
    if(d==-1)
    d=7;
  }
    
  {  a=d%2;
    b=(d/2)%2;
    c=(d/4)%2;
    digitalWrite(11,a);
    digitalWrite(12,b);
    digitalWrite(13,c);
  }
  Serial.println(d);
  
}
