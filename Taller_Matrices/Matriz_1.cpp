//Pedir el valor de las columnas y las filas de una matriz----

#include<iostream>
using namespace std;
int main () {
	int filas, columnas;
	cout<<"Ingrese el numero de las filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de las columnas: ";
	cin>>columnas;
	
	int matriz[filas][columnas];
	
	for (int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++) {
			
			cout<<"Digite el numero de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];	
		}
	}
		cout<<endl;
		for (int i=0;i<filas;i++) {		
		for(int j=0;j<columnas;j++) {
			
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}
	return 0;	
}
