/*
 * Práctica para controlar un motor paso a paso bipolar usando un driver A4988
 * 
 * Autor: Juan Esteban Ospina
 * Fecha: 31 de mayo 2024
 * Descripción: Este código controla un motor paso a paso bipolar utilizando un driver A4988. 
 *              Se controla la dirección y el número de pasos a través de un Arduino.
 */

// Definición de pines
const int pinStep = 8; // Pin de control de pasos
const int pinDir = 9;  // Pin de control de dirección

// Definición de constantes
const int tiempo = 5; // Tiempo entre pasos en milisegundos
const int numPasos = 100; // Número de pasos a dar en cada dirección
const int tiempoEspera = 1000; // Tiempo de espera entre cambios de dirección en milisegundos

void setup() {
  // Configuración de los pines como salidas
  pinMode(pinStep, OUTPUT);
  pinMode(pinDir, OUTPUT);
}

void loop() {
  // Girar en sentido horario
  digitalWrite(pinDir, HIGH);
  for (int i = 0; i < numPasos; i++) {
    digitalWrite(pinStep, HIGH);
    delay(tiempo);
    digitalWrite(pinStep, LOW);
    delay(tiempo);
  }

  delay(tiempoEspera); // Tiempo de espera

  // Girar en sentido antihorario
  digitalWrite(pinDir, LOW);
  for (int i = 0; i < numPasos; i++) {
    digitalWrite(pinStep, HIGH);
    delay(tiempo);
    digitalWrite(pinStep, LOW);
    delay(tiempo);
  }

  delay(tiempoEspera); // Tiempo de espera
}
