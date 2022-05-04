/*--------------------Ejercicio 4-----------------------
El ususario llena el primer array el segundo se llena segun el contenido del primero asi:
Si el número es par en el segundo arreglo se asigna el cuadrado de ese número, en caso contrario el cubo del número. 
Mostrar el contenido finalde los dos vectores.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main () {
	int uno[10];
	int dos[10];
	for(int i=0; i<10; i++) {
		cout<<"Intoduce el valor de "<<i+1<<":";
		cin>>uno[i];
	}
	
	for(int i=0; i<10; i++) {
		if (uno[i] % 2 == 0) {
			dos[i]=pow(uno[i],2);
		}
		else {
			dos[i]=pow(uno[i],3);
		}
	}
	for(int i=0; i<10; i++) {
		
		cout<<dos[i]<<endl;
	}
}


