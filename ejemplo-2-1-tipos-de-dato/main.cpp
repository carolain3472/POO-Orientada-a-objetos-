/*
  Utilidad: ver tipos de datos básicos y Arrays de una dimensión.
  Los tipos básicos son:
  double ..... real (bueno, con ciertos límites: 10^+/-308 y 15 dígitos de precisión en la mantisa)
  int    ..... entero (también con ciertos límites: +/-2*10^9)
  string ..... mensajes, letras, frases
  bool   ..... booleano, o sea, true o false (aunque bajo cuerda el false es lo mismo que 0, y true es lo mismo que cualquier otro número).
*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int diasDeLaSemana = 7;
  double intereses = 3.05;
  string mensaje = "Bienvenid@s a mi asignatura";
  bool laCrudaRealidad = 4 > 3;
  bool fakeNews = 4 < 3;

  cout << "diasDeLaSemana=" << diasDeLaSemana << endl;
  cout << "intereses=" << intereses << endl;
  cout << "mensaje=" << mensaje << endl;
  cout << "laCrudaRealidad=" << laCrudaRealidad << endl;
  cout << "fakeNews=" << fakeNews << endl;

  // Arrays de una dimensión:
  string nombresAmigos[] =   {"Ana", "Luis",  "Artur", "Diana"};
  int edades[] =             {   32,     19,       48,      35};
  double altura[] =          { 1.56,   1.90,     1.75,    1.68};
  bool verdadesYMentiras[] = { true, false, 10 == 2+8,  5 != 9};

  // Los Arrays no se manejan como objetos. En C++ son solo direcciones de memoria (punteros)
  cout << "nombresAmigos=" << nombresAmigos << endl;
  cout << "edades=" << edades << endl;
  cout << "altura=" << altura << endl;
  cout << "verdadesYMentiras=" << verdadesYMentiras << endl;

  // Para manejar adecuadamente en C++ los Arrays, hay que hacerlo con cada elemento por separado:
  cout << nombresAmigos[0] << endl;
  cout << edades[1] << endl;
  cout << altura[2] << endl;
  cout << verdadesYMentiras[3] << endl;

  // Para imprimir todos los valores de un array se puede hacer con un bucle for:
  for(int cual=0; cual < 4; cual++)
  {
    cout << nombresAmigos[cual] << ", \t";
    cout << edades[cual] << ", \t";
    cout << altura[cual] << ", \t";
    cout << verdadesYMentiras[cual];
    cout << endl;
  }

  return 0;
}