int key=242;
int count=0;
int input=0;
long int dur=0;
int state=0;
int val=0;
void setup()
{
  for(int i=2;i<7;i++)
  pinMode(i,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  attachInterrupt(0,dtmf,RISING);
}
void loop()
{
  if(val>0)
  {
    dur=millis();
    input=(input*10)+val;
    val=0;
    count++;
  }
  if((count==3)&&(millis()-dur<60000)&&(input==key))
  {
    state=!state;
    digitalWrite(13,state);
    res();
  }
  if(millis()-dur>60000||count==3)
  {
    res();
  }
  if(input>0)
  {
    Serial.println(input);
  }
}
void dtmf()
{
  for(int i=3;i<7;i++)
  val=val+(digitalRead(i)<<(i-3));
}
void res()
{
  count=0;
  input=0;
  dur=0;
}
