const int hallA = 2;
const int hallB = 3;
const int hallC = 4;

void setup() {
  Serial.begin(9600);
  pinMode(hallA, INPUT_PULLUP);
  pinMode(hallB, INPUT_PULLUP);
  pinMode(hallC, INPUT_PULLUP);
  Serial.println("Hall Sensor Test Ready — rotate axle slowly");
  Serial.println("A | B | C");
  Serial.println("----------");
}

void loop() {
  int a = digitalRead(hallA);
  int b = digitalRead(hallB);
  int c = digitalRead(hallC);

  Serial.print(a);
  Serial.print(" | ");
  Serial.print(b);
  Serial.print(" | ");
  Serial.println(c);

  delay(1); // 10 readings per second
}