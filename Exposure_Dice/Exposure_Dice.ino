#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Time to");
  lcd.setCursor(0, 1);
  lcd.print("ROLL MUTHAFUCKA!");
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(13);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Exposure Dice"); 
      lcd.setCursor(0, 1);
      switch(reply) {
  case 0:
  lcd.print("Nothing happens");
  break;
  case 1:
  lcd.print("Safe for now...");
  break;  
  case 3:
  lcd.print("I'm hit. Wound");
  break;  
  case 4:
  lcd.print("Fuck.Frostbite");
  break;  
  case 5:
  lcd.print("Success!");
  break;  
  case 6:
  lcd.print("Uh oh.Frostbite");
  break;  
  case 7:
  lcd.print("Ouch. Wound");
  break;
  case 8:
  lcd.print("Noice!");
  break;  
  case 9:
  lcd.print("Easy peasy!");
  break;  
  case 10:
  lcd.print("Shh... Wound");
  break;  
  case 11:
  lcd.print("BITE!Lose Moral");
  break;  
  case 12:
  lcd.print("You survive.");
  break;  
      }
    }
  }
  prevSwitchState = switchState;
}
