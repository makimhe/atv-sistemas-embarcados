// C++ code
//
void setup() {
  Serial.begin(9600);
  Serial.println("Digite valores de X e Y separados por espaço:");
}

void loop() {
  if (Serial.available() > 0) {
    float x = Serial.parseFloat();
    float y = Serial.parseFloat();

    Serial.println("calculando o angulo radiano");
    float anguloRad = atan2(y, x); // calcula ângulo em radianos
    Serial.println("Radiano calculado: ");
    Serial.println(anguloRad);
    
    float anguloGraus = anguloRad * 180.0 / PI;

    Serial.print("Angulo calculado: ");
    Serial.print(anguloGraus);
    Serial.println(" graus");
  }
}