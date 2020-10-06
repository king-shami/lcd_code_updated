#include <LiquidCrystal.h>
#include <Wire.h>
LiquidCrystal lcd(8, 10, 4,5,6,7);

double R = 0.56;
int counter = 0;
double s,v,a = 0;
unsigned int lastTime = 0;

int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;

int state = 0;

void hall_1_counter() {
  counter += 1;
  unsigned long elapsed = millis() - lastTime;
  unsigned int timeDelta = millis() - lastTime;
  s = double(counter) * PI * double(2 * R);
  v = (PI * double(2 * R)) / double(timeDelta) * 1000.0;
  lastTime = millis();
}

//void reset_pin() {
//  delay(50);
//  if(digitalRead(2) == HIGH){
//    state ++;
//    lcd.clear();
//  }
//}

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("loading...");
  Wire.begin();
  Wire.beginTransmission(0x68);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission(true);
  delay(250);
  lcd.clear();
  attachInterrupt(digitalPinToInterrupt(3),hall_1_counter,RISING);
//  attachInterrupt(digitalPinToInterrupt(2),reset_pin,FALLING);
}

void loop() {
//  Serial.println(millis());

  if (digitalRead(2)==HIGH){
    while(digitalRead(2) == HIGH) {
      delay(50);
      if (digitalRead(2) == LOW) {
        state ++;
        lcd.clear();
      }
    }
  }

  if (state % 3 == 0) {
    lcd.setCursor(0,0);
    lcd.print("Distance");
    lcd.setCursor(0,1);
    lcd.print(s);
    lcd.print(" m");
  } else if (state % 3 == 1) {
    lcd.setCursor(0,0);
    lcd.print("Velocity");
    lcd.setCursor(0,1);
    lcd.print(v);
    lcd.print(" m/s");
  } else {
    Wire.beginTransmission(0x68);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(0x68,14,true);
    AcX=Wire.read()<<8|Wire.read();
    AcY=Wire.read()<<8|Wire.read();
    AcZ=Wire.read()<<8|Wire.read();
    Tmp=Wire.read()<<8|Wire.read();
    GyX=Wire.read()<<8|Wire.read();
    GyY=Wire.read()<<8|Wire.read();
    GyZ=Wire.read()<<8|Wire.read();
    
    lcd.setCursor(0,0);
    lcd.print("Temperature");
    lcd.setCursor(0,1);
    lcd.print(int(Tmp/340.00+36.53));
    lcd.print(" C");
  }
}
