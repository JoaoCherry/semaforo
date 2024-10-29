#define VERMELHO 32
#define AMARELO 25
#define VERDE 27
#define BUZZER 12

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // Fase Vermelho - 6 segundos
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, LOW);
  delay(6000);

  // Fase Amarelo - 2 segundos
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, LOW);
  tone(BUZZER, 1000);
  delay(2000);

  // Fase Verde - 2 segundos
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, HIGH);
  noTone(BUZZER);
  delay(2000);

  // Fase Verde extra - 2 segundos
  delay(2000);

  // Fase Amarelo - 2 segundos (antes de voltar ao vermelho)
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, LOW);
  delay(2000);
}
