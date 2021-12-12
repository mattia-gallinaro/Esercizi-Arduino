void setup() {
  // put your setup code here, to run once:
  int led1 = 13;
  pinMode(led1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);//accendo il led 
  delay(1000);//attende 1 secondo
  digitalWrite(led1, LOW);//spengo il led
  delay(1000);//attende 1 secondo
}
