#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Random Dice");
  lcd.setCursor(0, 1);
  lcd.print("Roller!");
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(6);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("You roll a..."); 
      lcd.setCursor(0, 1);
      switch(reply) {
  case 0:
  lcd.print("1");
  break;
  case 1:
  lcd.print("2");
  break;  
  case 3:
  lcd.print("3");
  break;  
  case 4:
  lcd.print("4");
  break;  
  case 5:
  lcd.print("5");
  break;  
  case 6:
  lcd.print("6");
  break;  
      }
    }
  }
  prevSwitchState = switchState;
}
