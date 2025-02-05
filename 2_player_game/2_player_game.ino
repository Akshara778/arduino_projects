int p1 = 2, p2 = 10, buzzer = 4, but_1 = 3, but_2 = 11;
int time, t1 = 0, t2 = 0, lag = 400;
void setup() {
  randomSeed(analogRead(0));
  time = random(10000);
  Serial.begin(9600);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(but_1, INPUT_PULLUP);
  pinMode(but_2, INPUT_PULLUP);
  Serial.println("Hello, welcome to the world of this game:\nThe LEDs are turned off now, but at some random point of time before 10 seconds they will turn on. The person to press the button first after the LEDs are lit will win the game. \nThis game checks your response time and announces the winner. Game starts and the sound of the buzzer. Hope you enjoy !!!");
  delay(5000);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
}

void loop() {
  Serial.println(time);
  Serial.println(millis());
  if (millis() - time >= 6000) {
    digitalWrite(p1, HIGH);
    digitalWrite(p2, HIGH);
    if (digitalRead(but_1) == 0) {
      digitalWrite(p1, LOW);
      t1 = millis();
    }
    if (digitalRead(but_2) == 0) {
      digitalWrite(p2, LOW);
      t2 = millis();
    }
    if (t1 > 0 || t2 > 0) {
      int state = 1;
      for (int i = 0; i < 40; i++) {
        digitalWrite(p1, state);
        digitalWrite(p2, 1 - state);
        delay(lag);
        state = 1 - state;
        lag -= 10;
      }
      digitalWrite(p1, LOW);
      digitalWrite(p2, LOW);
      delay(1000);
      if (t2 == 0) {
        digitalWrite(p1, HIGH);
        Serial.println("And the winner is Player 1 !!!!");
        delay(5000);
        digitalWrite(p1, LOW);
        while (true) {}
      }
      if (t1 == 0) {
        digitalWrite(p2, HIGH);
        Serial.println("And the winner is Player 2 !!!!");
        delay(5000);
        digitalWrite(p2, LOW);
        while (true) {}
      }
    }
  }
}