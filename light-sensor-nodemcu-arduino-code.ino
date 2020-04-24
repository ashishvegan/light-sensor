const int lightSensor = A0;
const int led = D1;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int rawValue = analogRead(lightSensor);
  Serial.println(rawValue);
  if(rawValue < 300)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(10);
}
