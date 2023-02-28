/*
  Archivo: PresentadorAleatorio.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class PresentadorAleatorio
  @brief
  Atributos:
    - tiene un nombre
  Funcionalidades:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
  Relaciones: ninguna
*/

#ifndef PRESENTADORALEATORIO_HH
#define PRESENTADORALEATORIO_HH

#include <string>
#include <cstdlib>
using namespace std;

class PresentadorAleatorio
{
  protected:
    string nombre;
  
  public:
    /**
     * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
     */
    PresentadorAleatorio();
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~PresentadorAleatorio();
    /**
     * @brief Dice cuál es nombre
     */
     virtual string comoTeLlamas();
    /**
     * @brief Retorna el premio a entregar a un concursante (concretamente, un número al azar entre 0 y 300 bitcoins)
     */
     virtual double entregarPremio();
};

#else
class PresentadorAleatorio;  // Declaración adelantada
#endif


