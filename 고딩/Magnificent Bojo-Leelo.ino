// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16, 2);

}

void loop()
{
  char str[] = "@cha._.ho follow plz      ";
  lcd.setCursor(15,0);
  
  for(int i = 0; i < 26; i++){
  lcd.scrollDisplayLeft();
  lcd.print(str[i]);
  delay(300);
}
lcd.clear();
}
