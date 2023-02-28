//PRIMER PROGRAMA EN C++


#include <iostream>//input output(sirve para que los programas puedan tener entradas y salidas de datos)

using namespace std;//para poner los flujos de entrada y salida mas sencillos ( evita usar "std::" antes del cout)


int main() {
  cout<< "Hello World \n"<<endl; //imprime en pantalla lo que se escriba dentro de él
  //<<endl tambien es para saltos de linea
   
  //------------------------------------------------------ 
    int nom= 45;
  cout<< nom<<endl; 




  //Tipos de datos basicos
  int entero =15;
  float flotante=3.5;
  double flotanteextensso=16.555555;
  char letra = 'e';
  cout<<entero<<endl;
  cout<<flotante<<endl;
  cout<<flotanteextensso<<endl;
  cout<< letra<<endl;

  //lectura o entrada de datos
  //guardar valores ingresador por un usuario en una variable
  int num;  //definir la variable
  cout<<"digite un numero: ";
  cin>>num;  //guardando la variable

  cout<<"\nNumero : "<<num;

  /*
  comentarios de bloque
  */





  return 0;
}
