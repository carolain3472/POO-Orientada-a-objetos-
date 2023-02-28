/*
  Archivo: PresentadorAleatorio.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorAleatorio
  @brief
  Atributos:
    -nombre
  Funcionalidades:
    - le puedo pedir que entregue el premio
    - le puedo preguntar el nombre
  Relaciones: 
    - es un Presentador
*/

#ifndef PRESENTADORALEATORIO_HH
#define PRESENTADORALEATORIO_HH
#include "Presentador.h"
#include <string>
#include <cstdlib>
using namespace std;

class PresentadorAleatorio : public Presentador
{
  
  public:
    /**
     * @brief Construye un presentador aleatorio (ese va a ser su nombre)
     */
    PresentadorAleatorio();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorAleatorio();
    /**
     * @brief Retorna el premio a entregar a un concursante (concretamente, un número al azar entre 0 y 300 bitcoins)
     */
     virtual double entregarPremio();
};

#else
class PresentadorAleatorio;  // Declaración adelantada
#endif


