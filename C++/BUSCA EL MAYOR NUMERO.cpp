#include<iostream>
using namespace std;
main()
{
	int comico[100], numero,mayor=0;
	cout<<"Ingrese la cantidad de elementos del vector: ";
	cin>>numero;
	for (int i=0;i<numero;i++)
	{
		cout<<i+1<<". Ingrese un numero: ";
		cin>>comico[i];
		if (comico[i]>mayor)
		{
			mayor=comico[i];
		}
	}
	cout<<"El numero menor de los ingresados es: "<<mayor;
}
