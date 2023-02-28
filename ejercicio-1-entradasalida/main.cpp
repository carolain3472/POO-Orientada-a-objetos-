#include <iostream>

using namespace std;

int main() {
  /*1. pedir dos numeros y realizar laa operaciones aritmeticas basicas con esos dos numeros*/
  int num1, num2, suma=0, resta=0, multiplicacion, division=0;
  cout<<"ingrese dos numeros: \n";
  cin>>num1; cin>>num2;

  suma=num1+num2;
  resta=num1-num2;
  multiplicacion=num1*num2;
  division=num1/num2;

  cout<< "Suma: "<<suma<<endl;
  cout<< "Resta: "<<resta<<endl;
  cout<< "multiplicacion: "<<multiplicacion<<endl;
  cout<< "division: "<<division<<endl;

  /*
  2. leer el precio de un producto y mostrar en la salida el valor con iva
  */
  int base, total=0;
  cout<<"\nValor del producto: "; cin>>base; 

  total= (base*0.19)+base;
  cout<<"Valor con IVA: "<<total<<endl;

  /*
  3. leer la edad, el sexo, y la altura de una persona, y mostrarlos en pantalla
  */
  int edad;
  float altura;
  char sexo[10];//para guardar mas de un caracter
  cout<<"\ningrese edad: "; cin>>edad;
  cout<<"sexo: "; cin>>sexo;
  cout<<"estatura: "; cin>>altura;

  cout<<"\n Edad: "<<edad<<endl;
  cout<<"\n Sexo: "<<sexo<<endl;
  cout<<"\n Estatura: "<<altura<<endl;

  





  return 0;
}