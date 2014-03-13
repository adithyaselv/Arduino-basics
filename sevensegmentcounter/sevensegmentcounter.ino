void setup()
{
  DDRD=255;
}
//connect 10K or 1K resistor to ground
void loop()
{
  PORTD=B111111;
  delay(500);
  PORTD=B000110;
  delay(500);
  PORTD=B01011011;
  delay(500);
  PORTD=B01001111;
  delay(500);
  PORTD=B01100110;
  delay(500);
  PORTD=B01101101;
  delay(500);
  PORTD=B01111101;
  delay(500);
  PORTD=B111;
  delay(500);
  PORTD=B1111111;
  delay(500);
  PORTD=B1101111;
  delay(500);
  PORTD=B10000000;
  delay(500);
  
}
