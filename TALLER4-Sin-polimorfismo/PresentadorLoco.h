/*
  Archivo: PresentadorLoco.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorLoco
  @brief
  Atributos:
    - tiene un nombre
  Funcionalidades:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
  Relaciones: ninguna
*/

#ifndef PRESENTADORLOCO_HH
#define PRESENTADORLOCO_HH

#include <string>
using namespace std;

class PresentadorLoco
{
  protected:
    string nombre;
  
  public:
    /**
     * @brief Construye un presentador aleatorio (ese va a ser su nombre)
     */
    PresentadorLoco();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorLoco();
    /**
     * @brief Dice cuál es nombre
     */
     virtual string comoTeLlamas();
    /**
     * @brief Retorna el premio a entregar a un concursante (concretamente, el número de letras de su nombre multiplicado por 200)
     */
     virtual double entregarPremio();
};

#else
class PresentadorLoco;  // Declaración adelantada
#endif


