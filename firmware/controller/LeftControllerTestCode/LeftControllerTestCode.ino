
const int selectPin = 2;
const int startPin = 3;
const int homePin = 4;

const int dpadRight = 5;
const int dpadDown = 6;
const int dpadLeft = 7;
const int dpadUp = 8;

const int shoulderPin = 9;

void setup() {
  Serial.begin(9600);

  pinMode(selectPin, INPUT_PULLUP);
  pinMode(startPin, INPUT_PULLUP);
  pinMode(homePin, INPUT_PULLUP);

  pinMode(dpadRight, INPUT_PULLUP);
  pinMode(dpadDown, INPUT_PULLUP);
  pinMode(dpadLeft, INPUT_PULLUP);
  pinMode(dpadUp, INPUT_PULLUP);

  pinMode(shoulderPin, INPUT_PULLUP);
}

void loop() {
  Serial.print("Select: ");
  Serial.print(digitalRead(selectPin));

  Serial.print(" | Start: ");
  Serial.print(digitalRead(startPin));

  Serial.print(" | Home: ");
  Serial.print(digitalRead(homePin));

  Serial.print(" | Right: ");
  Serial.print(digitalRead(dpadRight));

  Serial.print(" Down: ");
  Serial.print(digitalRead(dpadDown));

  Serial.print(" Left: ");
  Serial.print(digitalRead(dpadLeft));

  Serial.print(" Up: ");
  Serial.print(digitalRead(dpadUp));

  Serial.print(" | Shoulder: ");
  Serial.println(digitalRead(shoulderPin));

  delay(100);
}
