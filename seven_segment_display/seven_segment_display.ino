int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8;

//Function to print the number on the seven segment display
void display(int a1, int b1, int c1, int d1, int e1, int f1, int g1){
  digitalWrite(a, a1 * HIGH);
  digitalWrite(b, b1 * HIGH);
  digitalWrite(c, c1 * HIGH);
  digitalWrite(d, d1 * HIGH);
  digitalWrite(e, e1 * HIGH);
  digitalWrite(f, f1 * HIGH);
  digitalWrite(g, g1 * HIGH);
}

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  //Values for 0
  display(0, 0, 0, 0, 0, 0, 1);
  delay(1000);

  //Values for 1
  display(1, 0, 0, 1, 1, 1, 1);
  delay(1000);

  //Values for 2
  display(0, 0, 1, 0, 0, 1, 0);
  delay(1000);

  //Values for 3
  display(0, 0, 0, 0, 1, 1, 0);
  delay(1000);

  //Values for 4
  display(1, 0, 0, 1, 1, 0, 0);
  delay(1000);

  //Values for 5
  display(0, 1, 0, 0, 1, 0, 0);
  delay(1000);

  //Values for 6
  display(0, 1, 0, 0, 0, 0, 0);
  delay(1000);

  //Values for 7
  display(0, 0, 0, 1, 1, 1, 1);
  delay(1000);

  //Values for 8
  display(0, 0, 0, 0, 0, 0, 0);
  delay(1000);

  //Values for 9
  display(0, 0, 0, 0, 1, 0, 0);
  delay(1000);

  //Turn off
  display(1, 1, 1, 1, 1, 1, 1);
  delay(1000);
}

void loop() {
}
