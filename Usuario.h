#include <iostream>
#include <string>

using namespace std;

class Usuario{
  //Defino mis atributos
  private:
    string nombre;
    string licencia;
  //Defino mis metodos
  public:
    string getNombre();
    string setNombre(string nombre);

    string getLicencia();
    string setLicencia(string licencia);
    //Objeto por omisión
    Usuario();
    //Objeto usuario
    Usuario(string nom, string lic);
    //Creo un objeto para imprimir los datos
    void imprimeDatosUser();
};
//Creo el objeto por omisión
Usuario::Usuario(){
  nombre = "";
  licencia = "";
}
//Creo al objeto usuario normal
Usuario::Usuario(string nom, string lic){
  nombre = nom;
  licencia = lic;
}
//GETTER y SETTERS
string Usuario::getNombre(){
  return nombre;
}

string Usuario::setNombre(string nombre){
  return nombre;
}

string Usuario::getLicencia(){
  return licencia;
}

string Usuario::setLicencia(string licencia){
  return nombre;
}
//Objeto imprimeDatosUser que imprime los datos que se le piden
void Usuario::imprimeDatosUser(){
  cout << "Nombre: " << nombre << endl;
  cout << "Licencia: " << licencia << endl;
}