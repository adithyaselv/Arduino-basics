long int prev=0;
long int current=0;
int count=0;
int val=0;
int pass=0;
void setup()
{
  for(int i=2;i<7;i++)
  pinMode(i,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
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
      if(pass==242)
      {
        digitalWrite(13,1);
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
