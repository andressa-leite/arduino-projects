int led_red = 11;
int led_yellow = 12;
int led_green = 13;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  digitalWrite(led_green, HIGH);
  delay(3000);
  digitalWrite(led_green, LOW);

  for (int i = 0; i < 5; i++) {
    digitalWrite(led_yellow, HIGH);
    delay(500);
    digitalWrite(led_yellow, LOW);
    delay(500);
  }

  digitalWrite(led_red, HIGH);
  delay(3000);
  digitalWrite(led_red, LOW);
}