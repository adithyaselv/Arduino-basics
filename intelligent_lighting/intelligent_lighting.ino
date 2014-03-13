void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(12,OUTPUT);  
}
void loop()
{
  int ldr=analogRead(3);
  Serial.println(ldr);
  delay(200);
  if(ldr>=500)
  digitalWrite(11,HIGH);
  else
  digitalWrite(11,LOW);
  if(ldr>=700)
  digitalWrite(12,HIGH);
  else
  digitalWrite(12,LOW);
  if(ldr>=850)
  digitalWrite(13,HIGH);
  else
  digitalWrite(13,LOW);
  delay(400);
}
