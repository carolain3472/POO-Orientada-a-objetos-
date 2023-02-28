
void funcion()
{
  return 56;
}

int x = funcion();

#include <string>
using namespace std;
string valor = to_string(78.45e-3);
stoi()
stod()


/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-22
  Fecha última modificación: 2020-09-22
  Versión: 0.1
  Licencia: GNU-GPL
*/


/**
  HISTORIA: 
   Inicialmente Ana tiene un capital de 200 y una bici, Rafa tiene 10, Luisa tiene 20 y Jorge tiene 10 y un telescopio. El banco acaba de abrir y todavía no tiene ninguna cuenta de ningún cliente, pero luego les abre a los tres. Toda la plata se guarda en las respectivas cuentas.
Luisa tiene un trabajo fijo con el que gana 30 cada mes.
Jorge ganó 100 haciendo un trabajo puntual. 50 se los da a su mamá Luisa.
Con los otros 50 compra una bici, que estaba vendiendo Ana.
Ana compra el telescopio de Jorge por 230. El resto lo guarda en una cuenta en un banco, que le da 10% de interés anual.
Cada año, Jorge gasta 10 en mantenimiento de su telescopio.
Luisa regala 5 al mes a causas ecológicas.
Después de 3 años, ¿que poseen y cuanto dinero tienen Ana, Luisa y Jorge? ¿Cuantas cuentas tiene el banco y por qué valor?

Objetos: 
clase Persona: ana, rafa, luisa, jorge
Relaciones: conoce objetos(strings)
Otros objetos: cuenta bancaria, objetoConUnPrecio


Verbos: darPlata, recibirPlata, darObjeto, recibirObjeto, darTodaLaPlata
bucle años 0 <3

*/


int main()
{  
  Banco unBanco;
  Persona ana("Ana Lopez", 200, "bici");
  Persona luisa("Luisa Fernanda", 20);
  Persona rafa("Rafa Garcia", 10);
  Persona jorge("Jorge Pinto", 10, "telescopio");

  unBanco.recibirPlata(ana.darTodaLaPlata(), ana.dimeTuNombre());
  
  jorge.recibirPlata(100);
  luisa.recibePlata(jorge.darPlata(50));
  ana.reibirPlata(jorge.darPlata(50));
  jorge.recibirObjeto(ana.darObjeto("bici"));

  for(int anhos; anhos<3; anhos++)
    for(int meses=0; meses<12; meses++)
    {
      luisa.recibePlata(30);
    }
  return 0;
}