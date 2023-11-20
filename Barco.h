#ifndef BARCO_H
#define BARCO_H

#include <iostream>
#include <string>

using namespace std;

class Barco{
  //Defino mis atributos
  private:
    string nombreBarco;
    string tipoBarco;
    string tipoMotor;
    float capacidad;// en libras
  //Defino mis métodos
  public:

    string getNombreBarco();
    void setNombreBarco(string nombreBarco);

    string getTipoBarco();
    void setTipoBarco(string tipoBarco);

    string getTipoMotor();
    void setTipoMotor(string tipoMotor);

    float getCapacidad();
    void setCapacidad(float Capacidad);
    //Objeto por omisión
    Barco();
    //Objeto Barco
    Barco(string nomBar, string tipBar, string tipMoto, float cap);
    //Objeto imprimeDatosBarco imprime los datos de barco
    void imprimeDatosBarco();
}; 

//Objeto por omisión
Barco::Barco(){
  nombreBarco = "";
  tipoBarco = "";
  tipoMotor = "";
  capacidad = 0.0;
}
//Objeto Barco normal
Barco::Barco(string nomBar, string tipBar, string tipMoto, float cap){
  nombreBarco = nomBar;
  tipoBarco = tipBar;
  tipoMotor = tipMoto;
  capacidad = cap;
}
//GETTERS y SETTERS
string Barco::getNombreBarco(){
  return nombreBarco;
}

void Barco::setNombreBarco(string nomBar){
  nombreBarco = nomBar;
}

string Barco::getTipoBarco(){
  return tipoBarco;
}

void Barco::setTipoBarco(string tipBar){
  tipoBarco = tipBar;
}

string Barco::getTipoMotor(){
  return tipoMotor;
}

void Barco::setTipoMotor(string tipMoto){
  tipoMotor = tipMoto;
}

float Barco::getCapacidad(){
  return capacidad;
}

void Barco::setCapacidad(float cap){
  capacidad = cap;
}
//Objeto imprimeDatosBarco imprime los datos de barco
void Barco::imprimeDatosBarco(){
  cout << "Nombre del barco: " << nombreBarco << endl;
  cout << "Tipo de barco: " << tipoBarco << endl;
  cout << "Tipo de motor que usa el barco: " << tipoMotor << endl;
  cout << "Cantidad de peso en mercancía que soporta el barco: " << capacidad << " libras"<< endl;
}

#endif