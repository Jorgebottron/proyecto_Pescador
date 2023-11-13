#include <iostream>
#include <string>

using namespace std;

class Pescado{
  //Defino mis atributos
  private:
    string nombrePez;
    float pesoPez; //en libras
    float precioPez; //por libra
    float cantidadPez; //en libras
  //Defino mis métodos
  public:
    float valor(float pesoPez, float precioPez, float cantidadPez);

    string getNombrePez();
    string setNombrePez(string nombrePez);

    float getPesoPez();
    float setPesoPez(float pesoPez);

    float getPrecioPez();
    float setPrecioPez(float precioPez);

    float getCantidadPez();
    float setCantidadPez(float cantidadPez);
    //Objeto por omisión
    Pescado();
    //Objeto pescado
    Pescado(string nom, float po, float pre, float cant);
    //Objeto imprimeDatosPez que imprime los datos de pez
    void imprimeDatosPez();
};
//Creo el objeto por omisión
Pescado::Pescado(){
  nombrePez = "";
  pesoPez = 0.0;
  precioPez = 0.0;
  cantidadPez = 0.0;
}
//Creo el objeto pescado normal
Pescado::Pescado(string nom, float po, float pre, float cant){
  nombrePez = nom;
  pesoPez = po;
  precioPez = pre;
  cantidadPez = cant;
}
//GETTERS y SETTERS
string Pescado::setNombrePez(string nombre){
  return nombrePez;
}

string Pescado::getNombrePez(){
  return nombrePez;
}

float Pescado::setPesoPez(float peso){
  return pesoPez;
}

float Pescado::getPesoPez(){
  return pesoPez;
}

float Pescado::setPrecioPez(float precio){
  return precioPez;
}

float Pescado::getPrecioPez(){
  return precioPez;
}

float Pescado::setCantidadPez(float cantidadPez){
  return cantidadPez;
}

float Pescado::getCantidadPez(){
  return cantidadPez;
}
//Calculo el valor del pez en base al peso, precio por libra y la cantidad capturada de ese mismo tipo de pez.
float Pescado::valor(float pesoPez, float precioPez, float cantidadPez){
  return pesoPez*precioPez*cantidadPez;
}
//Imprimo todos los datos de pez
void Pescado::imprimeDatosPez(){
  cout << "Tipo de pez: " << nombrePez << endl;
  cout << "Pesa: " << pesoPez << " libras" << endl;
  cout << "El precio por libra es de: " << precioPez << "$" << endl;
  cout << "La cantidad capturada de peces fue de: " << cantidadPez << " libras" << endl; 
  cout << "Tu ganacia al vender los peces es de: " << valor(pesoPez,precioPez, cantidadPez) << "$" << endl;
  
}