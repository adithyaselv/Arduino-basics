int val=0;
void setup()
{
  for(int i=2;i<7;i++)
  pinMode(i,INPUT);
  Serial.begin(9600);
  attachInterrupt(0,dtmf,RISING);
}
void dtmf()
{
  val=0;
  for(int i=3;i<7;i++)
  val=val+(digitalRead(i)<<(i-3));
}
void loop()
{
  if(val>0)
  {
    Serial.println(val);
    val=0;
  }
}
