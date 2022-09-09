#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x,n,s,c=0,s0;
	cout<<"Ingresar cantidad de numero: ";
	cin>>n;
	while(c<n)
	{
		cout<<"Ingresar numero: ";
		cin>>x;
		s=s+x;
		c=c+1;
	}
	cout<<"La suma de los numeros es: "<<s;
	getch();
}
