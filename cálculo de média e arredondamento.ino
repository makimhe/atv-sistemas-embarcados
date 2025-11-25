// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("Inicio da leitura ...");
}

void loop()
{
  
  Serial.println("Realizando 3 leituras ...");
  
  int leitura = analogRead(A0);
  delay(1000);
  
  int leitura2 = analogRead(A0);
  delay(1000);
  
  int leitura3 = analogRead(A0);
  delay(1000);
  
  //Calculo da media
  float media = (leitura + leitura2 + leitura3) / 3.0;
  //raiz quadrada da media
  float raiz = sqrt(media);
  
  //valor do quadrado da media
  float quadrado = pow(media, 2);
  
  //resultados
  Serial.println("\n--- resultado final das contas ---");
  
  Serial.print("Leitura");
  Serial.print(leitura); Serial.print(", ");
  Serial.print(leitura2); Serial.print(", ");
  Serial.print(leitura3);
  
  Serial.print("Média ");
  Serial.print(media);

  Serial.print("Media arredondada (round): ");
  Serial.println(round(media));
  
  Serial.print("Média arredondada para baixo (floor): ");
  Serial.print(floor(media));
  
  Serial.print("Raiz quadrada da media (ceil): ");
  Serial.println(ceil(raiz));
  
  Serial.print("Raiz quadrada da media: ");
  Serial.println(ceil(raiz));
  
  Serial.print("Valor quadrado da media (pow): ");
  Serial.println(quadrado);
  
  Serial.println("----------------------------\n");

  delay(2000);
}