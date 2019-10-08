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
  
  if (digitalRead(boton)==LOW)
  {
    
    mysigfox.initpayload();
    mysigfox.addint(117);
    mysigfox.sendmessage();
    
    Serial.println("Mensaje enviado");
  }
}
