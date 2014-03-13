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
  if(i==8)
  i=0;
  if (digitalRead(9)==0)
  {
  {
    i++;
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
  }
    while(digitalRead(9)==0);
    delay(50);//debounce
  }
  if (digitalRead(8)==0)
  {
  {
    i--;
    if(i==-1)
    i=0;
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
  }
    while(digitalRead(8)==0);
    delay(50);//debounce
  }
  
}
