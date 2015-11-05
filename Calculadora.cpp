#include <iostream>
#include <math.h>
using namespace std;
double Sumar (double x , double y){
return x + y;
}
double Resta (double x , double y){

return x-y;

}
double Multiplicacion (double x , double y){

return x*y;

}
double Division (double x , double y){

return x/y;

}
 
int main  () {
	double valor1;
	double valor2;
	
	cout<< "Calculadora";
	cout<< "\n";
	cout<< "Introduzca Valor 1: ";
	
	cin >> valor1;
	cout<< "Introduzca Valor 2: ";
	
	cin >> valor2;
		int operador;
	cout<<"\n";
	cout<<"1 Suma  ";
	cout<<"\n";
	cout<<"2 Resta ";
	cout<<"\n";
	cout<<"3 Multiplicar";
	cout<<"\n";
	cout<<"4 Dividir ";
	cout<<"\n";
	cout<<"5 Salir ";
	cout<<"\n";
	
cin >> operador;
	switch (operador){
			
	
	case 1:
	
	cout<< "Resultado:"<<Sumar (valor1,valor2)<<endl;
	
break;	
			
			case 2:
	
	cout<< "Resultado:"<<Resta (valor1,valor2)<<endl;
	
break;	
			case 3:
	
	cout<< "Resultado:"<<Multiplicacion (valor1,valor2)<<endl;
	
break;	
			case 4:
	
	cout<< "Resultado:"<<Division (valor1,valor2)<<endl;
	
break;	
			
			
}}