
// Setup Inicializa Variables una vez para todo el programa
void setup() {
  // inicializa serial a 9600 bits por segundo:
  Serial.begin(9600);
}

// Loop que corre por siempre
void loop() {
  // lee el input analogo pin 0:
  int sensorValue = analogRead(A7);
  // convierte el valor analogo (en intervalo 0 - 1023) a voltaje (0 - 5V):
  float voltage = sensorValue * (5.1 / 1023.0);
  // Imprime valor
  Serial.println("\n\n  vDC  PTPR BATT");
  Serial.println(voltage);
  //Serial.println("..................\n\n");
  //Delay de 1.5 seg
  delay(1500);
}



