//Program to interface with ultrasonic sensor
/*This program was wirtten by Adithya Selvaprithiviraj
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.*/

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  pinMode(16,OUTPUT);
  digitalWrite(16,1);
  delayMicroseconds(10);
  pinMode(16,INPUT);
  long int x=pulseIn(16,HIGH);//microseconds
  int dist=(330*x/20000);
  Serial.print("Distance= ");
  Serial.print(dist);
  Serial.println(" cms");
  delay(1000);
}
  
