int logic=1;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop ()
{
  int a,b,c;
  int i;
  for(i=0;i<8;i+logic)
  {
    
    a=i%2;
    b=(i/2)%2;
    c=(i/4)%2;
    digitalWrite(13,a);
    digitalWrite(12,b);
    digitalWrite(11,c);
    delay(1000);
    if(i==-1||i==7)
    logic=-logic;
  }
}
    
