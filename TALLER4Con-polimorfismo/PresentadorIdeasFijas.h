¿/*
  Archivo: PresentadorIdeasFijas.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorIdeasFijas
  @brief
  Atributos:
    -nombre
  Funcionalidades:
    - le puedo pedir que entregue el premio
    - le puedo preguntar el nombre
  Relaciones: 
    - Es un presentador
*/

#ifndef PRESENTADORIDEASFIJAS_HH
#define PRESENTADORIDEASFIJAS_HH

#include "Presentador.h"
#include <string>
using namespace std;

class PresentadorIdeasFijas : public Presentador
{  
  public:
    /**
     * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
     */
    PresentadorIdeasFijas();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorIdeasFijas();

     /* @brief Retorna el premio a entregar a un concursante (concretamente, 100 bitcoins)
     */
     virtual double entregarPremio();
};

#else
class PresentadorIdeasFijas;  // Declaración adelantada
#endif


