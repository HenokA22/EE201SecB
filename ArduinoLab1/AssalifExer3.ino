void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(13, HIGH);

  if(digitalRead(7) == HIGH) {
    Serial.print("Hello World!");
  }

  if(digitalRead(7) == LOW) {
    Serial.print("It's 2023");
  }
}

