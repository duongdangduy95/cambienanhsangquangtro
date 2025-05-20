int a=A0;
int d=7;
int va=0;
int vd=0;
int led=13;
void setup() {
 
  pinMode(d,INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  va=analogRead(a);
  vd=digitalRead(d);
  Serial.print(va);
  if (va>800) digitalWrite(led,LOW); else digitalWrite(led,HIGH); 
  Serial.print(" , ");
  Serial.println(vd);
  delay(500);


}
