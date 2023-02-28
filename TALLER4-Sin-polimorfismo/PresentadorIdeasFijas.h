/*
  Archivo: PresentadorIdeasFijas.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorIdeasFijas
  @brief
  Atributos:
    - tiene un nombre
  Funcionalidades:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
  Relaciones: ninguna
*/

#ifndef PRESENTADORIDEASFIJAS_HH
#define PRESENTADORIDEASFIJAS_HH

#include <string>
using namespace std;

class PresentadorIdeasFijas
{
  protected:
    string nombre;
  
  public:
    /**
     * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
     */
    PresentadorIdeasFijas();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorIdeasFijas();
    /**
     * @brief Dice cuál es nombre
     */
     virtual string comoTeLlamas();
    /**
     * @brief Retorna el premio a entregar a un concursante (concretamente, 100 bitcoins)
     */
     virtual double entregarPremio();
};

#else
class PresentadorIdeasFijas;  // Declaración adelantada
#endif


