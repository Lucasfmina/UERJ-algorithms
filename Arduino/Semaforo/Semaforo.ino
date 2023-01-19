

int pinGreen = 1;
int pinYellow = 2;
int pinRed = 3;

int timeGreen = 5000;
int timeYellow = 2000;
int timeRed = 2500;

void setup() {

  pinMode(pinGreen, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinRed, OUTPUT);

}

void loop() {
  digitalWrite(pinGreen, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(timeGreen-timeYellow);                      // wait for a second
  digitalWrite(pinYellow, HIGH);
  delay(timeYellow);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, LOW);  
  digitalWrite(pinRed, HIGH);
  delay(timeRed);
  digitalWrite(pinRed, LOW);
}
