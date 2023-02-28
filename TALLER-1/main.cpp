/*
  Archivo: Main.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2020-09-04
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/

/* 
  Ejemplo con una clase y dos objetos.
  Utilidad: Hacer una mudanza.
 
  Historia: Vamos a modelar un camión para transportar mis objetos, que tienen distintos pesos.
  El camión tiene un número de placa y una capacidad máxima. Si se supera esa capacidad, me avisará, para que el objeto que intento subir lo guarde en el otro camión.
*/

#include <iostream>

#include "Camion.h"
using namespace std;

int main()
{
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);

  int pesoObjeto[8] = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };



  for(int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
  {
    int objetoATransportar = pesoObjeto[cualObjeto];

    if(not unCamion.cargarUnObjeto(objetoATransportar)) 
    {
      if(not otroCamion.cargarUnObjeto(objetoATransportar))
      {
        cout << "El objeto número " << cualObjeto << " que pesa " << pesoObjeto[cualObjeto] << " no se puede cargar en ningún camión." << endl;
      }  
    }    
  }
  
  cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;

  cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;

  return 0;
}