//------------Recorre la matriz en caracol------------------------------------------------
#include<iostream>
using namespace std;
int main () {
	//-----Declarar el tamaño del array-----
	int matriz[5][5];
	int x;
	x=0;
//-----Pedir llenar una matriz----------
	for (int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {		
			x=x+1;
			matriz[i][j]=x;
								
		}
	}
//----------Imprimir la matriz----------
	for (int i=0;i<5;i++) {		
		for(int j=0;j<5;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
	cout<<endl;	
//------------Linea derecho Fila 0---------	
	
	for (int i=0;i<1;i++) {		
		for(int j=0;j<5;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}		

//Imprime la columna 4 desde 4,1 hasta 4,4
	for (int i=1;i<5;i++) {		
		for(int j=4;j<5;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
//Imprime desde la posicion 3,4 hasta 0,4	(fila)
	for (int i=4;i<5;i++) {		
		for(int j=3;j>=0;j--) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
	
//Imprime la columna 0 desde 0,3 hasta 0,1
	for (int i=3;i>=1;i--) {		
		for(int j=0;j<1;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
// Imprime la fila 1 desde 1,1 hasta 1,3
	
	for (int i=1;i<2;i++) {		
		for(int j=1;j<4;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
// Imprime la columna 3 desde 3,2 hasta 3,3
	
	for (int i=2;i<4;i++) {		
		for(int j=3;j<4;j++) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
// Imprime la fila 3 desde 	2,3 hasta 1,3
	for (int i=3;i<4;i++) {		
		for(int j=2;j>0;j--) {		
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}
// Imprime la fila 2 desde 2,1 hasta 2,2
	for (int i=2;i<3;i++) {		
		for(int j=1;j<3;j++) {		
			cout<<matriz[i][j]<<" ";
			cout<<endl;		
		}
	}
}
