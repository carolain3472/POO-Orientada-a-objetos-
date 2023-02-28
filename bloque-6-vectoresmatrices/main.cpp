#include <iostream>

using namespace std;

int main() {
  /*1. rellenar una matriz, pedir filas y columnas*/
  int mnumeros[100][100], filas, columnas;

  cout<<"Digite el filas: ";cin>>filas;
  cout<<"Digite el columas: ";cin>>columnas;

  for(int i=0; i<filas; i++){
    for(int a=0; a<columnas;a++){
      cout<<"Numero en: ["<<i<<"]["<<a<<"]: ";
      cin>>mnumeros[i][a];
      //i filas
      //a columnas
    }
  }

  cout<<"Matriz: "<<endl;

  for(int i=0; i<filas; i++){
    for(int a=0; a<columnas;a++){
      cout<<mnumeros[i][a];

    }
    //aqui porque cada que se acabe una fila es decir que ya haya ingresado todas sus columnas, hara un salto de linea
    cout<<"\n";
  } 

  /*2. definir una matriz 3x3 y con un ciclo mostrar la diagonal principal de la matriz*/
  int mtresxtres[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  cout<<"\nDiagonal: \n";

  for(int i=0; i<3; i++){
    for(int a=0; a<3;a++){
      if(i==a){
              cout<<mtresxtres[i][a]<<endl;
            }
    }
    cout<<"\n";
  } 

  /*3. matriz 2x2, llenarla de int y copiar todo en otra matrz*/
  int mdosxdos[2][2]={{1,2},{3,4}};
  int mdos[2][2];
  
  for(int i=0; i<2; i++){
    for(int a=0; a<2;a++){
      mdos[i][a]=mdosxdos[i][a];

    }
  } 

  
  for(int i=0; i<2; i++){
    for(int a=0; a<2;a++){
      cout<<mdos[i][a];
    }
    cout<<"\n";
  } 

  /*4. lo mismo del punto 3 pero ahora preguntandole al usuario la matriz*/

  /*5. leer una matriz 3x3 y hacer la transpuesta es decir, las filas pasan a ser las columnas y viceversa*/

  int mnumero[3][3];
    cout<<"\n";
  
  for(int i=0; i<3; i++){
    for(int a=0; a<3;a++){
      cout<<"Numero en: ["<<i<<"]["<<a<<"]: ";
      cin>>mnumero[i][a];
      //i filas
      //a columnas
    }
  }

  cout<<"\nmatriz cambiada: "<<endl;
  for(int i=0; i<3; i++){
    for(int a=0; a<3;a++){
      cout<<mnumero[a][i];
    }
    cout<<"\n";
  } 

  /*6. calcule la suma de dos matrices 3x3*/
  int sumart=0, suma1=0, suma2=0;
   for(int i=0; i<3; i++){
    for(int a=0; a<3;a++){
      suma1+= mtresxtres[i][a];
      suma2+= mnumero[i][a];

    }
  } 
  sumart=suma1+suma2; 
  cout<<"\nSuma total: "<<sumart<<endl;

  /*7.determinar si una matriz es simetrica o no. lo que significa que debe ser cuadrada e igual a la matriz transpuesta */

  int num[100][100], filas1, col1;
  char band='F';

  cout<<"\nDigite el filas: ";cin>>filas1;
  cout<<"Digite el columas: ";cin>>col1;

  
  for(int i=0; i<filas1; i++){
    for(int a=0; a<col1;a++){
      cout<<"Numero en: ["<<i<<"]["<<a<<"]: ";
      cin>>num[i][a];
      //i filas
      //a columnas
    }
  }

  if(col1==filas1){
    for(int i=0; i<filas1; i++){
      for(int a=0; a<col1;a++){
      if(num[i][a]==num[a][i]){
        band='V';
      }
    }
  }
  }

  if(band=='V'){
    cout<<"\nEs simetrica\n ";
  }else{
    cout<<"\nNo es simetrica\n";
  }

  /*8. calcular el producto de dos matrices 3x3*/
  int prot=0, pro1=1, pro2=1;
   for(int i=0; i<3; i++){
    for(int a=0; a<3;a++){
      pro1*= mtresxtres[i][a];
      pro2*= mnumero[i][a];

    }
  } 
  prot=pro1*pro2; 
  cout<<"\nProducto total: "<<prot<<endl;

  return 0;


}