void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{

  if(Serial.available()>0)
  {
    int count=Serial.read();
    count=count-48;
    if(count>=0&&count<8)
    {
      int a=count%2;
      int b=(count/2)%2;
      int c=(count/4)%2;
      digitalWrite(11,a);
      digitalWrite(12,b);
      digitalWrite(13,c);
      Serial.print(c);
      Serial.print(b);
      Serial.println(a);
      
    }
  }
}
  
