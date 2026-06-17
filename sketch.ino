int redLed = 13;
int yellowLed = 12;
int greenLed = 11;

void setup()
{
pinMode(redLed, OUTPUT);
pinMode(yellowLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop()
{
 //RED ON

digitalWrite(redLed, HIGH);
digitalWrite(yellowLed, LOW);
digitalWrite(greenLed, LOW);

delay(5000);

 //YELLOW ON

digitalWrite(redLed, LOW);
digitalWrite(yellowLed, HIGH);
digitalWrite(greenLed, LOW);

delay(2000);

 //GREEN ON

digitalWrite(redLed, LOW);
digitalWrite(yellowLed, LOW);
digitalWrite(greenLed, HIGH);

delay(5000);
}