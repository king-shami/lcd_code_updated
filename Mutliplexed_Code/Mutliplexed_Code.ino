int counter;
double prevTime;
double velocity, displacement;

void incrementCounter(){
  double currTime = millis()/1000.0;
  velocity = PI * 2 * 0.5 / (currTime - prevTime);
  
  prevTime = currTime;
  counter ++;
  displacement = counter * PI * 2 * 0.5;
}

void setup() {
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), incrementCounter, RISING);
}

void loop() {
  Serial.print("Displacement: ");
  Serial.print(displacement);
  Serial.print("Velocity: ");
  Serial.print(velocity);
  Serial.println();
}
