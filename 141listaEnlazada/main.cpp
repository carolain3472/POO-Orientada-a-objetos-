/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2020-04-17
  Versión: 0.4
  Licencia: GPL
*/

/*
  @brief
  Utilidad: usar la lista enlazada (creada como tipo abstracto de datos, o sea template)
*/

#include"ListaEnlazada.h"
#include<string>
using namespace std;


int main()
{
  ListaEnlazada<string> amigos;  // amigos es una ListaEnlazada de strings
  amigos.anadirAlFinal("Diana");
  amigos.anadirAlFinal("Jorge");
  amigos.anadirAlFinal("Jairo");
  amigos.anadirAlFinal("Luisa");
  amigos.imprimir();
  cout << amigos[2] << endl;

  ListaEnlazada<int>numerosCuadrados; // numerosCuadrados es una listaEnlazada de enteros
  //numerosCuadrados.anadirAlFinal(1);
  //numerosCuadrados.anadirAlFinal(4);
  numerosCuadrados.anadirAlFinal(9);
  numerosCuadrados.anadirAlFinal(16);
  numerosCuadrados.anadirAlFinal(25);
  numerosCuadrados.imprimir();

  return 0;
}