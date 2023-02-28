/*
  Archivo: Concurso.h
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-11-06
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Concurso
  @brief
  Atributos:
    - nombre
  Funcionalidades:
    - le puedo preguntar su nombre
    - le puedo solicitar que reciba un concursante
    - le puedo solicitar que reciba un presentador
    - entregar los premios de los presentadores a los concursantes, en el mismo orden
    - mostrar que recibió cada concursante
  Relaciones:
    - conoce los concursantes en el orden en que recibirán los premios (toma propiedad de ellos)
    - contiene la lista de presentadores, ordenada para entregar premios. (toma propiedad de ellos)
*/

#ifndef CONCURSO_HH
#define CONCURSO_HH

#include "Concursante.h"
#include "PresentadorIdeasFijas.h"
#include "PresentadorAleatorio.h"
#include "PresentadorLoco.h"
#include "Presentador.h"
#include <vector>
#include <string>
using namespace std;

class Concurso
{
  protected:
    string nombre;
    vector <Concursante *> concursantes;
    vector <Presentador *> presentadores;
    
  public:
    /**
     * @brief Construye un Concurso con un nombre
     */
    Concurso(string nombre);
    /**
     * @brief Destructor. Borra todos los concursantes y los presentadores
     */
    virtual ~Concurso();
    /**
     * @brief Dice cuál es nombre del Concurso
     */
     virtual string comoTeLlamas();
    /**
     * @brief Añade un nuevo concursante. Toma propiedad de él.
     */
     virtual void nuevoConcursante(Concursante *concursante);
    /**
     * @brief Añade un nuevo presentador. Toma propiedad de él.
     */
     virtual void nuevoPresentador(Presentador *presentador);
    
    /**
     * @brief Entrega premios a los concursanes, emparejando cada concursante con un presentador, es decir: el primer presentador entrega premio al primer concursante, el segundo presentador al segundo concursante, etc. y así sucesivamente hasta que le entregue el premio a todo los concursantes.
     */
     virtual void entregarPremios();
    /**
     * @brief retorna un string con cada concursante y el premio que obtuvo
     */
     virtual string mostrarPremiosDeConcursantes();     
};

#else
class Concurso;  // Declaración adelantada
#endif


