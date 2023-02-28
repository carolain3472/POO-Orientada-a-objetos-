#include <iostream>

using namespace std;

int main() {

  /*metodo burbuja
 los numeros menores suben a las primeras posiciones del arreglo, y revisa la lista hasta que todo este ordenado
*/
 int numeros[]={4,1,2,3,5};
 int i,a,aux;

 for(i=0; i<5;i++){
  for(a=0; a<5;a++){
    if(numeros[a]> numeros[a+1]){
      aux = numeros[a];
      numeros[a]=numeros[a+1];
      numeros[a+1]=aux;
    }
  }
 }

 cout<<"Ascendente: "<<endl;
 for(i=0; i<5;i++){
   cout<<numeros[i];
 }

  cout<<"\ndescendente: "<<endl;
 for(i=4; i>=0;i--){
   cout<<numeros[i];
 }


 /*ordenamieento por insercion 
 observa si el numero a la izquierda es mayor que el numeroactual si asi es, hace un cambio*/

 int pos, aux2;
 for(i=0; i<5;i++){
   pos=i;
   aux2= numeros[i];

   while(pos>0 && numeros[pos-1]>aux2){
     numeros[pos]=numeros[pos-1];
     pos--;

   }

   numeros[pos]=aux2;

  
 }
 //41235
 //pos=0 aux2=4
 //numeros[0]=4

 //pos=1 aux2=1
 //4>1   numeros[1]=4
 //pos=0
 //numeros[0]=1
 //14235

 //pos=2 aux2=2
 //4>2   numeros[2]=4
 //pos=1
 //1>2
 //numeros[1]=2
 //12435

//pos=3 aux2=3
//4>3   numeros[3]=4
//pos=2
//2>3
//numeros[2]=3
//12345

//pos=4 aux2=5
//4>5
//numeros[4]=5
//12345

cout<<"\nAscendente insercion: "<<endl;
 for(i=0; i<5;i++){
   cout<<numeros[i];
 }

  cout<<"\ndescendente: "<<endl;
 for(i=4; i>=0;i--){
   cout<<numeros[i];
 }


/*ordenamieento por seleccion 
busca el elemento menor, y lo cambia por el primer elemento de la lista, busca el minimo del resto de la lista y lo cambia con el segundo y asi sucesivamente*/

int aux3, min;
for(i=0;i<5;i++){
  min=i;
  for(a=i+1;a<5;a++){
    if(numeros[a]<numeros[min]){
      min=a;
    }
  }
  aux3=numeros[i];
  numeros[i]=numeros[min];
  numeros[min]=aux3;
}

//312
//min=0
//1<3  min=1
//2<1
//aux3=3
//numeros[0]=1
//numeros[1]=3
//132

//min=1
//2<3  min=2
//aux3=3
//numeros[1]=2
//numeros[2]=3
//123

//min=2
//aux3=3
//numeros[2]=3
//numero[2]=3
//123

cout<<"\nAscendente seleccion: "<<endl;
 for(i=0; i<5;i++){
   cout<<numeros[i];
 }

  cout<<"\ndescendente: "<<endl;
 for(i=4; i>=0;i--){
   cout<<numeros[i];
 }




 return 0;
}