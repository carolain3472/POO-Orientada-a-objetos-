#include <iostream>

using namespace std;
/*busquedas en arreglos*/

int main() {
/*busqueda secuencial
busca paso a paso, secuencualmente por los espacios del arreglo el dato a buscar*/
int a[]={3,4,2,1,5};
int i, dato;
char band='f';

dato=10;
i=0;
while(band=='f' && i<5){
  if(a[i]==dato){
    band='v';
  }
  i++;
}

if(band=='f'){

  cout<<"No existe"<<endl;
}else{
  cout<<"Existe en "<<i-1<<endl;
}
//tambien sirve para arreglos tipo char



/*busqueda binaria
necesitamos que el arreglo este ordenado ascendentemente
*/
int numeros[]={1,2,3,4,5};
int inf, sup, mitad, dat;
char bande='f';
dat=2;

inf=0; sup=5; //elementos del arreglo
while(inf<=sup){
  mitad = (inf+sup)/2;
  if(numeros[mitad] == dat){
    bande ='v';
    break;
  }else if(numeros[mitad]>dat){
    sup=mitad;
    mitad=(inf+sup)/2;
  }else if(numeros[mitad]<dat){
    inf=mitad;
    mitad= (inf+sup)/2;
  }
}

if(bande=='v'){
  cout<<"Existe en "<<mitad<<endl;
}else{
  cout<<"no existe"<<endl;
}






  return 0;
}