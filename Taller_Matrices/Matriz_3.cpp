//---------Imprime en culebra la matriz------
/*-----------------Imprime en culebra la matriz-----------*/
#include<iostream>
#include<conio.h>
using namespace std;
int main ( ) {
	int matriz[4][4] ;
	
	for (int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {		
			cout<<"Digite el numero de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
								
		}
	}
	
	for (int i=0;i<4;i++) {
		
		if (i % 2!=0 ) {
			for (int j=3;j>=0;j--) {
				cout<<matriz[i][j]<<" ";
		}
	}
		else {
			for (int j=0;j<4;j++) {
				cout<<matriz[i][j]<<" ";
					
		}
	}
		cout<<endl;
	}
}
