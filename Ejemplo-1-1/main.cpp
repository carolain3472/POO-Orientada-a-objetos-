#include <iostream>
#include <string>

using namespace std;

int main()
{
  string nombre;
  int edad;
  double nota;
  string auxiliar;

  cout << "¿Cómo te llamas? ";
  getline(cin, nombre);

  cout << "¿Cuál es tu edad? ";
  getline(cin, auxiliar);
  edad = stoi(auxiliar);
  
  cout << "¿Qué nota sacaste? ";
  getline(cin, auxiliar);
  nota = stod(auxiliar);

  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " años, sacó una nota de " << nota << endl;

  return 0;
}