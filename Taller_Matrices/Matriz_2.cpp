/*--------------------IPide llenar una matriz y la imprime en diagonal */
#include<iostream>
#include<conio.h>
using namespace std;
int main ( ) {
	int matriz[5][5];
	
	for (int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {		
			cout<<"Digite el numero de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
								
		}
	}
	cout<<endl;
	for(int i=0;i<5;i++) {
		
		cout<<matriz[i][i]<<endl;
		
	}	
	/*cout<<matriz[0][0]<<endl;
	cout<<matriz[1][1]<<endl;
	cout<<matriz[2][2]<<endl;
	cout<<matriz[3][3]<<endl;
	cout<<matriz[4][4]<<endl;*/
	return 0;
}
