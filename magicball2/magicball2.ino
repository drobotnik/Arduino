#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("How about...:");
      lcd.setCursor(0, 1);
      switch(reply) {
  case 0:
  lcd.print("yup");
  break;
  case 1:
  lcd.print("Nope");
  break;  
  case 3:
  lcd.print("Maybe yes");
  break;  
  case 4:
  lcd.print("Maybe no");
  break;  
  case 5:
  lcd.print("Maybe fuck you");
  break;  
  case 6:
  lcd.print("Ask again");
  break;  
  case 7:
  lcd.print("what if it didnt?");
  break;  
  case 8:
  lcd.print("fuck you");
  break;
      }
    }
  }
  prevSwitchState = switchState;
}
