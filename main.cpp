#include <iostream>
#include <string>
#include "Usuario.h"
#include "Mercancia.h"
#include "Pescado.h"
#include "Mariscos.h"

using namespace std;

int main(){
  //Defino las variables con las que trabajaré
  string nombreMercancia;
  float pesoMercancia = 0.0;
  float precioMercancia = 0.0;
  float cantidadMercancia = 0.0;
  Mercancia mercancia1;
  string tipoMercancia;

  string tipoCarne;
  string hueva;
  float precioHueva = 0.0;
  int cantidadHueva = 0;

  string tipoMarisco;
  string productoExtra;
  string tipoProducto;
  float valorProducto = 0.0;
  int cantidadProducto = 0;
  int caducidad = 0;

  string nombreBarco;
  string tipoBarco;
  string tipoMotor;
  float capacidad = 0.0;// en libras
  Barco barco1;
  
  Pescado pescado1 = Pescado();
  Mariscos marisco1 = Mariscos();

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
      
      cout << "Ingresa el nombre del producto (pescado/marisco) que atrapaste (solo una palabra): ";
      cin >> nombreMercancia;
  
      cout << "Ingresa el peso del producto que atrapaste (en kg): ";
      cin >> pesoMercancia;
  
      cout << "Ingresa el precio por libra del producto (por kg): ";
      cin >> precioMercancia;
  
      cout << "Ingresa la cantidad que capturaste de ese producto: ";
      cin >> cantidadMercancia;
   
      cout << "¿Qué tipo de mercancía capturaste? (Pescado/Marisco) ";
      cin >> tipoMercancia;
    
    if (tipoMercancia == "pescado" || 
        tipoMercancia == "Pescado" || 
        tipoMercancia == "PESCADO" || 
        tipoMercancia == "pez" || 
        tipoMercancia == "Pez" || 
        tipoMercancia == "PEZ")
    {
      pescado1 = Pescado(nombreMercancia, pesoMercancia, precioMercancia, cantidadMercancia, tipoCarne, hueva, precioHueva, cantidadHueva);
      
      cout << "¿Qué tipo de carne de pescado de es? (de pescado blanco/azul/semigraso) ";
      cin >> tipoCarne;
      
      cout << "¿Se puede veder la hueva del pescado que capturaste?(s/n)";
      cin >> hueva;
      
      if (hueva == "s"){
        cout << "Ingresa el precio de la hueva por gramo: ";
        cin >> precioHueva;

        cout << "Ingresa cuántas huevas tiene el pesacdo que capturaste (en gramos): ";
        cin >> cantidadHueva;

        pescado1.valorPescado(pesoMercancia, precioMercancia, cantidadMercancia, precioHueva, cantidadHueva);
      } else if(hueva == "n"){
        pescado1.valor(pesoMercancia, precioMercancia, cantidadMercancia);
      } else{
        cout << "Ingresa una respuesta válida" << endl;
      }
    } 
     else if( tipoMercancia == "marisco" || 
              tipoMercancia == "Marisco" || 
              tipoMercancia == "MARISCO" ){
      
      marisco1 = Mariscos(nombreMercancia, pesoMercancia, precioMercancia, cantidadMercancia, tipoMarisco, productoExtra, tipoProducto, valorProducto, cantidadProducto, caducidad);
      
      cout << "¿Qué tipo de marisco atrapaste";
      cin >> tipoMarisco;

      cout << "¿Cuánto va a tardar en caducar?(en días) ";
      cin >> caducidad;

      cout << "¿Tiene algún producto extra que puedas vender?(s/n) ";
      cin >> productoExtra; 
      if (productoExtra == "s"){
        cout << "Ingresa que tipo de producto extra es: ";
        cin >> tipoProducto;

        cout << "¿Qué valor tiene ese producto? ";
        cin >> valorProducto;

        cout << "¿Qué cantidad posees de ese producto?";
        cin >> cantidadProducto;
  
        marisco1.valorMariscos(pesoMercancia, precioMercancia, cantidadMercancia, valorProducto, cantidadProducto);
          
      } else if(productoExtra == "n"){
        marisco1.valorMariscos(pesoMercancia, precioMercancia, cantidadMercancia, valorProducto, cantidadProducto);
    }
  }
  
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
      if (tipoMercancia == "pescado" || "Pescado" || "PESCADO" || "pez" || "Pez" || "PEZ"){
        pescado1.imprimeDatosPescado();
      } else if (tipoMercancia == "marisco" || "Marisco" || "MARISCO"){
        marisco1.imprimeDatosMariscos();
      }
      usuario1.imprimeDatosUser();
      cout << "El peso total que genera el producto fue de : " << pesoTotal << " libras" << endl;
      barco1.imprimeDatosBarco();
    }
  }else{
    //Si no se responde de manera apropiada a la pregunta de la licencia, no te permite continuar
    cout << "Ingresa una respuesta valida" << endl;
  }
  
  return 0;

  
}
