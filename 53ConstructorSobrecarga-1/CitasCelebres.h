/*
  Archivo: CitasCelebres.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-14
  Fecha última modificación: 2020-09-15
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class CitasCelebres
  @brief
  Atributos: 
    - Contiene un array de citas célebres con sus correspondientes autores.
  Funcionalidades: 
    - Se le puede pedir una cita al azar, o bien un número de citas separadas por salto de línea, o bien una cita de un autor determinado.
  Relaciones: ninguna
*/

#ifndef CITASCELEBRES_HH
#define CITASCELEBRES_HH

#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class CitasCelebres
{
  private:
    vector < vector <string> > autoresYCitas;  // Es un vector de vectores (de dos posiciones). En el primer string va el autor y en el segundo su cita.
    
  public:
    /**
     * @brief Construye una estructura de datos sin citas.
     */
    CitasCelebres();
    /**
     * @brief Construye una estructura de datos con unas cuantas citas célebres de autores famosos.
     * @param autores es un array de autores
     * @param citas es un array de citas, en el mismo orden que los autores
     * @param totalCitas es la cantidad de elementos en esos arrays (que debe ser la misma). Recordemos que los arrays no son clases y, por tanto, no les podemos preguntar cual es su size()
     */
    CitasCelebres(string autores[], string citas[], int totalCitas);
    /**
     * @brief Añade una nueva cita, con su autor. 
     * @param el autor
     * @param la cita
     */
     virtual void anadirCita(string autor, string cita);
    /**
     * @brief Añade una nueva cita anónima (autor desconocido)
     * @param la cita
     */
     virtual void anadirCita(string cita);
    /**
     * @brief Pide una cita al azar
     * @return la cita
     */
     virtual string dimeUnaCita();
    /**
     * @brief Pide varias citas al azar, separadas por FIN DE LÍNEA
     * @return la cita
     */
     virtual string dimeUnaCita(int cuantasCitas);
    /**
     * @brief Pide una cita de un autor concreto
     * @return la cita
     */
     virtual string dimeUnaCita(string autor);
};

#else
class CitasCelebres;  // Declaración adelantada
#endif


