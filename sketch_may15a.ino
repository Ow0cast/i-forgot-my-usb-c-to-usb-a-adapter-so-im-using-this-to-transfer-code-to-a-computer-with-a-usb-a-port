void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}
void pisshead(int poohead, int stupid) {
  Serial.println(stupid);
  digitalWrite(stupid, HIGH);
  delay(poohead);
  digitalWrite(stupid, LOW);
  delay(poohead);
}
void loop() {
  // put your main code here, to run repeatedly:
  pisshead(2000, 6);
  pisshead(500, 8);
  pisshead(1500, 10);
  pisshead(500, 6);
  pisshead(2000, 10);
}
