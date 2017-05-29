int val = NULL;
int ledpin_g = 13;
int ledpin_r = 12;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin_r, OUTPUT);
  pinMode(ledpin_g, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  val = Serial.read();
  if (val == 'r') {
    digitalWrite(ledpin_r, HIGH);
    digitalWrite(ledpin_g, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("P12 Red LED");
  } else if (val == 'g') {
    digitalWrite(ledpin_r, LOW);
    digitalWrite(ledpin_g, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("P13 Green LED");
  } else if (val == 'y') {
    digitalWrite(ledpin_r, LOW);
    digitalWrite(ledpin_g, LOW);
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Builtin LED");
  }
  val = NULL;
}

