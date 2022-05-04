/*-------Ejercicio 5 -------------------
Energia electrica


*/


#include<iostream>
using namespace std;
int main () {
	string nombres[5] = {"Juan","Andres","Brining","David","Mauricio"} ;
	int consumo[5] = {157,160,123,120,168} ;
	int valor[5] ;
	int dif;
	
	for(int i=0; i<5; i++) {
		cout<<"El consumo de "<<nombres[i]<<" el mes anterior fue "<<consumo[i]<<endl;		
	}
	cout<<"\n";
	for(int i=0;i<5;i++) {
		
		cout<<"Introduce los kW que consumió en el mes: ";
		cin>>valor[i];
		 
		valor[i] = valor[i] * 189 ;
		
		//cout<<valor[i]<<endl; -----------------------Para mostrar el valor total de lo que tiene que pagar--
					
	}
	cout<<"\n";
	for(int i=0;i<5;i++) {
		dif = (valor[i] / 189 )- consumo[i];
		cout<<nombres[i]<<"Consumió "<<dif<<" kW ,el valor a pagar de este mes es: "<<valor[i]<<endl;
	}
}

