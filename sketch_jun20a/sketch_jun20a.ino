#define ledAmarelo 2
#define ledVerde 3
#define ledVermelho 4
#define ledBranco 5

void setup() {
pinMode(ledAmarelo, OUTPUT);
pinMode(ledVerde, OUTPUT);
pinMode(ledVermelho, OUTPUT);
pinMode(ledBranco, OUTPUT);

}

void loop() {
  for(int contador = 0; contador < 5; contador++){
    digitalWrite(ledAmarelo, HIGH);
    delay(1000);
    digitalWrite(ledAmarelo, LOW);
    delay(1000);
  }
  for(int contador = 0; contador < 5 ; contador++){
    digitalWrite(ledVerde, HIGH);
    delay(1000);
    digitalWrite(ledVerde, LOW);
    delay(1000);
  }
}
