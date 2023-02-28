/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-10-06
  Licencia: GNU-GPL
*/

/*
  Utilidad para la asignatura: Entender para que sirven los punteros (también se muestra una referencia).

  Historia: Compré una bicicleta roja de carreras y pedaleé con ella 10 km. Luego se la presté a mi amigo Pepe, que hizo un recorrido de 23 km. Sin que yo me diera cuenta, Pepe se la prestó a Ana, que hizo con ella 12 km Finalmente Ana le devolvió la bici a Pepe y Pepe a mi ¿Cuánto marca el cuentakilómetros de la bici? 
*/


#include "Amigo.h"
#include "Bicicleta.h"
#include <iostream>
using namespace std;

int main()
{
  Amigo yo ("Angel García");
  Bicicleta bicicleta("roja", 6, 3);  // Color, piñones, platos
  yo.recibirBici(&bicicleta);  // Compré una bici
  yo.pedalearBici(10); // kilómetros
  
  Amigo pepe("Pepe López");
  yo.prestarBici(pepe);
  yo.pedalearBici(1000);

  pepe.pedalearBici(23); // kilómetros
  Amigo ana("Ana Cristina");
  pepe.prestarBici(ana);

  ana.pedalearBici(12);
  ana.devolverBici(pepe);
  pepe.devolverBici(yo);

  cout << "El total de kilómetros recorridos es: " << yo.verCuentaKilometrosBici() << endl;

  return 0;
}










