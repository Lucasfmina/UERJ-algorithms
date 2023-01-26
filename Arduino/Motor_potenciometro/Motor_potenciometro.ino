int pinPot = A0;
int pinMot = 5;
int potencia;


void setup() {
  Serial.begin(9600);
  pinMode(pinMot, OUTPUT);
}

void loop() {
  potencia = analogRead(pinPot);
  potencia = map(potencia, 0, 1023, 0, 255);
  Serial.println(potencia);
  analogWrite(pinMot, potencia);
  delay(300);
}
