/*-----------Ejercicio 3-------------
Llenar un arreglo con los númerosprimos entre 1 y 50. Mostrarlos en la pantalla.
*/
#include<iostream>
using namespace std;
int main () {
	int primos[50];
	int x,s,n,i,cont,j;
	/*cout<<"Intoduce el numnero: ";
	cin>>n;*/
	j=1;
	x=0;
	while (j<=50) {	
	i=1;
	cont=0;	
	while (i<=j) {
		
		s = j % i;
		if (s==0) {
			cont=cont+1;
		}
		i=i+1;
	}	
	if (cont==2) {
	//	cout<<j<<" Primo"<<endl;
		primos[x] = j;
		x=x+1;
			
	}		
/*	else {
		cout<<j<<" No es primo"<<endl;
	}*/
	j=j+1;
	}	
	for(int y=0;y<x;y++) {
		cout<<primos[y]<<endl;
	}
return 0;	
}

