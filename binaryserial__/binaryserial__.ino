//Program to implement simple 3 bit binary counter(with serial communication from pc)
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

/*this program gives introduction to serial communication between arduino and pc...
  here a binary counter is implemented and the count of the counter increases if it recieves '+' from pc and decrements if its recieves '-'*/
int i;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  /*initiallising serial communication at 9600 baud rate*/
  Serial.begin(9600);
 
}
void loop()
{
  int a,b,c;
  char sym;
  //checking if Serail data is available
   if (Serial.available()>0)
  {
    //saving the first byte in the buffer into sym
   sym=Serial.read();
   delay(200);
   //checking if the recieved charecter is '+' or '-'
  if(sym=='+') 
  {
    i++;
    if(i>7)
    i=0;
  }
  else if(sym=='-') 
  {
    i--;
    if(i==-1)
    i=7;
  }
    
  {  a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(11,a);
    digitalWrite(12,b);
    digitalWrite(13,c);
  }
}
  
}
