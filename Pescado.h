#ifndef PESCADO_H
#define PESCADO_H

#include <iostream>
#include <string>
#include "Mercancia.h"

using namespace std;

class Pescado: public Mercancia{
  private:
    string tipoCarne;
    string hueva;
    float precioHueva;
    int cantidadHueva;

  public:
    string getTipoCarne();
    void setTipoCarne(string _tipoCarne);

    string getHueva();
    void setHueva(string _hueva);

    float getPrecioHueva();
    void setPrecioHueva(float _precioHueva);

    int getCantidadHueva();
    void setCantidadHueva(int _cantidadHueva);

    Pescado();
    Pescado(string nom, float po, float pre, float cant, string _tipoCarne, string _hueva, float _precioHueva, int _cantidadHueva);

    void imprimeDatosPescado();

    float valorPescado(float pesoMercancia, float precioMercancia, float cantidadMercancia, float precioHueva, int cantidadHueva);
    
};
//objeto por omisión
Pescado::Pescado(){
  tipoCarne = "";
  hueva = "";
  precioHueva = 0.0;
  cantidadHueva = 0;
}
//objeto con declaraciones
Pescado::Pescado(string nom, float po, float pre, float cant, string _tipoCarne, string _hueva, float _precioHueva, int _cantidadHueva){
  tipoCarne = _tipoCarne;
  hueva = _hueva;
  precioHueva = _precioHueva;
  cantidadHueva = _cantidadHueva;
}

void Pescado::setTipoCarne(string _tipoCarne){
  tipoCarne = _tipoCarne;
}

string Pescado::getTipoCarne(){
  return tipoCarne;
}

void Pescado::setHueva(string _hueva){
  hueva = _hueva;
}

string Pescado::getHueva(){
  return hueva;
}

void Pescado::setPrecioHueva(float _precioHueva){
  precioHueva = _precioHueva;
}

float Pescado::getPrecioHueva(){
  return precioHueva;
}

void Pescado::setCantidadHueva(int _cantidadHueva){
  cantidadHueva = _cantidadHueva;
}

int Pescado::getCantidadHueva(){
  return cantidadHueva;
}

float Pescado::valorPescado(float pesoMercancia, float precioMercancia, float cantidadMercancia, float precioHueva, int cantidadHueva){
  return (pesoMercancia * precioMercancia * cantidadMercancia) + (precioHueva * cantidadHueva);
}


void Pescado::imprimeDatosPescado(){
  imprimeDatosMercancia();
  cout << "Tipo de carne del pescado: " << tipoCarne << endl;
  cout << "¿Se puede vender la hueva del pescado?(s/n) " << hueva << endl;
  if (hueva == "s"){
    cout << "Valor de la hueva: " << precioHueva << endl;
    cout << "Cantidad de hueva: " << cantidadHueva << endl;
    cout << "Tu ganacia al vender toda la mercancía es de: $" << valorPescado(pesoMercancia,precioMercancia, cantidadMercancia, precioHueva, cantidadHueva) << endl;
  } else {
    cout << "Tu ganacia al vender toda la mercancía es de: $" << valor(pesoMercancia,precioMercancia, cantidadMercancia) << endl;
  }
}

#endif