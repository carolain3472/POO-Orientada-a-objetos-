/*
  Archivo: Camion.h
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2020-09-04
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/

/*
  Clase: Camion
  Atributos: placa, capacidadMaxima y pesoAcumulado
  Funcionalidades:
    - Puedo preguntar si se pudo carga el objeto al camion. 
    - Puedo preguntarle la carga que se transportó, y la placa del camion.     
  Relaciones: ninguna
*/


#ifndef CAMION_H
#define CAMION_H

#include<string>
using namespace std;


class Camion
{
  private:
    string placa;
    int capacidadMaxima;
    int pesoAcumulado;
    
  public:
    /**
      Constructor. Da valores iniciales a los atributos internos
    */
    Camion(string laPlaca, int laCapacidadMaxima);

    /**
      Averigua si se pudo cargar el objeto al camion o no.
    */
    virtual bool cargarUnObjeto(int pesoDelObjeto);

    /**
      Retorna la carga total que transportó el camion
    */
    virtual int hacerMudanza();
     
    /**
      Retorna la placa del camion
    */
    virtual string cualEsLaPlaca(); 
};

#else
class Camion; // Declaración adelantada
#endif
