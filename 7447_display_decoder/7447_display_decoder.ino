int a = 2, b = 3, c = 4, d = 5;

int* toBinary(int a, int n){
  int* arr = malloc(sizeof(int) * n);
  for(int i=0;i<n;i++){
    arr[n - 1 - i] = a % 2;
    a /= 2;
  }
  return arr;
}
void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  for(int i=0;i<10;i++){
    int* arr = toBinary(i, 4);
    digitalWrite(a, arr[3] * HIGH);
    digitalWrite(b, arr[2] * HIGH);
    digitalWrite(c, arr[1] * HIGH);
    digitalWrite(d, arr[0] * HIGH);
    delay(1000);
  }
}

void loop() {
}
