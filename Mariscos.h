#ifndef MARISCOS_H
#define MARISCOS_H

#include <iostream>
#include <string>
#include "Mercancia.h"

using namespace std;

class Mariscos: public Mercancia{
  private:
    string tipoMarisco;
    string productoExtra;
    string tipoProducto;
    float valorProducto;
    int cantidadProducto;
    int caducidad;
  public:
    string getTipoMarisco();
    void setTipoMarisco(string _tipoMarisco);

    string getProductoExtra();
    void setProductoExtra(string _productoExtra);

    string getTipoProducto();
    void setTipoProducto(string _tipoProducto);

    float getValorProducto();
    void setValorProducto(float _valorProducto);

    int getCantidadProducto();
    void setCantidadProducto(int _cantidadProducto);

    int getCaducidad();
    void setCaducidad(int _caducidad);

    Mariscos();
    Mariscos(string nombreMercancia, float pesoMercancia, float precioMercancia, float cantidadMercancia,string _tipoMarisco, string _productoExtra, string _tipoProducto, float _valorProducto, int _cantidadProducto, int _caducidad);

    float valorMariscos(float pesoMercancia, float precioMercancia, float cantidadMercancia, float valorProducto, int cantidadProducto);

    void imprimeDatosMariscos();
};

Mariscos::Mariscos(){
  tipoMarisco = "";
  productoExtra = "";
  tipoProducto = "";
  valorProducto = 0.0;
  cantidadProducto = 0;
  caducidad = 0;
}

Mariscos::Mariscos(string nombreMercancia, float pesoMercancia, float precioMercancia, float cantidadMercancia,string _tipoMarisco, string _productoExtra, string _tipoProducto, float _valorProducto, int _cantidadProducto, int _caducidad){
  tipoMarisco = _tipoMarisco;
  productoExtra = _productoExtra;
  tipoProducto = _tipoProducto;
  valorProducto = _valorProducto;
  cantidadProducto = _cantidadProducto;
  caducidad = _caducidad;
}

void Mariscos::setTipoMarisco(string _tipoMarisco){
  tipoMarisco = _tipoMarisco;
}

string Mariscos::getTipoMarisco(){
  return tipoMarisco;
}

void Mariscos::setProductoExtra(string _productoExtra){
  productoExtra = _productoExtra;
}

string Mariscos::getProductoExtra(){
  return productoExtra;
}

void Mariscos::setTipoProducto(string _tipoProducto){
  tipoProducto = _tipoProducto;
}

string Mariscos::getTipoProducto(){
  return tipoProducto;
}

void Mariscos::setValorProducto(float _valorProducto){
  tipoProducto = _valorProducto;
}

float Mariscos::getValorProducto(){
  return valorProducto;
}

void Mariscos::setCantidadProducto(int _cantidadProducto){
  cantidadProducto = _cantidadProducto;
}

int Mariscos::getCantidadProducto(){
  return cantidadProducto;
}

void Mariscos::setCaducidad(int _caducidad){
  caducidad = _caducidad;
}

int Mariscos::getCaducidad(){
  return caducidad;
}

float Mariscos::valorMariscos(float pesoMercancia, float precioMercancia, float cantidadMercancia, float valorProducto, int cantidadProducto){
  return (pesoMercancia * precioMercancia * cantidadMercancia) + (valorProducto * cantidadProducto);
}

void Mariscos::imprimeDatosMariscos(){
  imprimeDatosMercancia();
  cout << "Tipo de marisco: " << tipoMarisco << endl;
  if (productoExtra == "s"){
    cout << "Tipo de producto extra: " << tipoProducto << endl;
    cout << "Valor del producto extra: " << valorProducto << endl;
    cout << "Cantidad de ese producto extra: " << cantidadProducto << endl;
    cout << "Tu ganacia al vender toda la mercancía es de: $" << valorMariscos(pesoMercancia,precioMercancia, cantidadMercancia, valorProducto, cantidadProducto)  << endl;
  } else {
    cout << "Tu ganacia al vender toda la mercancía es de: $" << valor(pesoMercancia,precioMercancia, cantidadMercancia) << endl;
  }
}


#endif