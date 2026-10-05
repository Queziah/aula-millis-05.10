#include <Arduino.h>
# include <DHT.h>
#define pinDHT 15
#define tipoDHT DHT22

DHT medidor (pinDHT, tipoDHT);


void setup() {
 
  Serial.begin (115200);
  medidor.begin ();
  Serial.print("teste de DHT22");
}

void loop() {
float tempC = medidor.readTemperature (); // se for sem nada ele devolve em ceucios, mas se for em true, ele devolve em farenrait
float tempF = medidor.readTemperature(true);
float umi = medidor. readHumidity();
Serial.print("Temp em C: "); // para exibição
Serial.println(tempC); // com o valor da variavel
Serial.print("Temp em F: ");
Serial.println(tempF);
Serial.print("Umidade: ");
Serial.println(umi);
Serial.print("-----------------");

delay (3000);

}