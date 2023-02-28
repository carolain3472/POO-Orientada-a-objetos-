/*
  Archivo: Bicicleta.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-09-15
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class Bicicleta
  @brief
  Atributos: color, cantidad de piñones, cantidad de platos, kilómetros recorridos
  Funcionalidades: puedo pedalear unos cuantos kilómetros y puedo ver el cuentakilómetros
  Relaciones: ninguna
*/

#ifndef BICICLETA_HH
#define BICICLETA_HH

#include <string>
using namespace std;


class Bicicleta
{
  private:
    string color;
    int cantidadDePinones;
    int cantidadDePlatos;
    int cuentaKilometros;
    
  public:
    /**
     * @brief Construye una bicicleta, con los datos indicados, poniendo a cero el cuentaKilometros
     * @param color
     * @param cantidadDePinones
     * @param cantidadDePlatos
     */
    Bicicleta(string color, int cantidadDePinones, int cantidadDePlatos);
    /** 
      Destructor que no hace nada
    */
    virtual ~Bicicleta();
    /**
      Pedalea unos cuantos kilómetros
      @param los kilómetros a pedalear
    */
    virtual void pedalear(int kilometros);
    /**
      Indica el total de kilómetros recorridos
      @return kilómetros recorridos
    */
    virtual int verCuentaKilometros();
};

#else
class Bicicleta;  // Declaración adelantada
#endif

