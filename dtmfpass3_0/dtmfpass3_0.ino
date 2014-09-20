//Program to implement secure access system using DTMF
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

//setting initial timers to 0
// timers are used to check if the time taken to enter the paaword is more than 10 seconds
long int prev=0;
long int current=0;
int count=0;
boolean state=0;
int val=0;
int pass=0;
void setup()
{
  for(int i=2;i<7;i++)
  pinMode(i,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  //attaching interrupt
  attachInterrupt(0,dtmf,RISING);
}
void dtmf()
{
  for(int i=3;i<7;i++)
  val=val+(digitalRead(i)<<(i-3));
}
void loop()
{
  current=millis();
  if(current-prev>=10000)
  {
    pass=0;
    count=0;
    prev=current;
  } 
  if(val>0)
  {
    if(val==10)
    val=0;
    count++;
    if(count==1)
    {
    pass +=val;
    val=0;
    }
    if(count==2)
    {
    pass=pass*10;
    pass +=val;
    val=0;
    } 
    if(count==3)
    {
    pass=pass*10;
    pass +=val;
    val=0;
    count=20;
    }  
    if (count==20)
    {
      Serial.println(pass);
      count=0;
      if(pass==242) //checking if entered password matches the key
      {
        state=!state;
        digitalWrite(13,state);
        
      }
      else
      {
      digitalWrite(13,0);
      alarm();
      }
      pass=0;
    }
      
  }
}
//alarm if key is entered wrong
void alarm()
{
  for(int i=0;i<6;i++)
  {
    digitalWrite(12,1);
    delay(400);
    digitalWrite(12,0);
    delay(400);
  }
}
