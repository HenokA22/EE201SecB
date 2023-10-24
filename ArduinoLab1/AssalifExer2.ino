void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT); // access pin 12 to send EPE 
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(12, HIGH); //set pin value
  delay(200); // delays the high value
  digitalWrite(12, LOW); // turns off
  delay(600); // delays it

  digitalWrite(6, HIGH); //set pin value
  delay(500); // delays the high value
  digitalWrite(6, LOW); // turns off
  delay(100); // delays it
}
