void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int A = digitalRead(2);
  delay(1000);
  int B = digitalRead(3);
  delay(1000);
  int C = digitalRead(4);
  delay(1000);
  int D = digitalRead(5);
  int a = (!A && !B && !C && D) || (!A && B && !C && !D);
  int b = (!A && B && !C && D) || (!A && B && C && !D);
  int c = !A && !B && C && !D;
  int d = (!A && !B && !C && D) || (!A && B && !C && !D) || (!A && B && C && D);
  int e = (!A && D) || (!A && B && !C) || (!B && !C && D);
  int f = (!A && !B && D) || (!A && !B && C) || (!A && C && D);
  int g = (!A && !B && !C) || (!A && B && C && D);

  digitalWrite(6, a * HIGH);
  digitalWrite(7, b * HIGH);
  digitalWrite(8, c * HIGH);
  digitalWrite(9, d * HIGH);
  digitalWrite(10, e * HIGH);
  digitalWrite(11, f * HIGH);
  digitalWrite(12, g * HIGH);
}
