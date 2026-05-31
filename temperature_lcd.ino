#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 7, 6, 5, 4, 3);

int sen = A0;
float temp = 0;

void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("TEMPERATURE:");
  delay(2000);
  lcd.clear();
}

void loop()
{
  int reading = analogRead(sen);
  float voltage = reading * (5.0 / 1023.0);
  temp = voltage * 100;

  lcd.setCursor(0, 0);
  lcd.print("TEMPERATURE:");

  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.print(" C  ");

  delay(1000);
}