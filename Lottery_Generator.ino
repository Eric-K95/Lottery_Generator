//Project: Lottery Generator
//Sketched by JIN-WOO KIM

#include <LiquidCrystal.h>;
int inPin = 13; 
int resetPin = 12;
int buttonState = 0;
int resetState = 0;
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup() {
  pinMode(inPin, INPUT); //define the first button as input
  pinMode(resetPin, INPUT); //define the second button as input
  digitalWrite(inPin, HIGH);
  digitalWrite(resetPin, HIGH);
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);
  lcd.print("Lottery");
  lcd.setCursor(3, 1);
  lcd.print("Generator");
  delay(2000);
  lcd.clear();
}

void loop() {
  randomSeed(analogRead(0));
  buttonState = digitalRead(inPin);
  resetState = digitalRead(resetPin);
  if (buttonState == LOW) {
  }
  else if (buttonState == HIGH) {
    lcd.setCursor(0,0);
    lcd.print(":");
    lcd.setCursor(1, 0);
    lcd.print(random(1, 70)); //select a random number between 1 to 70
    lcd.print(":");
    lcd.setCursor(4, 0);
    lcd.print(random(1, 70));
    lcd.print(":");
    lcd.setCursor(7, 0);
    lcd.print(random(1, 70));
    lcd.print(":");
    lcd.setCursor(10, 0);
    lcd.print(random(1, 70));
    lcd.print(":");
    lcd.setCursor(13, 0);
    lcd.print(random(1, 70));
    lcd.print(":");
    lcd.setCursor(0, 1);
    lcd.print("BINGO BALL: ");
    lcd.print("(");
    lcd.print(random(1, 25)); //select a random number between 1 to 25
    lcd.print(")"); 
  }
  if (resetState == LOW) {
  }
  else if (resetState == HIGH) {
    lcd.clear(); //clear the lcd screen when the small button is pressed
  }
}
