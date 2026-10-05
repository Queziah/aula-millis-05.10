#include <Arduino.h>
#include <Bounce2.h>

//Bounce botaozao = Bounce();
//int LED = 5;
//int pimBotao = 15;
//bool estadoBotao;
//bool estadoLed = 0;
//int estadoAnt;
//bool botaozinho;
//int contador = 0;
//void setup()
//{
//  botaozao.attach(pimBotao, INPUT_PULLUP);
//   pinMode(LED, OUTPUT);
//  // pinMode(pimBotao, INPUT_PULLUP);
//
//  Serial.begin(115200);
//}
//
//void loop()
//{
// // botaozao.update();
// // // estadoBotao = digitalRead(pimBotao); (usado apenas quando combinado com o pinmode de botao)
// // if (botaozao.read()) // compara se for 1 // o fell pega só a hora do click
// // {
////
// //   digitalWrite(LED, LOW);
// // }
// // else
// // {
// //   digitalWrite(LED, HIGH);
// // }
////
////}
//
//// exercicio 1
//
//// leitura do botao e manipulo a variavel
//
////   int estadoBotao = digitalRead(pimBotao);
//
//// leio a variavel e manipulo o led
//
//// BOTAO PULLUP - 1 == solto e 0 == pressionado;
////   if (estadoAnt == 1 && estadoBotao == 0){
//
////  estadoLed = !estadoLed;
//
////   if (estadoLed == 1)
////   {
////     estadoLed = 0;
////   }
////  else
////    {
////      estadoLed = 1;
////    }
//
////   }
//
//// if (estadoLed == 1){
//// LED - 1 == ACESO E 0 == APAGADO
//// digitalWrite(LED, HIGH);
//// }
//
////  else
////   {
////      digitalWrite(LED, LOW);
////  }
//// estadoAnt = estadoBotao;
////}
//
//// *******************************
//
//// exercicio 2
//
//// leitura do botao e manipulo a variavel
//
// //int estadoBotao = digitalRead(pimBotao);
////
////// //   // leio a variavel e manipulo o led
////
// //BOTAO PULLUP - 1 == solto e 0 == pressionado if (estadoAnt == 1 && estadoBotao == 0)
////{//
////
// //estadoLed = !estadoLed;
////
// //if (estadoLed == 1)
// //{
// // estadoLed = 0;
// //}
// //else
////{//
// // estadoLed = 1;
// //}
////
// //if (estadoLed == 1)
// //{
// //  LED - 1 == ACESO E 0 == APAGADO
// //digitalWrite(LED, HIGH);
////
////
////
// //else
// //{
// // digitalWrite(LED, LOW);
// // }
////
// //estadoAnt = estadoBotao
////
// //manipulo a seria
////
// //if estadoBotao ==
// // contador++;
// //Serial.println = contador;
// //estadoAnt = estadoBotao
////
// //botaozao.update(); // digitalRea
////
// // delay (1000);
// // 
// ////Serial.println (botaozao.changed ()); // mostra qualuqer alteração (pressionado ou não pressionado)
// ////Seria.println (botazao.fell()); //mostra a alteração só uma vez
// //// Seria.println (botazao.currentDuration());
// ////  Serial.println (botazao.previousDuration());
////
//// para o btao não usamos mais pinmode, mas para o led usaremos
// inverter o valor só dá para bool  !
//
//
//// CRIE UM SISTEMA QUE ACENDE E APAGA UM LED AO CLICAR EM UM BOTAO ULTILIZANDO A BIBLIOTECA BOUNCE 2
//#include<Arduino.h>
//#include <Bounce2.h>
//
//#define pinBotao 0
//#define pinLed 2
//
//Bounce btn = Bounce ();
//
//bool estadoLed = 0;
//bool foiExecutado = false;
//
//void setup (){
//    pinMode (pinLed, OUTPUT);
//    btn.attach(pinBotao, INPUT_PULLUP);
//    Serial.begin (115200);
//}
//
//void loop(){
// btn.update ();
// 
// if (!btn.read()) // == false/0/LOW
// {
//if (btn.currentDuration ()>= 2000 && foiExecutado == false)
//{
//    estadoLed = !estadoLed; 
//    foiExecutado = true;
//}
// }
// if (btn.read ()) // == 1
//{
//    foiExecutado = false;
//}
//digitalWrite (pinLed, estadoLed);
//
//}

#include <Arduino.h>
#include <Bounce2.h>

#define pinBotao = 35;
#define Led1 = 12;
#define Led2 = 27;
