int animationSpeed = 0;

void setup()
{
  pinMode(13, OUTPUT);
  
}

void loop()
{
   animationSpeed = 1000;
   digitalWrite(13, HIGH);
   delay(animationSpeed);
   digitalWrite(13, LOW);
   animationSpeed = 500;
   digitalWrite(12, HIGH);
   delay(animationSpeed);
   digitalWrite(12, LOW);
   animationSpeed = 500;
   digitalWrite(11, HIGH);
   delay(animationSpeed);
   digitalWrite(11, LOW);
} 
