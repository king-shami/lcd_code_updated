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
double dist1;
double dist2;
double velocity;
int state;
int counter;
int prevTime;
double s, v, a;

void velFunction()                        //speedometer display
{
  lcd.setCursor(0,0);
  lcd.print("Speedometer");
  lcd.setCursor(0,1);
  lcd.print(String(velocity,2) + "m/s");
}

void distFunction()                       //odometer display
{
  lcd.setCursor(0,0);
  lcd.print("Odometer");
  lcd.setCursor(0,1);
  lcd.print(String(dist2,2) + "m");
}

void chgDisp(int x=0)                      //switches between odometer and speedometer
{
  btnState = digitalRead(btn);
  x += btnState;
  if(x%2 == 0)
  {
    velFunction();
  }
  if(x%2 == 1)
  {
    distFunction();
  }
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Speedometer");
  lcd.setCursor(0,1);
  lcd.print(String(v,2) + " m/s");

  if(digitalRead(2) == LOW) {
    while (1) {
      int currTime = millis();
      if (digitalRead(2) == HIGH) {
        counter ++;
        dist1 = counter * PI * 2 * 1;
        dist2 = counter * PI * 2 * 1;
        v = PI * 2 * 1 / (currTime - prevTime);
        Serial.print(v);
        prevTime = currTime;

        break;
      }
    }
  }
  
  chgDisp();
}
