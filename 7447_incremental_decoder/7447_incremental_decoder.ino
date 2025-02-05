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
    int w = arr[3], x = arr[2], y = arr[1], z = arr[0];
    int A = !w;
    int B = (w && !x && !z) || (!w && x);
    int C = (!x && y) || (!w && y) || (w && x && !y);
    int D = (!w && z) || (w && x && y);
    digitalWrite(a, A * HIGH);
    digitalWrite(b, B * HIGH);
    digitalWrite(c, C * HIGH);
    digitalWrite(d, D * HIGH);
    delay(1000);
  }
}

void loop() {
}
