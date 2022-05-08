//Matriz de 3 * 3 recorrida en diagonales
#include<iostream>
using namespace std;
int main () {
	int matriz[3][3] /*= {{1,2,3},{4,5,6},{7,8,9}}*/;
	cout<<endl;
	
	cout<<"---Programa que imprime una la matriz en cadena de diagonales---"<<endl;
	cout<<endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			cout<<"Ingrese un número de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}

	cout<<endl;
	cout<<"-----Matriz Normal-----"<<endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}		
	cout<<endl;
	
	cout<<"---Matriz Con figura---"<<endl;
	cout<<matriz[0][0]<<" ";
	for (int i=0;i<1;i++) {
		for (int j=1;j<2;j++) {
			cout<<matriz[j][i]<<" ";
			cout<<matriz[i][j]<<" ";
		}
	}
	for (int i=0;i<1;i++) {
		for (int j=2;j<3;j++) {
			cout<<matriz[i][j]<<" ";
			cout<<matriz[1][1]<<" ";
			cout<<matriz[j][i]<<" ";		
		}
	}	
	for (int i=2;i<3;i++) {
		for (int j=1;j<2;j++) {
			
			cout<<matriz[i][j]<<" ";
			cout<<matriz[j][i]<<" ";
			cout<<matriz[i][i]<<" "; 
		}
	}
}
