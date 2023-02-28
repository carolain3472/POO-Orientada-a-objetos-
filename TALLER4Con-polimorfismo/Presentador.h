/*
  Archivo: Presentador.h
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
  @class Presentador
  @brief
  Atributos:
    -nombre
  Funcionalidades:
    - le puedo pedir que entregue el premio
    - le puedo preguntar el nombre
  Relaciones: ninguna
*/

#ifndef PRESENTADOR_HH
#define PRESENTADOR_HH

#include <string>
#include <cstdlib>
using namespace std;

class Presentador
{
  protected:
    string nombre;
  
  public:
    /**
     * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
     */
    Presentador(string nombrePresentador);
    /**
     * @brief Destructor. No hace nada.
     */    
    virtual ~Presentador();
    /**
     * @brief Dice cuál es nombre
     */
    virtual string comoTeLlamas();
    /**
     * @brief declaracion de una funcion virtual pura para entregar premios
     */
    virtual double entregarPremio()=0;
};

#else
class Presentador;  // Declaración adelantada
#endif


