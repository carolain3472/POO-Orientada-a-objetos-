/*
  Archivo: EmpresaDeMudanza.h
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-09-11
  Fecha última modificación: 2020-09-11
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/

/*
  Clase: EmpresaDeMudanza
  Atributos: nombre, nit, flotaDeCamiones 
  Funcionalidades:
    - Puedo comprar camiones. 
    - Puedo cargar los objetos que pueda en los camiones de mi flota y preguntar la carga total que se transporto en una mudanza.
        
  Relaciones: 
    Tiene un vector de camiones
  */

#ifndef EMPRESADEMUDANZA_H
#define EMPRESADEMUDANZA_H

#include<string>
#include <vector>
#include "Camion.h"
using namespace std;

class EmpresaDeMudanza
{
  private:
    string nombre;
    string nit;
    vector <Camion> flotaDeCamiones;   
    

  public:    
    /**
      Constructor. Da valores iniciales a los atributos internos
    */
    EmpresaDeMudanza(string nombre, string nit);

    /**
      Añadir nuevos camiones a la flota de camiones
    */
    virtual void comprarCamion(string laPlaca, int laCapacidadMaxima);

    /**
      Carga los objetos que se puedan incluir a cada camion y retorna el peso total transportado en la mudanza
    */
    virtual int empresaHacerMudanza( vector <int> pesoObjeto,int contadorDePeso);

       
};

#else
class EmpresaDeMudanza; // Declaración adelantada
#endif

