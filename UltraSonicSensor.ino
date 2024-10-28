#define trigger 7
#define echo 8
float time=0,distance=0;
void setup()
{
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  Serial.println("Ultra sonic");
  Serial.println("Distance Meter");
  delay(2000);
}
void loop()
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,LOW);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  time = pulseIn(echo,HIGH);
  distance = time*340/20000;
  Serial.println("Distance");
  Serial.println(distance);
  Serial.println("cm");

}