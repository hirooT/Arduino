int sensorPin_R = 12;
int ledPin_R = 13;
int sensorvalue_R = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin_R,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue_R = digitalRead(sensorPin_R);
  
  //if(sensorvalue_R == 1) digitalWrite(ledPin_R,HIGH);
  //else digitalWrite(ledPin_R,LOW);
  
  Serial.println(sensorvalue_R);
  //Serial.print("\n");
  delay(100);
}
