//Project -- Speedometer & Odometer
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 6, d5 = 7, d6 = 8, d7 = 9;
int btn = 3;
int hSens = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  pinMode(btn,INPUT);
  pinMode(hSens,INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

int btnState;
int state;
int counter;
double prevTime;
double d, v;
int x;

void velFunction()                        //speedometer display
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Speedometer:");
  lcd.setCursor(0,1);
  lcd.print(String(v,2) + "m/s");
}

void distFunction()                       //odometer display
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Odometer:");
  lcd.setCursor(0,1);
  lcd.print(String(d,2) + "m");
}

void chgDisp()                      //switches between odometer and speedometer
{
  btnState = digitalRead(btn);
  x += btnState;
  Serial.print("state");
  Serial.println(x);
  if(x%2 == 0)
  {
    velFunction();
  }
  if(x%2 == 1)
  {
    distFunction();
  }
  delay(250);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Speedometer:");
  lcd.setCursor(0,1);
  lcd.print(String(v,2) + "m/s");

  if(digitalRead(2) == LOW) {
    while (1) {
      double currTime = millis()/1000.0;
      if (digitalRead(2) == HIGH) {
                
        counter ++;
        d = counter * PI * 2 * 1;
        v = 2 * PI * 1 / (currTime - prevTime);
        prevTime = currTime;
        
        break;
      }
    }
  }
  chgDisp();
}
