//Matriz de 4 * 4 recorrida en diagonales
#include<iostream>
using namespace std;
int main () {
	int matriz[4][4] /* ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}*/;
	cout<<endl;
	
	cout<<"---Programa que imprime una la matriz en cadena de diagonales---"<<endl;
	cout<<endl;
	for (int i=0;i<4;i++) {
		for (int j=0;j<4;j++) {
			cout<<"Ingrese un número de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}

	cout<<endl;
	cout<<"-----Matriz Normal-----"<<endl;
	for (int i=0;i<4;i++) {
		for (int j=0;j<4;j++) {
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
	int x=3;
	for (int i=0;i<4;i++) {
		cout<<matriz[x][i]<<" ";
		x=x-1;		
	}
	for (int i=3;i<4;i++) {
		for (int j=1;j<2;j++) {
			cout<<matriz[j][i]<<" ";
			cout<<matriz[2][2]<<" ";
			cout<<matriz[i][j]<<" ";		
		}
	}	
	for (int i=3;i<4;i++) {
		for (int j=2;j<3;j++) {		
			cout<<matriz[i][j]<<" ";
			cout<<matriz[j][i]<<" ";
			cout<<matriz[i][i]<<" "; 
		}
	}
}

