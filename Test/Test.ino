void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(2, HIGH);
   delay(1000); //Delay de 5000ms
   digitalWrite(2, LOW);
   delay(1000); //Delay de 5000ms
}
