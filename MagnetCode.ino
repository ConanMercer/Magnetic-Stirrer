int p1 = 4;
int p2 = 5;
int p3 = 6;
long T1 = 60000;    // waits 1 min
long T2 = 180000;   // rotates 2 min
long T3 = 240000;   // waits 1 min
long T4 = 300000;   // rotates 1 min
void setup() {
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
}
void loop() {
  if (millis() >= T1 && millis() <= T2) {
    magnetstir();
  }
  if (millis() >= T3 && millis() <= T4) {
    magnetstir();
  }
}
void magnetstir () {
  digitalWrite(p1, 1);
  digitalWrite(p2, 1);
  digitalWrite(p3, 0);
  delay(10);
  digitalWrite(p1, 1);
  digitalWrite(p2, 0);
  digitalWrite(p3, 0);
  delay(10);
  digitalWrite(p1, 1);
  digitalWrite(p2, 0);
  digitalWrite(p3, 1);
  delay(10);
  digitalWrite(p1, 0);
  digitalWrite(p2, 0);
  digitalWrite(p3, 1);
  delay(10);
  digitalWrite(p1, 0);
  digitalWrite(p2, 1);
  digitalWrite(p3, 1);
  delay(10);
  digitalWrite(p1, 0);
  digitalWrite(p2, 1);
  digitalWrite(p3, 0);
  delay(10);
}
