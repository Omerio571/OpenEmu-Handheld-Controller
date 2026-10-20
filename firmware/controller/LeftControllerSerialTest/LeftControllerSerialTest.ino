// Historical left-side wiring test; verify against the actual left-side assembly before use.
const int shoulderPin = 10;
const int dpadUp = 16;
const int dpadLeft = A0;
const int dpadRight = 15;
const int dpadDown = 14;
const int joystickX = A3;
const int joystickY = A2;
const int joystickSW = A1;

void setup() {
  Serial.begin(9600);
  pinMode(shoulderPin, INPUT_PULLUP);
  pinMode(dpadUp, INPUT_PULLUP);
  pinMode(dpadLeft, INPUT_PULLUP);
  pinMode(dpadRight, INPUT_PULLUP);
  pinMode(dpadDown, INPUT_PULLUP);
  pinMode(joystickSW, INPUT_PULLUP);
}
void loop() {
  int xValue = analogRead(joystickX);
  int yValue = 1023 - analogRead(joystickY);
  Serial.print("Shoulder: "); Serial.print(digitalRead(shoulderPin));
  Serial.print(" | Up: "); Serial.print(digitalRead(dpadUp));
  Serial.print(" Left: "); Serial.print(digitalRead(dpadLeft));
  Serial.print(" Right: "); Serial.print(digitalRead(dpadRight));
  Serial.print(" Down: "); Serial.print(digitalRead(dpadDown));
  Serial.print(" | X: "); Serial.print(xValue);
  Serial.print(" Y: "); Serial.print(yValue);
  Serial.print(" SW: "); Serial.println(digitalRead(joystickSW));
  delay(100);
}
