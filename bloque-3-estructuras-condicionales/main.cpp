#include <iostream>
#include<math.h>
using namespace std;

int main() {
  /*
  int numero;
  cout<<"Digite un numero entre 1-5: ";
  cin>>numero;

  switch(numero){
    case 1: cout<<"Numero 1";break;
    case 2: cout<<"Numero 2";break;
    case 3: cout<<"Numero 3";break;
    case 4: cout<<"Numero 4";break;
    case 5: cout<<"Numero 5";break;
    default: cout<<"No esta en el rango"; break;

  }*/

  /*1. Determinar el mayor de dos numeros*/
  int n1,n2;
  cout<<"Ingrese 2 numeros: ";
  cin>>n1>>n2;
  if(n1>n2){
    cout<<"El numero "<<n1<<" es mayor."<<endl;
  }else{
    cout<<"El numero "<<n2<<" es mayor."<<endl;    
  }

  /*2. Determinar el mayor de tres numeros*/
  /*3.Par o impar*/
  int n;
  cout<<"\nNumero: ";cin>>n;
  if(n%2==0){
    cout<<"Par";
  }else{
    cout<<"Impar";
  }

  /*4. positivo o negativo*/
  int num;
  cout<<"\nNumero: ";cin>>num;
  if(num<0){
    cout<<"negativo";
  }else{
    cout<<"positivo";
  }  

  /*5.Leer una letra y decir si es vocal minuscula */
  char letra;
  cout<<"\nIngrese letra: ";cin>>letra;
  switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':cout<<"Es una vocal minuscula"; break;
    default:cout<<"No es vocal minuscula";break;
  }
    /*6.Leer una letra y decir si es vocal minuscula, mayuscula o si no es vocal */

  /*7.pedir edad, y decir si esta entre 18-25
  */ 
  int edad;
  cout<<"\nedad: ";cin>>edad;
  if(edad>=18 && edad <=25){
    cout<<"Entre el rango"<<endl;
  }else{
    cout<<"No está"<<endl;
  }

  /*8. Leer 3 numeros, luego leer otro y ver si coincide con alguno de los otros 3*/
  int nu1, nu2,nu3, nu;
  cout<<"Ingrese 3 numeros: ";
  cin>>nu1>>nu2>>nu3;
  cout<<"Ingrese otro numero: ";
  cin>>nu;
  if(nu1==nu ||nu2==nu||nu3==nu){
    cout<<"existe"<<endl;
  }else {
    cout<<"No existe"<<endl;
  }

  /*9.cambiar un numero entero a romanos*/
  int entero;
  cout<<"Ingrese Numero: ";cin>>entero;
  //nuero=2152 ->2000+100+50+2
  int unid = entero%10;//und= 2
  entero/=10;//entero= 215
  int decenas= entero%10; entero/=10;//decena= 5; entero=21
  int centenas= entero%10; entero/=10;//centena=1; entero=2
  int millar= entero%10; entero/=10;//millar=2; entero=0
  switch(millar){
    case 1:cout<<"M";break;    
    case 2:cout<<"MM";break;;
    case 3:cout<<"MMM";break;;
  }
  switch(centenas){
    case 1: cout<<"C";break;
    case 2: cout<<"CC";break;
    case 3: cout<<"CCC";break;
    case 4: cout<<"CD";break;
    case 5: cout<<"D";break;
    case 6: cout<<"DC";break;
    case 7: cout<<"DCC";break;
    case 8: cout<<"DCCC";break;
    case 9: cout<<"CM";break;
  }

  switch(decenas){
    case 1: cout<<"X";break;
    case 2: cout<<"XX";break;
    case 3: cout<<"XXX";break;
    case 4: cout<<"XL";break;
    case 5: cout<<"L";break;
    case 6: cout<<"LX";break;
    case 7: cout<<"LXX";break;
    case 8: cout<<"LXXX";break;
    case 9: cout<<"XC";break;
  }
  
  switch(unid){
     case 1: cout<<"I";break;
    case 2: cout<<"II";break;
    case 3: cout<<"III";break;
    case 4: cout<<"IV";break;
    case 5: cout<<"V";break;
    case 6: cout<<"VI";break;
    case 7: cout<<"VII";break;
    case 8: cout<<"VIII";break;
    case 9: cout<<"IX";break;
  }

  /*10. mostrar el mes que corresponde si el usuario Ingresa un numero entre 1-12*/
  int mes;
  cout<<"\nIngrese un numero del 1-12: "; cin>>mes;
  switch(mes){
    case 1: cout<<"Enero";break;
    case 2: cout<<"Febrero";break;
    case 3: cout<<"Marzo";break;
    case 4: cout<<"Abril";break;
    case 5: cout<<"Mayo";break;
    case 6: cout<<"Junio";break;
    case 7: cout<<"Julio";break;
    case 8: cout<<"Agosto";break;
    case 9: cout<<"Septiembre";break;
    case 10: cout<<"Octubre";break;
    case 11: cout<<"Noviembre";break;
    case 12: cout<<"Diciembre";break;
  }

  /*11.simular un cajero, con saldo inicial de 1000 dolares*/
  int saldoIni=1000, op;
  float extra, saldo=0,retiro;
  cout<<"\n\tBienvenido al cajero"<<endl;//\t deja espacio, como tab
  cout<<"1. Ingresar Dinero";
  cout<<"\n2.Retirar.";
  cout<<"\n3.Salir.";
  cout<<"\nopcion: ";
  cin>>op;
  switch(op){
    case 1: cout<<"Cantidad de dinero: ";cin>> extra;
    saldo=saldoIni+extra;
    cout<<"Dinero total: "<<saldo;break;

    case 2:cout<<"Cantidad a retirar: ";cin>>retiro;
    if(retiro>saldoIni){
      cout<<"No tiene suficiente";
    }else{
      saldo=saldoIni-retiro;
      cout<<"Dinero total: "<<saldo;
    }
    case 3:break;
  }
  /*12.hacer otro menu */
	int opc,numero,cubo;
	
	cout<<"\tMENU"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"\nDigite un numero: "; cin>>numero;
			cubo = pow(numero,3); //elevamos el numero al cubo
			cout<<"El cubo del numero es: "<<cubo;break;
		case 2: 
			cout<<"\nDigite un numero: "; cin>>numero;
			
			if(numero%2==0){
				cout<<"El numero es par";
			}
			else{
				cout<<"El numero es impar";
			}
			break;
		case 3: break;
	}


  return  0;
}