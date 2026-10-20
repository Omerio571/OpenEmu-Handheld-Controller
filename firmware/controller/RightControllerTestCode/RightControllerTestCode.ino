
const int selectPin = 2;
const int startPin = 3;
const int homePin = 4;

const int AButton = 5;
const int BButton = 6;
const int YButton = 7;
const int XButton = 8;

const int shoulderPin = 9;

void setup() {
  Serial.begin(9600);

  pinMode(selectPin, INPUT_PULLUP);
  pinMode(startPin, INPUT_PULLUP);
  pinMode(homePin, INPUT_PULLUP);

  pinMode(AButton, INPUT_PULLUP);
  pinMode(BButton, INPUT_PULLUP);
  pinMode(YButton, INPUT_PULLUP);
  pinMode(XButton, INPUT_PULLUP);

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
  Serial.print(digitalRead(AButton));

  Serial.print(" Down: ");
  Serial.print(digitalRead(BButton));

  Serial.print(" Left: ");
  Serial.print(digitalRead(YButton));

  Serial.print(" Up: ");
  Serial.print(digitalRead(XButton));

  Serial.print(" | Shoulder: ");
  Serial.println(digitalRead(shoulderPin));

  delay(100);
}
