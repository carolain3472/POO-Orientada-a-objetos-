/*
  Archivo: Concursante.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class Concursante
  @brief
  Atributos:
    - nombre
    - el premio que recia, en bitcoins
  Funcionalidades:
    - le puedo preguntar su nombre y el premio recibido
    - le puedo solicitar que reciba el premio
  Relaciones: ninguna
*/

#ifndef CONCURSANTE_HH
#define CONCURSANTE_HH

#include <string>
using namespace std;

class Concursante
{
  protected:
    string nombre;
    double bitcoinsDePremio;
    
  public:
    /**
     * @brief Construye un Concursante con un nombre. Inicialmente no tiene ningún premio.
     */
    Concursante(string nombre);
    /**
     * @brief Destructor. No hace nada.
     */
    virtual ~Concursante();
    /**
     * @brief Dice cuál es nombre
     */
     virtual string comoTeLlamas();
    /**
     * @brief Dice cuál fue el premio que recibió
     */
     virtual double quePremioTeDieron();
    /**
     * @brief Recibe el premio del concurso (una cierta cantidad de bitcoins)
     */
     virtual void recibirPremio(double bitcoinsDePremio);
};

#else
class Concursante;  // Declaración adelantada
#endif


