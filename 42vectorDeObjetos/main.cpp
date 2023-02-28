/*
  Utilidad: guardar objetos en un contenedor STL, concretamente, en un vector.
  
  vector es muy similar a un array. Pero los arrays son de tamaño fijo y no son objetos. Mientras que vector es una clase parametrizable y es de tamaño variable. Dispone de funciones con las que puedes obtener su tamaño (size) así como cada uno de sus elementos, con operator []
*/

#include "Amigo.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <Amigo> miListaDeAmigos={ Amigo("Luis",22,2) };

  Amigo miMejorAmigo("Santana", 23, 1.78);

  while(true)
  {
    string respuesta;
    cout << "¿Tienes más amigos? (pulse N para terminar) ";
    getline(cin, respuesta);
    if(respuesta == "N" or respuesta == "n")
      break;

    string nombre;
    int edad;
    double estatura;
    string auxiliar;

    cout << "¿Cómo se llama tu amigo? ";
    getline(cin, nombre);

    cout << "¿Cuál es su edad? ";
    getline(cin, auxiliar);
    edad = stoi(auxiliar);
  
    cout << "¿Cuanto mide de estatura en metros? ";
    getline(cin, auxiliar);
    estatura = stod(auxiliar);

    Amigo amigo(nombre, edad, estatura);
    miListaDeAmigos.push_back(amigo);    
  }

  int cantidadDeAmigos = miListaDeAmigos.size();
  cout << "En total tienes " << cantidadDeAmigos << " amigos, que son:" << endl;
  for(int cual=0; cual<cantidadDeAmigos; cual++)
    cout << miListaDeAmigos.at(cual).datosCompletos() << endl;

  return 0;
}
