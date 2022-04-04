#include <Arduino.h>
#include "SRF05Manager.h"
#include <lcd.h>

SRF05Manager SRF05;
LCD lcd;
void setup()
{
  Serial.begin(9600);
  lcd.setup();
}

void loop()
{
  Serial.println(SRF05.distance(25.4));
  Serial.println("SRF05.distance(25.4)");
  delay(400);
  lcd.setLcd(0,1);
  lcd.print(SRF05.distance(25.4));
  lcd.setLcd(1,1);
  lcd.print("abcbccbc");
}