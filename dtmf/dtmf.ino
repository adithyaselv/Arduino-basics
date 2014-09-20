//Program to interface with dtmf decoder shield
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

int val=0;
void setup()
{
  for(int i=2;i<7;i++)
  pinMode(i,INPUT);
  Serial.begin(9600);
  //attaching interrupt pin
  attachInterrupt(0,dtmf,RISING);
}
//dtmf () function gets executed once the interrupt pin recieves high 
void dtmf()
{
  val=0;
  for(int i=3;i<7;i++)
  val=val+(digitalRead(i)<<(i-3)); //converting binary to decimal using left shifting
}
void loop()
{
  if(val>0)
  {
    Serial.println(val);
    val=0;
  }
}
