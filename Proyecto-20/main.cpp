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
  Fecha creación: 2020-10-01
  Fecha última modificación: 2020-12-06
  Versión: 0.1
  Licencia: GPL
*/

/*
  Historia: 
El juego consiste en lo siguiente: hay un robot que debe transportar un zorro, un conejo y una lechuga desde un lado del río hasta la otra orilla, usando una barca. En la barca solo cabe uno de los tres individuos, además del robot. El problema es que si el robot deja solos al zorro y el conejo,el zorro se comerá el conejo. Y si deja solos al conejo y la lechuga, el conejo se comerá la lechuga. El jugador debe controlar que órdenes dar, para lograr que el robot transporte los tres individuos a la otra orilla, sanos y salvos.
*/

#include "Jugador.h"
#include "Orilla.h"
#include "Barca.h"
#include "Individuo.h"
#include "Lugar.h"
#include <vector>
using namespace std;

int main()
{ 

  //Creacion de los lugares
  Orilla orillaIzquierda("Izquierda");
  Orilla orillaDerecha("Derecha");
  Barca barca("Barca");

  vector <Lugar*> lugares =
  {
    &orillaIzquierda, &barca, &orillaDerecha    
  };

  
  //Creación de los personajes
  //Los controles deben ser en mayuscula y todos deben ser diferentes
  Individuo robot("Robot",lugares,"R");
  Individuo lechuga("Lechuga",lugares,"L");
  Individuo conejo("Conejo",lugares,"C");
  Individuo zorro("Zorro",lugares,"Z");  

  vector <Individuo*> personajes = 
  {
    &robot, &lechuga, &conejo,&zorro
  };


  //Configuracion de los personajes
  conejo.puedeComerseA(&lechuga);  
  zorro.puedeComerseA(&conejo);
  
  
  //Configuracion de los lugares
  orillaIzquierda.agregarLugarVecino(&barca);
  barca.agregarLugarVecino(&orillaIzquierda);

  //Creacion del jugador o usuario
  Jugador jugador(personajes, lugares, &barca);  
  
  //Iniciar el juego
  jugador.jugar();
  
  return 0;
}

