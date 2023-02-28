/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-19
  Fecha última modificación: 2020-09-19
  Versión: 0.1
  Licencia: GNU-GPL
*/

/*
  Utilidad para la asignatura: crear relaciones

  Historia: 
  1.- Ana, Jorge son amigos y viven en la misma ciudad. Sin embargo, tienen trabajos que les obligan a viajar mucho. Ana viaja durante 5 días y luego está en casa 4 días. Jorge viaja durante 2 días y luego está en casa 2 días. Y ello lo repiten continuamente.  Inicialmente Ana y Jorge comienzan sus respectivos viajes. ¿Cuándo volverán a encontrarse?
  
  2.- Lo mismo que en el problema anterior. Pero ahora existen tres amigos: Ana, Jorge y Luisa.
Ana viaja 5 días y permanece en casa 4 días (como antes).
Jorge viaja 2 días y luego está en casa 2 días (como antes).
Y Luisa viaja 3 días y permanece en casa 3 días.
¿Después de cuántos días volverán todos a encontrarse?

  3.- Repita lo mismo, pero pidiendo por teclado/pantalla todos los datos (número de amigos) y días de viaje/casa de cada uno.
  
*/

#include "Persona.h"
#include "Tiempo.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
  Persona ana("Ana", 5, 4);
  Persona jorge("Jorge", 2, 2);
//  Persona luisa("Luisa", 3, 3);

  Tiempo elTiempo;
  elTiempo.pasaPara(&ana);
  elTiempo.pasaPara(&jorge);
//  elTiempo.pasaPara(&luisa);
  
  int diasQuePasaran = elTiempo.buscarCoincidenciaEnCasa(1000);  // Se le dá 1000 como límite de tiempo a investigar
  if(diasQuePasaran == -1)
    cout << "Nunca se encontraron" << endl;
  else
    cout << "Para que todos se vuelvan a encontrar en casa, pasarán " << diasQuePasaran << " días" << endl;

  return 0;
}


/*

int main()
{
  Tiempo elTiempo(true);  // Toma propiedad de las personas
  
  while(true)
  {
    cout << "Dime el nombre del amigo: ";
    string nombrePersona;
    getline(cin, nombrePersona);

    cout << "¿Cuántos días está de viaje? ";
    string auxiliar;
    getline(cin, auxiliar);
    int diasDeViaje = stoi(auxiliar);

    cout << "¿Cuántos días está en casa? ";
    getline(cin, auxiliar);
    int diasEnCasa = stoi(auxiliar);
    cout << diasDeViaje << "," << diasEnCasa << endl;
    elTiempo.pasaPara(new Persona(nombrePersona, diasDeViaje, diasEnCasa));

    cout << "¿Tienes más amigos (N significa 'no'? ";
    getline(cin, auxiliar);
    if(auxiliar == "N" or auxiliar == "n")
      break;
  }
   
  int diasQuePasaran = elTiempo.buscarCoincidenciaEnCasa(1000);  // Se le dá 1000 como límite de tiempo a investigar
  if(diasQuePasaran == -1)
    cout << "Nunca se encontraron" << endl;
  else
    cout << "Para que todos se vuelvan a encontrar en casa, pasarán " << diasQuePasaran << " días" << endl;

  return 0;
}


*/
