#define sensorSound 2
#define led 3
int stateLed;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorSound, INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  stateLed = digitalRead(led);
  if(digitalRead(sensorSound)){
    digitalWrite(led , !stateLed);
  }
}
