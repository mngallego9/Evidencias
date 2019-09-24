#include<iostream>
using namespace std;
main()
{	
	int contador;
	contador=0;
	do
	{
		int n1,n2,n3;
		cout<<"Programa para ingresar 3 numeros e imprimirlos en orden \n";
		cout<<"Ingrese el primer numero \n";
		cin>>n1;
		cout<<"Ingrese el segundo numero \n";
		cin>>n2;
		cout<<"Ingrese el tercer numero \n";
		cin>>n3;
		if((n1>n2)&&(n2>n3))
		{
			cout<<"El numero mayor es: "<<n1;
			cout<<"\nEl numero medio es: "<<n2;
			cout<<"\nEl numero menor es: "<<n3;
			
		}
		else if ((n2>n1)&&(n2>n3))
		{
			cout<<"El numero mayor es: "<<n2;
			cout<<"\nEl numero medio es: "<<n1;
			cout<<"\nEl numero menor es: "<<n3;
		}
		else if ((n3>n2)&&(n3>n1))
		{
			cout<<"El numero mayor es: "<<n3;
			cout<<"\nEl numero medio es: "<<n2;
			cout<<"\nEl numero menor es: "<<n1;
		}
			cout<<endl;
			contador=contador+1;
			cout<<"Usted va en: "<<contador;
	
	}
	while(contador<=3);
}



