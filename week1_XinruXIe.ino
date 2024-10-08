int SW=8;
int LED=7;

void setup()
{
pinMode(SW,INPUT);
pinMode(LED,OUTPUT);
}

void loop()
{
  SW=digitalRead(8);
  if(SW==HIGH)
  {digitalWrite(LED,HIGH);
  delay(0);}
  else
  {digitalWrite(LED,LOW);
  }
}

