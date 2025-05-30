// Exemplo simples de semáforo com LEDs
int vermelho = 2;
int amarelo = 3;
int verde = 4;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);

  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);

  digitalWrite(vermelho, HIGH);
  delay(3000);
  digitalWrite(vermelho, LOW);
}
