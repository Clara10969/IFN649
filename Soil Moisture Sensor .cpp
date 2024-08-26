// C++ code
//


void setup()
{
  Serial.begin (9600);
 }

void loop()
{
  int a;
  int b;
  a=analogRead(A0);
  b=map(a,0,1023,0,255);
  Serial.println(b);
  delay(500);
}

