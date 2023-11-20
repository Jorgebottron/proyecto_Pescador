#include <iostream>
#include <string>
#include "Barco.h"

using namespace std;

class Usuario{
  //Defino mis atributos
  private:
    string nombre;
    string licencia;
    Barco barco;
   
  //Defino mis metodos
  public:
    string getNombre();
    void setNombre(string nombre);
    string getLicencia();
    void setLicencia(string licencia);
    
    Barco getBarco();
    void setBarco(string nomBar, string tipBar, string tipMoto, float cap);   
  
    //Objeto por omisión
    Usuario();
    //Objeto usuario
    Usuario(string nom, string lic, Barco _barco);
    //Creo un objeto para imprimir los datos
    void imprimeDatosUser();
};
//Creo el objeto por omisión
Usuario::Usuario(){
  nombre = "";
  licencia = ""; 
}
//Creo al objeto usuario normal
Usuario::Usuario(string nom, string lic, Barco _barco){
  nombre = nom;
  licencia = lic;
  barco = _barco;
}
//GETTER y SETTERS
string Usuario::getNombre(){
  return nombre;
}

void Usuario::setNombre(string nom){
  nombre = nom;
}

string Usuario::getLicencia(){
  return licencia;
}

void Usuario::setLicencia(string lic){
  licencia = lic;
}

Barco Usuario::getBarco(){
  return barco; 
}

void Usuario::setBarco(string nb, string tb, string tm, float c)
{
  barco.setNombreBarco(nb) ;
  barco.setTipoBarco(tb);
  barco.setTipoMotor(tm);
  barco.setCapacidad(c);
}

//Objeto imprimeDatosUser que imprime los datos que se le piden
void Usuario::imprimeDatosUser(){
  cout << "Nombre: " << nombre << endl;
  cout << "Licencia: " << licencia << endl;
  barco.imprimeDatosBarco();
}