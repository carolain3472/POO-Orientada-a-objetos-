/*
  Archivo: PresentadorLoco.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorLoco
  @brief
  Atributos:
    - nombre
  Funcionalidades:
    - le puedo pedir que entregue el premio
    - le puedo preguntar el nombre
  Relaciones: 
    - es un Presentador.
*/

#ifndef PRESENTADORLOCO_HH
#define PRESENTADORLOCO_HH

#include "Presentador.h"
#include <string>
using namespace std;

class PresentadorLoco : public Presentador
{
  protected:
  
  public:
    /**
     * @brief Construye un presentador loco (ese va a ser su nombre)
     */
    PresentadorLoco();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorLoco();
    /**
     * @brief Retorna el premio a entregar a un concursante (concretamente, el número de letras de su nombre multiplicado por 200)
     */
    virtual double entregarPremio();
};

#else
class PresentadorLoco;  // Declaración adelantada
#endif


