/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-22
  Fecha última modificación: 2020-09-29
  Versión: 0.1
  Licencia: GNU-GPL
*/


/**
  HISTORIA: 
- Inicialmente Ana tiene un capital de 200 y una bici, Rafa tiene 10, Luisa tiene 20 y Jorge tiene 10 y un telescopio. El banco acaba de abrir y todavía no tiene ninguna cuenta de ningún cliente.
- Luisa tiene un trabajo fijo con el que gana 30 cada mes.
- Jorge ganó 100 haciendo un trabajo puntual. 50 se los da a su mamá Luisa. Con los otros 50 compra una bici, que estaba vendiendo Ana.
- Ana compra el telescopio de Jorge por 230. El resto lo guarda en una cuenta en un banco, que le da 10% de interés anual.
- Cada año, Jorge gasta 10 en mantenimiento de su telescopio.
- Luisa regala 5 al mes a causas ecológicas.
- Después de 3 años, ¿que poseen y cuanto dinero tienen Ana, Luisa y Jorge? ¿Cuantas cuentas tiene el banco y por qué valor?

*/

#include "Persona.h"
#include "Banco.h"
#include "iostream"
using namespace std;

int main()
{  
  Banco unBanco(0.1); // Interés del 10% anual
  Persona ana("Ana Lopez", 200, "bici");
  Persona luisa("Luisa Fernanda", 20);
  Persona rafa("Rafa Garcia", 10);
  Persona jorge("Jorge Pinto", 10, "telescopio");
 
  jorge.recibePlata(100);
  luisa.recibePlata(jorge.daPlata(50));
  // Compraventa de la bici:
  ana.recibePlata(jorge.daPlata(50));
  jorge.recibeObjeto(ana.daObjeto("bici"));
  // Compraventa de telescopio:
  jorge.recibePlata(ana.daPlata(230));
  ana.recibeObjeto(jorge.daObjeto("telescopio"));
  unBanco.recibirPlata(ana.daTodaLaPlata(), ana.dimeTuNombre());

  // El tiempo pasa...
  for(int anhos=0; anhos<3; anhos++)  
  {
    jorge.daPlata(10);  // mantenimiento de telescopio
    for(int meses=0; meses<12; meses++)
    {
      luisa.recibePlata(30);   // Trabajo fijo
      luisa.daPlata(5);  // Causas ecológicas
    }
    unBanco.generaInteresesAnuales();
  }

  cout << jorge.dimeTuNombre() << " tiene " << jorge.cuantaPlata() << " pesos y también tiene: " << jorge.objetosQuePosee() << endl;
  cout << ana.dimeTuNombre() << " tiene " << ana.cuantaPlata() << " pesos y también tiene: " << ana.objetosQuePosee() << endl;
  cout << luisa.dimeTuNombre() << " tiene " << luisa.cuantaPlata() << " pesos y también tiene: " << luisa.objetosQuePosee() << endl;
  cout << rafa.dimeTuNombre() << " tiene " << rafa.cuantaPlata() << " pesos y también tiene: " << rafa.objetosQuePosee() << endl;

  cout << "El banco tiene las siguientes cuentas y saldos: " << endl << unBanco.reporteTotal() << endl;

  return 0;
}
