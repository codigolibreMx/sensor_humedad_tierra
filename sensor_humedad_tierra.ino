/** CODIGO LIBRE MX **/
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int val = analogRead(A0);
 Serial.println(val);
 delay(500);
 if(digitalRead(2)==LOW){
  Serial.print("HUMEDO ");
 }
}
