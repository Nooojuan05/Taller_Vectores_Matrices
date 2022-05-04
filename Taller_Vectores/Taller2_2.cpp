/*------------Ejercicio 2--------------------
Leer dos arreglos unidimensionalesde igual tamaño, ambos de tipo real. 
Operaciones y llenarlos en el arreglo 3
*/

#include<iostream>
using namespace std;
int main () {
	int uno[] = {3,6,8,10};
	int sizeuno,sizedos;
	int dos[] = {4,6,11,12};
	int tres[4];
	sizeuno = sizeof(uno)/sizeof(uno[0]);
	sizedos = sizeof(dos)/sizeof(dos[0]);
	
	for(int i=0; i<4; i++) {
		
		tres[i] = uno[i] * dos[sizedos - i - 1] ;
				
	}
	for (int i=0;i<4;i++) {
		
		cout<<"Vector 1: "<<uno[i]<<endl ;
	}
	for (int i=0;i<4;i++) {
		
		cout<<"Vector 2: "<<dos[i]<<endl ;
	}
	for (int i=0;i<4;i++) {
		
		cout<<"Vector 3: "<<tres[i]<<endl ;
	}
}



