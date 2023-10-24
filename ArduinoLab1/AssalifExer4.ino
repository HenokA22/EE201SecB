void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
 // a = 6 b = 5 c = 2 d = 3 e = 4 f = 7 g = 8
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1500); //9


  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1500);//8

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1500);//7
 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(1500); //6

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(1500); //5

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(1500); //4

  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1500); //3

  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1500); //2

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(1500); //1

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(1500); //0

}
