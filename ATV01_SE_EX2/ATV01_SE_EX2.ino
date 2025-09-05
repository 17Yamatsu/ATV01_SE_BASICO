// C++ code
int btn  = 4;   // botao
int led2 = 3;   // LED 1
int led3 = 2;   // LED 2

void setup() {
  pinMode(btn, INPUT);     // definindo como entrada
  pinMode(led2, OUTPUT);   // definindo como saida
  pinMode(led3, OUTPUT);   
}

void loop() {
  int estbtn = digitalRead(btn);  // digitalRead utilizado para ler
  
  if (estbtn == LOW) {          
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } else {
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
}
