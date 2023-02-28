#include <iostream>
//Para que el ejecutable no se cierre #include <conio.h>
#include <stdlib.h>//sirve como el conio.h.para general el numero aleatorio
#include<math.h>
#include <time.h>//para general el numero aleatorio

using namespace std;

int main() {
  //getch().->para que el archivo ejecutable no se cierre amenos que le demos a una tecla
  //system("pause");->para que el archivo ejecutable no se cierre amenos que le demos a una tecla
  
  /*Sentencia while
  es como si primero pensara luego actuara. se debe inicializar antes del bucle la iteracion.

  Sentencia do while
   es como si primero actuara luego pensara. lo que quiere decir que siempre se ejecutara por lo menos 1 vez.se debe inicializar antes del bucle la iteracion
   
   Sentencia for 
   permite inicializar el iterador dentro del bucle */

   /*1. mostrar la tabla de multiplicar de un numero entre 1 y 10*/
   int numero;
   do{
     cout<<"Numero: ";cin>>numero;

   }while(numero<1 || numero>10);

   for(int i=1; i<=20; i++){
     cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
   }

   /*2.leer la entrada de numeros hasta que se ingrese el 0, cuando llegue a 0 mostrar  cuantos numeros mayores a 0 se ingresaron*/
   int num, contador;
   do{
     cout<<"\nNumero: ";cin>>num;
     if(num>0){
       contador++;
     }

   }while(num!=0);

   cout<<"\nNumeros mayores que 0: "<<contador<<endl;

   /*3.Calcular la suma de los cuadrados de los primeros 10 numeros enteros mayores a 0*/
   int suma=0, cuadrado;
   for(int i=1; i<=10;i++){
     cuadrado=i*i;
     suma+=cuadrado;     
   }
   cout<<"\nResultado: "<<suma<<endl;

   /*4. leer 6 temperaturas y calcular la media, la mas alta y la mas baja*/
   float tem, tmedia, tmax=0, tmin=999, sum;
   for(int i=0; i<24;i+=4){
    cout<<"\nDigite la temperatura a las "<<i<<": ";
		cin>>tem;
    sum+=tem;
    if(tem>tmax){
       tmax=tem;
    }
    if(tem<tmin){
       tmin=tem;
    } 
   }

   tmedia=sum/6;
	cout<<"\nLa temperatura media del dia es: "<<tmedia<<endl;
	cout<<"La temperatura mas alta es: "<<tmax<<endl;
	cout<<"La temperatura mas baja es: "<<tmin<<endl;	
	

  /*5. leer numeross enteros hasta que se ingrese un numero entre [20-30] o el 0, devuelve la suma d los valores mayorespositivos ingresados 
  */

  int nume,sumar=0;

  do{
    cout<<"Digite un numero: ";cin>>nume;
    if(nume>0){
      sumar+=nume;
    }

  }while((nume<20 || nume>30) && nume!=0);

  cout<<"\nSumatoria: "<<sumar<<endl;

  /*6. calcular x^y, x y y enteros positivos(sin usar pow)*/
  int x,y,res=1 ;
  cout<<"\nBase: ";cin>>x;
  cout<<"Exponente: ";cin>>y;

  if(y==0){
    cout<<"\nResultado: 1"<<endl;
  }else if(y==1){
    cout<<"\nResultado: "<<x<<endl;
  }else{
    for(int i=1; i<=y;i++ ){
      res*=x;

    }
    cout<<"\n Resultado: "<<res<<endl;

  }

  /*7.calcular 1+2+3+4...+n*/
  int cant, sumatoria=0;
  cout<<"Cuantos: ";cin>>cant;
  for(int i=1;i<=cant;i++){
    sumatoria+=i;
  }

  cout<<"Sumatoria: "<<sumatoria<<endl;

  /*8. calcular 1+3+5...+2n-1*/
  int cantidad, sumat=0;
  cout<<"Cuantos: ";cin>>cantidad;
  for(int i=1;i<=cantidad;i++){
    sumat+=(2*i-1);
  }

  cout<<"Sumatoria: "<<sumat<<endl;

/*9.calcular el factorial*/
int canti, fac=1;
  cout<<"Cuantos: ";cin>>canti;
  for(int i=1;i<=canti;i++){
    fac*=i;
  }

  cout<<"factorial: "<<fac<<endl;


/*10. calcular 1!+2!+3!...+n!*/
int cantid, sumfact=0, fact=1;
  cout<<"Cuantos suma fac: ";cin>>cantid;
  for(int i=1;i<=cantid;i++){
    fact*=i;
    sumfact+=fact;
  }

  cout<<"factorial: "<<sumfact<<endl;

/*11. calular 2^1+2^2..+2^n*/
int n, su=0, potencia=0;
  cout<<"Cuantos 2^n: ";cin>>n;
  for(int i=1;i<=n;i++){
    potencia= pow(2,i);
    su+=potencia;
  }

  cout<<"R: "<<su<<endl;

/*12. calcular 1-2+3-4+5-6..n*/
int nu,re;
cout<<"Cuantos: ";cin>>nu;
for(int i=1;i<=nu;i++){
  if(i%2==0){
    re-=i;
  }else{
    re+=i;
  }
}

cout<<"Re/: "<<re<<endl;

/* 13.serie de fibonacci*/
int numer, z=0, m=1, s=1;
cout<<"Cuantos fibonacci: ";cin>>numer;
cout<<"1 ";
for(int i=1;i<numer;i++){
 s=z+m;
 cout<<s<<" ";
 z=m;
 m=s;
}
cout<<"\n";

/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.*/

int examen1,examen2,examen3;
int aprobaron_todos_examenes=0,aprobaron_almenos_uno=0,aprobaron_ultimo=0; 
/*
for(int i=1;i<=5;i++){
		cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
		cout<<i<<". Digite la nota del segundo examen: "; cin>>examen2;
		cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
		cout<<"\n";
		
		//examinando la opcion a
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobaron_todos_examenes++;
		}
		
		//examinando la opcion b
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobaron_almenos_uno++;
		}
		
		//examinando la opcion c
		if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
			aprobaron_ultimo++;
		}
	}

  cout<<"\na) Aprobaron todos los examenes: "<<aprobaron_todos_examenes;
	cout<<"\nb) Aprobaron almenos un examen: "<<aprobaron_almenos_uno;
	cout<<"\nc) Aprobaron unicamente el ultimo examen: "<<aprobaron_ultimo;

*/


/*15.numeor magicohaer que el usu piense en un numero del 1 al 100, el programa general un numero aleatorio , y le dice al usu si el numero que penso es mayor o menor al numero hasta que lo adivine 
mostrar cant de intentos

para numero aleatorio
variable endonde se va a almacenar=lim inferior+rand()%(lim superior+1 - lim inferior)
*/

int dato, aleatorio, intentos=0;
srand(time(NULL));//numero aleatorio
aleatorio=1+rand()%(100);//25

do{
  cout<<"digite numero: "; cin>>dato;//35
  if(dato>aleatorio){
    cout<<"\nun numero menor\n ";

  }else{
    cout<<"\nun numero mayor\n ";

  }
  intentos++;


}while(dato != aleatorio);

cout<<"\nADIVINASTE\n intentos: "<<intentos<<endl;

/*16. calcule la descomposición en factores primos de 
un número entero.*/

int number;
cout<<"digite un numero: ";cin>>number;

	cout<<"\nDescomponiendo en factores primos: ";
	for(int i=2;number>1;i++){
		while(number%i==0){
			cout<<i<<" ";
			number /= i;
		}
	}


   return 0; 
}