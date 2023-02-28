#include <iostream>
using namespace std;



int main() {
  /*1. definir un vector,caluclar la suma de los elementos de un vector*/
  int numeros[]={1,2,3,4,10},suma=0;
  for(int i=0; i<5;i++){
    suma+=numeros[i];
  }
  cout<<"Suma vector: "<<suma<<endl;

  /*2.calcular multiplicacion acumulada de los elementosde un vector*/
  int multiplicacion=1;
  for(int i=0; i<5;i++){
    multiplicacion*=numeros[i];
  }
  cout<<"multiplicacion vector: "<<multiplicacion<<endl; 

  /*3. leer un vector de numeros y mostrarlos con sus indices */
  int numero[100],n;
  cout<<"elementos del arreglo: ";cin>>n;

  for(int i=0; i<n;i++){
    cout<<"Numero: "; 
    cin>>numero[i];


  }

  for(int i=0; i<n; i++){
    cout<<i<<"->"<<numero[i]<<endl;
  }


  /*4. leer un vector de numeros y mostrarlos del ultimo al primer elemento
  */

  //lo mismo del ejercicio 3
  cout<<"\nAhora al revez: "<<endl;
  for(int i=n-1; i>=0; i--){
    cout<<i<<"->"<<numero[i]<<endl;
  }

  /*5. leer un vector de enteros y determinar el mayor */
  int mayor=0;
   //lo mismodel ejercicio 3 para cresr el vector

  for(int i=0; i<n; i++){
    cout<<"Numero: "; 
    cin>>numero[i];

    if(numero[i]>mayor){
      mayor=numero[i];
    }
  }
   cout<<"El mayor es: "<<mayor<<endl;

   /* 6. calcular si existe algun numero en el vector que sea la suma del resto de numeros del vector*/

   //determinar cual es el numero mayor ya que el unico nuero que puede ser la suma de los demas es el numero mayor

   int mayor2=0;

   
  for(int i=0; i<5; i++){
 
    if(numeros[i]>mayor2){
      mayor2=numeros[i];
    }
  }

  if(  mayor2== (suma-mayor2)){
    cout<<"El numero "<<mayor2<<" es la suma del resto\n";
  }else{
    cout<<"No existe ningun numero\n";
  }

  /*7. definir 2 vectores de carectores y concatenarlos*/

  char letras1[]={'a','b','c','d'};
  char letras2[]={'e','f','g','h'};
  char letrasconcat[8];

 //pasando lo de letras1 a letrasconcat
  for(int i=0; i<4;i++){
    letrasconcat[i]=letras1[i];
  }
  
 //pasando lo de letras2 a letrasconcat
   for(int i=4; i<8;i++){
    letrasconcat[i]=letras2[i-4];
  }
  cout<<"nuevo arreglo: "<<endl;
    for(int i=0; i<8; i++){
    cout<<i<<"->"<<letrasconcat[i]<<endl;
  }

  /*8. leer 5 numeros en un arreglo, y copiarlos en otro arrelgo multiplicados por 2 y mostrar el arreglo final*/
  int num[5], pordos[5];

  
  for(int i=0; i<5;i++){
    cout<<"Numero: "; 
    cin>>num[i];
  }

  for(int i=0; i<5; i++){
    pordos[i]=num[i]*2;
  }

    cout<<"nuevo arreglo: "<<endl;
    for(int i=0; i<5; i++){
    cout<<i<<"->"<<pordos[i]<<endl;
  }


  return 0;
  
}  