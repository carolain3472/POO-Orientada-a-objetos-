/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

/**
  @brief
  Tengo un libro de papel (Machine Learning de 3 páginas), un libro
  electrónico (El problema de los tres cuerpos, de 4 páginas) y un audiolibro
  (Cien años de soledad, de 7 páginas). Quiero leerlos.

  Lo hago de 2 formas: sin polimorfismo y con polimorfismo.

  El polimorfismo se logra usando varios objetos que heredan (es un) de la misma
  clase base. Entonces, puedo tener un puntero que apunte a la clase base y
  también sirve para apuntar a las clases derivadas. De este modo, puedo
  tener colecciones (vector) de objetos de distintos tipos.
  
  En esta primera versión, el audioLibro es parecido a un Libro, que también tiene una función escuchar(). Debido a ello, no es posible el polimorfismo con la función escuchar(), aunque sí se puede con la función leer().
*/

#include"AudioLibro.h"
#include"LibroPapel.h"
#include"LibroElectronico.h"
#include <iostream>
#include<vector>
using namespace std;


int main()
{
  cout << "OBJETOS ESTÁTICOS. No hay polimorfismo, pues cada objeto se trata de manera separada" << endl << endl;

  LibroPapel machine("Machine Learning", 3);
  LibroElectronico tresCuerpos("El problema de los tres cuerpos", 4, "Ángel");  // Titulo, páginas, comprador
  AudioLibro cien("Cien años de soledad", 7);

  cout << machine.leer() << endl;
  cout << tresCuerpos.leer() << endl;
  cout << cien.leer() << endl;
  cout << cien.escuchar() << endl;

  cout << endl << endl;
  cout << "OBJETOS DINÁMICOS. Sí hay polimorfismo, pues todos los objetos se tratan de la misma manera, por medio de punteros a Libro" << endl << endl;
  vector<Libro*> miColeccionDeLibros;  // Toma propiedad de cada libro
  Libro *libro;

  libro = new LibroPapel("Machine Learning", 3);
  miColeccionDeLibros.push_back(libro);

  libro = new LibroElectronico("El problema de los tres cuerpos", 4, "Ángel");
  miColeccionDeLibros.push_back(libro);

  AudioLibro *miAudioLibro = new AudioLibro("Cien años de soledad", 7);
  libro = miAudioLibro;
  // miAudioLibro = libro;  // ERROR: Un puntero a clase Derivada no puede apuntar a clase Base
  miColeccionDeLibros.push_back(libro);

  for(int cualLibro=0; cualLibro<miColeccionDeLibros.size(); cualLibro++)
  {
    cout << miColeccionDeLibros[cualLibro]->leer() << endl;  // POLIMORFISMO

  // NO HAY POLIMORFISMO con la relacion ES PARECIDO A:
//    cout << miColeccionDeLibros[cualLibro]->escuchar() << endl;  // ESTO FALLA, PORQUE LA CLASE BASE NO TIENE ESA FUNCIÓN.
  }

  // NO HAY POLIMORFISMO con la relacion ES PARECIDO A:
  //  cout << miColeccionDeLibros[2]->escuchar() << endl;  // ESTO FALLA, PORQUE LA CLASE BASE NO TIENE ESA FUNCIÓN.
cerr << "[1]" << endl;
  cout << miAudioLibro->escuchar() << endl;  // ESTO FUNCIONA, PORQUE el puntero apunta directamente a la clase Derivada. Pero esto no es POLIMORFISMO
cerr << "[2]" << endl;


  // Hay que borrar los libros, porque main es el propietario
  for(int cualLibro=0; cualLibro<miColeccionDeLibros.size(); cualLibro++)
  {
cerr << "[3]" << endl;
    delete miColeccionDeLibros[cualLibro];
cerr << "[4]" << endl;
    miColeccionDeLibros[cualLibro] = nullptr;
  }
cerr << "[5]" << endl;

  // delete miAudioLibro;  //  ERROR: Segmentation Fault, debido a que hemos borrado dos veces un objeto dinámico.

cerr << "[6]" << endl;

// cout << "\x1B[2J\x1B[H";  // BORRA TODA LA PANTALLA

  return 0;
}
