#include <Arduino.h>
#define LED_PIN 13  // Define el pin del LED
#define INPUT_PIN 12  // Define el pin de entrada para la señal

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Configura el pin del LED como salida
  pinMode(INPUT_PIN, INPUT);  // Configura el pin de entrada como entrada
}

void loop() {
  int signal = digitalRead(INPUT_PIN);  // Lee la señal del pin de entrada

  if (signal == HIGH) {  // Si la señal es HIGH...
    digitalWrite(LED_PIN, HIGH);  // Enciende el LED
    delay(3000);  // Espera 3 segundos
    digitalWrite(LED_PIN, LOW);  // Apaga el LED
  }
}