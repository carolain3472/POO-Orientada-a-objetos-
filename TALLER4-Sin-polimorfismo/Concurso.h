/*
  Archivo: Concurso.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class Concurso
  @brief
  Atributos:
    - nombre
    - el presupuesto que tiene para entregar en premios (en bitcoins)
  Funcionalidades:
    - le puedo preguntar su nombre
    - le puedo solicitar que reciba un concursante
    - le puedo solicitar que reciba un presentador (en sus distintos tipos)
    - entregar los premios de los presentadores a los concursantes, en el mismo orden
    - mostrar que recibió cada concursante
  Relaciones:
    - conoce los concursantes en el orden en que recibirán los premios (toma propiedad de ellos)
    - conoce a los tres tipos de presentadores (toma propiedad de ellos)
    - contiene la lista de nombres de presentadores, ordenada para entregar premios
*/

#ifndef CONCURSO_HH
#define CONCURSO_HH

#include "Concursante.h"
#include "PresentadorIdeasFijas.h"
#include "PresentadorAleatorio.h"
#include "PresentadorLoco.h"
#include <vector>
#include <string>
using namespace std;

class Concurso
{
  protected:
    string nombre;
    double bitcoinsDisponiblesParaPremios;
    vector <Concursante *> concursantes;
    PresentadorIdeasFijas *presentadorIdeasFijas;
    PresentadorAleatorio *presentadorAleatorio;
    PresentadorLoco *presentadorLoco;
    vector <string> nombresPresentadores;
    
  public:
    /**
     * @brief Construye un Concurso con un nombre y un presupuesto para premios
     */
    Concurso(string nombre, double bitcoinsDisponiblesParaPremios);
    /**
     * @brief Destructor. Borra todos los concursantes y los tres presentadores
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
     * @brief Añade un nuevo presentador de ideas fijas. Toma propiedad de él.
     */
     virtual void nuevoPresentador(PresentadorIdeasFijas *presentador);
    /**
     * @brief Añade un nuevo presentador aleatorio. Toma propiedad de él.
     */
     virtual void nuevoPresentador(PresentadorAleatorio *presentador);
    /**
     * @brief Añade un nuevo presentador loco. Toma propiedad de él.
     */
     virtual void nuevoPresentador(PresentadorLoco *presentador);
    /**
     * @brief Entrega premios a los concursanes, emparejando cada concursante con un presentador, es decir: el primer presentador entrega premio al primer concursante, el segundo presentador al segundo concursante, etc. y así sucesivamente hasta que se acaba el dinero del presupuesto del concurso.
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


