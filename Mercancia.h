#include <iostream>
#include <string>

using namespace std;

class Mercancia{
  //Defino mis atributos
  private:
    string nombreMercancia;
    float pesoMercancia; //en libras
    float precioMercancia; //por libra
    int cantidadMercancia; //en cantidad
  //Defino mis métodos
  public:
    float valor(float pesoMercancia, float precioMercancia, float cantidadMercancia);

    string getNombreMercancia();
    void setNombreMercancia(string nom);

    float getPesoMercancia();
    void setPesoMercancia(float po);

    float getPrecioMercancia();
    void setPrecioMercancia(float pre);

    int getCantidadMercancia();
    void setCantidadMercancia(int cant);
    //Objeto por omisión
    Mercancia();
    //Objeto pescado
    Mercancia(string nom, float po, float pre, float cant);
    //Objeto imprimeDatosPez que imprime los datos de pez
    void imprimeDatosMercancia();
};
//Creo el objeto por omisión
Mercancia::Mercancia(){
  nombreMercancia = "";
  pesoMercancia = 0.0;
  precioMercancia = 0.0;
  cantidadMercancia = 0.0;
}
//Creo el objeto pescado normal
Mercancia::Mercancia(string nom, float po, float pre, float cant){
  nombreMercancia = nom;
  pesoMercancia = po;
  precioMercancia = pre;
  cantidadMercancia = cant;
}
//GETTERS y SETTERS
void Mercancia::setNombreMercancia(string nom){
  nombreMercancia = nom;
}

string Mercancia::getNombreMercancia(){
  return nombreMercancia;
}

void Mercancia::setPesoMercancia(float po){
  pesoMercancia = po;
}

float Mercancia::getPesoMercancia(){
  return pesoMercancia;
}

void Mercancia::setPrecioMercancia(float pre){
  precioMercancia = pre;
}

float Mercancia::getPrecioMercancia(){
  return precioMercancia;
}

void Mercancia::setCantidadMercancia(int cant){
  cantidadMercancia = cant;
}

int Mercancia::getCantidadMercancia(){
  return cantidadMercancia;
}
//Calculo el valor del pez en base al peso, precio por libra y la cantidad capturada de ese mismo tipo de pez.
float Mercancia::valor(float pesoMercancia, float precioMercancia, float cantidadMercancia){
  return pesoMercancia*precioMercancia*cantidadMercancia;
}
//Imprimo todos los datos de pez
void Mercancia::imprimeDatosMercancia(){
  cout << "Tipo de Mercancia: " << nombreMercancia << endl;
  cout << "Pesa: " << pesoMercancia << " libras" << endl;
  cout << "El precio por libra es de: " << precioMercancia << "$" << endl;
  cout << "La cantidad capturada de esa mercancía (peces o mariscos) fue de: " << cantidadMercancia << " libras" << endl; 
  cout << "Tu ganacia al vender toda la mercancía es de: " << valor(pesoMercancia,precioMercancia, cantidadMercancia) << "$" << endl;
  
}