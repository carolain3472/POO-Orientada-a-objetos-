#include <iostream>
using namespace std;

template <class TIPOD>
void abs(TIPOD numero);
//void no retorna nada

void pedirDatos();
void mult(float x, float y);
float num1, num2;

int main() {

  /*plantilla de dato: sirve para hacer un tipo de dato general cuando no se que tipo de dato va a retornar mi funcion
  
  ejemplo: sacar el valor absoluto de un numero*/

  int n1=-689;
  float n2=-4.56;
  double n3=-3.6732123;

  int ab1=abs(n1);
  float ab2=abs(n2);
  double ab3= abs(n3);

  cout<<ab1<<endl<<ab2<<endl<<ab3<<endl;  

  /*ejercico1
  multiplicar dos decimales*/
  pedirDatos();
  mult(num1, num2);




  return 0;
}

template <class TIPOD>
void abs(TIPOD numero){
  if(numero<0){
    numero *=-1;
  }else{
    numero;
  }
  
}

void pedirDatos(){
  cout<<"Numeros: ";cin>>num1>>num2;
}

void mult(float x, float y){
  float multiplo=x*y;
  cout<<"R/ "<<multiplo<<endl;
}