#include <LiquidCrystal.h>
#include <Wire.h>
LiquidCrystal lcd(8,10,4,5,6,7);

#define NUM_READINGS 30.0
#define SCREENS  4

int PREV = 12;
int NEXT = 11;
int RESET = 2;

double R = 0.56;
int counter = 0;
double s,v,a = 0;
unsigned int lastTime = 0;
int accel_last_read_time = 0;
bool unset = false;

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

void up_state() {
  state ++;
  lcd.clear();
}

void down_state() {
  state --;
  lcd.clear();
}

void break_adjustment() {
  state ++;
  unset = false;
}

void reduce_radius() {
  R -= 0.005;
}

void increase_radius() {
  R += 0.005;
}

void reset() {
  v = 0; s = 0; counter = 0;
  lcd.clear();
  state = state;
}

void debounce_button(int pin, void(*f)()) {
  if  (digitalRead(pin)==LOW) {
      while(digitalRead(pin) == LOW) {
        delay(50);
        if (digitalRead(pin)== HIGH) {
          f();
        }
      }
    }
}

void adjust_wheel() {
  lcd.print("Adjust Wheel   ");
  unset = true;
  
  while(unset) {
    lcd.setCursor(0,1);
    lcd.print("Diam: ");
    lcd.print(2*R);
    lcd.print(" m       ");

    debounce_button(PREV, reduce_radius);
    debounce_button(NEXT, increase_radius);
    debounce_button(RESET, break_adjustment);
  }
  
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("loading...");
  Wire.begin();
  Wire.beginTransmission(0x68);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission(true);
  delay(250);
  lcd.clear();
  attachInterrupt(digitalPinToInterrupt(3), hall_1_counter, FALLING);
  pinMode(3,INPUT_PULLUP);
  pinMode(A4,INPUT_PULLUP);
  pinMode(A5,INPUT_PULLUP);
}

void loop() {

  Serial.println(state);
  unsigned int now = millis();
  if (now - lastTime > 3000) {
    Serial.print("no move || ");
    Serial.print(" last: ");
    Serial.print(lastTime);
    Serial.print(" current: ");
    Serial.print(now);
    Serial.print(" delta: ");
    Serial.println(now - lastTime);
    v = 0;
  }
  
  debounce_button(NEXT, up_state);
  debounce_button(PREV, down_state);
  debounce_button(RESET, reset);

  if (state % SCREENS == 0) {
    
    lcd.setCursor(0,0);
    lcd.print("Distance                     ");
    lcd.setCursor(0,1);
    lcd.print(s);
    lcd.print(" m         ");
    
  } else if (state % SCREENS == 1) {
    
    lcd.setCursor(0,0);
    lcd.print("Velocity        ");
    lcd.setCursor(0,1);
    lcd.print(v);
    lcd.print(" m/s         ");
    
  } else if (state % SCREENS == 2) {

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
    lcd.print("Acceleration        ");
    lcd.setCursor(0,1);
    double a_raw = pow((double(AcX/16384.0) * 9.8),2) + pow((double(AcY/16384.0) * 9.8),2) + pow((double(AcZ/16384.0) * 9.8),2);
    
    if(millis() - accel_last_read_time > 750) {
      lcd.print((pow(a_raw,0.5) - 9.96) > 0 ? pow(a_raw,0.5) - 9.96 : 0);
      lcd.print(" m/s-2     ");
      accel_last_read_time = millis();
    }
    
  } else {

    adjust_wheel();
    
  }

  accel_last_read_time = millis();
}
