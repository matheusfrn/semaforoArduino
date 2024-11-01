// declara as variáveis necessárias com as portas em que estão colocadas
#define ledVermelho 11
#define ledAmarelo 10
#define ledVerde 12
#define pinBuzzer 9

void setup() {
  // identifica as variáveis como outputs
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  // inicia o ciclo com o led verde aceso
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);

  // acende por 2 segundos
  delay(2000);

  // toca o buzzer na frequência de 300 Hz
  tone(pinBuzzer, 300);

  // apaga o led verde por 0,5 segundos
  digitalWrite(ledVerde, LOW);
  delay(500);  

  // acende o led verde novamente por 0,5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(500);  

  // apaga o led verde novamente por 0,5 segundos
  digitalWrite(ledVerde, LOW);
  delay(500);  

  // acende o led verde novamente por 0,5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(500);

  // desliga o buzzer 
  noTone(pinBuzzer);

  // acende o led amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);  

  // acende o led vermelho por 6 segundos
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(6000);

  // acende o led amarelo por mais 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(2000); 
}
