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
}

int btnState;
double dist1;
double dist2;
double velocity;
int state;

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
  lcd.print(String(velocity,2) + "m/s");
  dist1 = 0;
  state = digitalRead(hSens);
  if(state == LOW)
  {
    while(1)
    {
      state = digitalRead(hSens);
      if(state == HIGH)
      {
        dist1 += 2*PI*0.3;
        dist2 += 2*PI*0.3;
        velocity = dist1/(millis()/1000);
        break;
      }
    }
  }
  chgDisp();
}
