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
    string setNombreBarco(string nombreBarco);

    string getTipoBarco();
    string setTipoBarco(string tipoBarco);

    string getTipoMotor();
    string setTipoMotor(string tipoMotor);

    float getCapacidad();
    float setCapacidad(string Capacidad);
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

string Barco::setNombreBarco(string nombreBarco){
  return nombreBarco;
}

string Barco::getTipoBarco(){
  return tipoBarco;
}

string Barco::setTipoBarco(string tipoBarco){
  return tipoBarco;
}

string Barco::getTipoMotor(){
  return tipoMotor;
}

string Barco::setTipoMotor(string tipoMotor){
  return tipoBarco;
}

float Barco::getCapacidad(){
  return capacidad;
}

float Barco::setCapacidad(string Capacidad){
  return capacidad;
}
//Objeto imprimeDatosBarco imprime los datos de barco
void Barco::imprimeDatosBarco(){
  cout << "Nombre del barco: " << nombreBarco << endl;
  cout << "Tipo de barco: " << tipoBarco << endl;
  cout << "Tipo de motor que usa el barco: " << tipoMotor << endl;
  cout << "Cantidad de peso en pez que soporta el barco: " << capacidad << " libras"<< endl;
}