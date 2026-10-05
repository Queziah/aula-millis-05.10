// #include <Arduino.h>
// #define pinLed 2
//
// bool estadoLed = 0;
//
// unsigned long tempAnterior = 0;// armazena em uma linha numerica sempre a partir do 0 e a mesma quantidade de numeos positivos e negativos // unsigned desconsidera o negativo e usa ele como positivo
// unsigned long intervalo = 500;
// void setup() {
//   pinMode(pinLed, OUTPUT);
// }
//
// void loop() {
//   unsigned long tempAtual = millis (); // essa linha fica olhando no relogio
//   if ( tempAtual - tempAnterior >= intervalo){
//
//     estadoLed = !estadoLed;
//
//     tempAnterior = tempAtual;
//   }
//   digitalWhite (pinLed, estadoLed);
//
// }

// EX1 (05/10) CRIE UM PROGRAMA QUE PISQUE 2 LEDS DE FORMA ALTERNADA:

// #include <Arduino.h>
// #define pinBotao 35
// #define pinLed1 12
// #define pinLed2 27
//
// bool estadoLed1 = 0;
// bool estadoLed2 = 1;
//
//
// unsigned long tempAnterior = 0;// armazena em uma linha numerica sempre a partir do 0 e a mesma quantidade de numeos positivos e negativos // unsigned desconsidera o negativo e usa ele como positivo
// unsigned long intervalo = 500;
// void setup() {
//   pinMode(pinLed1, OUTPUT);
//
//     pinMode(pinLed2, OUTPUT);
// }
//
// void loop() {
//   unsigned long tempAtual = millis (); // essa linha fica olhando no relogio
//   if ( tempAtual - tempAnterior >= intervalo){
//
//     estadoLed1 = !estadoLed1;
//
//     tempAnterior = tempAtual;
//   }
//   digitalWrite (pinLed1, estadoLed1);
//
//
//   unsigned long tempAnterior = millis (); // essa linha fica olhando no relogio
//   if ( tempAnterior - tempAtual >= intervalo){
//
//     estadoLed2 = !estadoLed2;
//
//     tempAtual = tempAnterior;
//   }
//   digitalWrite (pinLed2, estadoLed2);
// }

// CRIE UM PROGRAMA QUE PISQUE 2 LEDS DE FORMA ALTERNADA

// #include <Arduino.h>
// #define pinBotao 35
// #define pinLed1 12
// #define pinLed2 27
//
////Ele serve para armazenar números inteiros positivos extremamente grandes.
//// lida com o tempo
// unsigned long tempoAnterior = 0;
//
// const long intervalo = 500;
//
// bool estadoAlternado = true;
//
// void setup(){
//   pinMode (pinLed1,OUTPUT);
//   pinMode (pinLed2, OUTPUT);
// }
//
// void loop() {
//   unsigned long tempoAtual = millis();
//
//   if (tempoAtual - tempoAnterior >= intervalo) {
//
//     tempoAnterior = tempoAtual;
//
//     estadoAlternado = !estadoAlternado;
//
//     // Atualiza os LEDs com base no estado atual
//     if (estadoAlternado == true) {
//       digitalWrite(pinLed1,HIGH);
//       digitalWrite(pinLed2,LOW);
//     }
//     else{
//
//       digitalWrite (pinLed1, LOW);
//       digitalWrite (pinLed2, HIGH);
//     }
//   }
//
// }
/////////////////////////////////////////////////////////////
//2 ex CRIE UM PROGRAMA QUE PISQUE 2 LEDS
// 1LED DEVE PISCAR A CADA 500 MS
// 2LED DEVE PISCAR A CADA 2 S
//******** */

// #include <Arduino.h>
// #define pinBotao 35
// #define pinLed1 12
// #define pinLed2 27
//
// unsigned long tempoAnterior1 = 0;
// unsigned long tempoAnterior2 = 0;
//
//
// const long intervalo1 = 500;
// const long intervalo2 = 2000;
//
//
//
// bool estadoAlternado1 = true;
// bool estadoAlternado2 = true;
//
// void setup() {
// pinMode (pinLed1, OUTPUT);
// pinMode (pinLed2, OUTPUT);
// }
//
// void loop() {
//  unsigned long tempoAtual1 = millis();
//   unsigned long tempoAtual2 = millis();
//
//
//
//   if (tempoAtual1 - tempoAnterior1 >= intervalo1) {
//
//     tempoAnterior1 = tempoAtual1;
//
//     estadoAlternado1 = !estadoAlternado1;
//   }
//
//     if (tempoAtual2 - tempoAnterior2  >= intervalo2) {
//
//     tempoAnterior2 = tempoAtual2;
//
//     estadoAlternado2 = !estadoAlternado2;
//     }
//
//     // Atualiza os LEDs com base no estado atual

// digitalWrite (pinLed1, estadoAlternado1);
//  digitalWrite (pinLed2, estadoAlternado2);
//}
//////////////////////////////////////////////////////////

// 3 CRIE UM PROGRAMA QUE MOSTRA UMA MENSAGEM NO SERIAL A CADA 2S

//#include <arduino.h>
//unsigned long tempAnterior = 0;// armazena em uma linha numerica sempre a partir do 0 e a mesma quantidade de numeos positivos e negativos // unsigned desconsidera o negativo e usa ele como positivo
//unsigned long intervalo = 2000;
//
//void setup()
//{
//    Serial.begin(115200);
//
//}
//
//void loop()
//{
//  
//  unsigned long tempAtual = millis (); // essa linha fica olhando no relogio
//  if ( tempAtual - tempAnterior >= intervalo){
//    Serial.print ("contagem: ");
//    Serial.println (tempAtual);
//
//    tempAnterior = tempAtual;
//
//}
//}
//
/////////////////////////////////////////////////////////////////////////////
//ex4 CRIE UM PROGRAMA QUE AO PRESSIONAR O BOTÃO UM LED ACENDA 
//E APAGUE AUTOMATICAMENTE APÓS 3 SEGUNDOS
//
// #include <Arduino.h>
// #define pinBotao 35
// #define pinLed1 12
// #define pinLed2 27
// 
//void setup (){
//  
//}
//
//void loop (){
//
//}
//
////leitura do botao e manipulo a variave
//   int estadoBotao = digitalRead (pimBotao)
// //leio a variavel e manipulo o le
// //BOTAO PULLUP - 1 == solto e 0 == pressionado;
//   if (estadoAnt == 1 && estadoBotao == 0)
//  estadoLed = !estadoLed
//   if (estadoLed == 1)
//   {
//     estadoLed = 0;
//   }
//  else
//    {
//      estadoLed = 1;
//    
//   
// if (estadoLed == 1){
// LED - 1 == ACESO E 0 == APAGADO
// digitalWrite(LED, HIGH);
// 
//  else
//   {
//      digitalWrite(LED, LOW);
//  }
// estadoAnt = estadoBotao;
//}