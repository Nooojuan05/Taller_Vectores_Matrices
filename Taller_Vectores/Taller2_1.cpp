/* ---------Ejercicio 1--------
Formar un vector de números enteros del que no se sabe el número de elementos.
Calcular  el  promedio  de  los  elementosy  formar  dos  nuevos  arreglos,  
uno  con  los elementos menores o iguales al promedio y otro con los superiores. 
Imprimir los dos nuevos arreglos.
*/
#include<iostream>
using namespace std;
int main () {
	int numeros[]= {3,15,32,29,33,41,50,67,70};
	int size ;
	float promedio;
	size = sizeof(numeros)/sizeof(numeros[0]);
	for (int i=0;i<size;i++) {
		
		numeros[i];
		promedio=promedio+numeros[i] ;
	}
	
	promedio=promedio/9;
	cout<<"Promedio: "<<promedio<<endl;
	
	for (int i=0;i<size;i++) {
		numeros[i];
		if (numeros[i]>=promedio) {
			
			cout<<"numeros mayores: "<<numeros[i]<<endl;
		}
		else {
			cout<<"numeros menores: "<<numeros[i]<<endl;
			
		}
	}		
}


