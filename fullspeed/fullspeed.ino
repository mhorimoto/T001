#define D4    4
#define D5    5

void setup(void) {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop(void) {
  digitalWrite(4,LOW);
  digitalWrite(4,HIGH);
}
