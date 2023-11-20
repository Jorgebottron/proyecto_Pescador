#include <iostream>
#include <string>
#include "Usuario.h"
#include "Mercancia.h"

using namespace std;

int main(){
  //Defino las variables con las que trabajaré
  string nombreMercancia;
  float pesoMercancia;
  float precioMercancia;
  float cantidadMercancia;
  Mercancia mercancia1;

  string nombreBarco;
  string tipoBarco;
  string tipoMotor;
  float capacidad;// en libras
  Barco barco1;

  float pesoTotal;
  //Le pido su nombre al usuario
  string nombre;
  cout << "Ingresa sólo tu primer nombre: ";
  cin >> nombre;
  //Le pregunto al usuario si tiene licencia para pescar
  string licencia;
  cout << "¿Posees licencia para pescar?(si/no) ";
  cin >> licencia;
  //Creo el objeto usuario 1
  Usuario usuario1(nombre, licencia, barco1);
  //Creo un if donde si la respuesta a licencia es de no, ya no puedes avanzar
  if (licencia == "no"){
    cout << "Consigue una licencia primero" << endl;
  } else if (licencia == "si"){
    //Si se cumple la condición de la licencia, se le pregunta al usuario el resto de datos
    cout << "Ingresa el nombre del producto (pez o marisco) que atrapaste (solo una palabra): ";
    cin >> nombreMercancia;

    cout << "Ingresa el peso del producto que atrapaste (en libras): ";
    cin >> pesoMercancia;

    cout << "Ingresa el precio por libra del producto (por libra): ";
    cin >> precioMercancia;

    cout << "Ingresa la cantidad que capturaste de ese producto: ";
    cin >> cantidadMercancia;
    //Creo el objeto pez1 en base a los datos de pez
    Mercancia mercancia1(nombreMercancia, pesoMercancia, precioMercancia, cantidadMercancia);
    //Obtengo la cantidad de ganacia que se gana al vender todos los peces en base al precio por libra, al peso y a la cantidad de peces.
    mercancia1.valor(pesoMercancia,precioMercancia, cantidadMercancia);

    cout << "Ingresa el nombre de tu barco (solo una palabra): ";
    cin >> nombreBarco;

    cout << "¿Qué tipo de barco es? (Madera/acero): ";
    cin >> tipoBarco;

    cout << "¿Qué tipo de motor tiene tu barco? (electrico/turbina/híbrido): ";
    cin >> tipoMotor;

    cout << "¿Cuál es tu capacidad máxima de pescado?(en libras): ";
    cin >> capacidad;
    //Creo el objeto barco1 en base a los datos de barco
    Barco barco1(nombreBarco, tipoBarco, tipoMotor, capacidad);
    //calculo cuanto peso lleva el barco en base al peso del pez y la cantidad de peces
    pesoTotal = pesoMercancia*cantidadMercancia;
    //Defino que si se supera la capacidad del barco en libras, no puedes continuar
    if (capacidad < pesoTotal){
      cout << "Tu barco no puede almacenar esa cantidad de pescado (o por cantidad o por peso)" << endl;
    } else {
      //imprimo los datos
      usuario1.imprimeDatosUser();
      mercancia1.imprimeDatosMercancia();
      cout << "El peso total que genera el producto fue de : " << pesoTotal << " libras" << endl;
      barco1.imprimeDatosBarco();
    }
  }else{
    //Si no se responde de manera apropiada a la pregunta de la licencia, no te permite continuar
    cout << "Ingresa una respuesta valida" << endl;
  }
  
  return 0;

}
