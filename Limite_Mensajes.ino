/* Envio de mensaje a sigfox usando las librerias de NxtIoT*/

#include <NXTIoT_dev.h>

NXTIoT_dev  mysigfox;
const int boton=6;
const int led6=5;

void setup() {
  pinMode(boton, INPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
/*Probamos si el limite de mensajes es 128/*
 int x=0;
while(x<=127)
 {
    mysigfox.initpayload();
    mysigfox.addint(x);
    mysigfox.sendmessage();
    x = x + 1;
    Serial.println("Mensaje enviado: ",x);
  }
  /*Se enviaron aproximadamente 150 mensajes y no hubo error*/
}
