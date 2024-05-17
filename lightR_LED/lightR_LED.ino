void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int sensorValue=analogRead(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(A0);
if(sensorValue>=774)
{
  sensorValue=774;
  
  
  
}
else if(sensorValue<=302)
{
  sensorValue=302;
  
  
}
int dimming=map(sensorValue,302,774,0,255);
analogWrite(9,dimming);
delay(50);
Serial.println(sensorValue);

}
