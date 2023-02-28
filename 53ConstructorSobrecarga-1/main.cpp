/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2019-09-15
  Versión: 0.1
  Licencia: GPL
*/

/*
  Utilidad para la asignatura: mostrar la sobrecarga de funciones y del constructor. Mostrar como se generan números seudoaleatorios.

  Historia: Necesito poner citas chéveres en mi próximo libro. Voy a tener dos listas de citas y autores y voy a pedir que me imprima citas de ambas listas.
*/
  
/dev/random



#include "CitasCelebres.h"
#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{
  srand (time(0));
  const int totalCitas = 10;
  string autores[totalCitas] = { "John Lennon", "Franz Kafka", "Buda", "George Savile", "Mark Twain", "Bernard Shaw", "Einstein", "Yogi Berra", "George Wells", "Descartes" };
  string citas[totalCitas] = {
                               "Haz el amor y no la guerra",
                               "La juventud es feliz porque tiene la capacidad de ver la belleza. Cualquiera que conserve la capacidad de ver la belleza jamás envejece",
                               "Aferrarse a la ira es como beber veneno y esperar que la otra persona muera",
                               "La persona que es una maestra en la paciencia puede con todo lo demás",
                               "Nunca discutas con gente estúpida, te arrastrarán a su nivel y entonces te ganarán con la experiencia",
                               "El hombre razonable se adapta al mundo; el irrazonable intenta adaptar el mundo a sí mismo. Así pues, el progreso depende del hombre irrazonable",
                               "No se puede acabar con el dominio de los tontos, porque son tantos, y sus votos cuentan tanto como los nuestros",
                               "Ya nadie va a ese restaurante porque está siempre demasiado lleno",
                               "La civilización es una carrera entre la educación y la catástrofe",
                               "Los malos libros provocan malas costumbres y las malas costumbres provocan buenos libros"
                             };

  

  CitasCelebres variasCitas(autores, citas, totalCitas); 
  variasCitas.anadirCita("Niels Bohr", "Prediction is difficult, especially about the future");
  cout << "Una cita: " << variasCitas.dimeUnaCita() << endl << endl;
  cout << "Tres citas: " << variasCitas.dimeUnaCita(3) << endl << endl;
  cout << "Una cita de Mark Twain: " << variasCitas.dimeUnaCita("Mark Twain") << endl << endl;


  CitasCelebres otrasCitas;  // Inicialmente no hay citas
  otrasCitas.anadirCita("Mark Twain", "Wagner’s music is better than it sounds");
  otrasCitas.anadirCita("Clara García", "Para hacer una cosa, primero hay que hacer otra");
  otrasCitas.anadirCita("Marshall McLuhan", "Si no lo hubiera creído, no lo habría visto");

  cout << "Una cita: " << otrasCitas.dimeUnaCita() << endl << endl;
    
  return 0;
}


