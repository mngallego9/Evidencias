#include<iostream>
using namespace std;
main()
{
	int cedula;
	cout<<"Programa para analizar el ingreso a cine \n";
	cout<<"Bienvenido a Cinecolombia \n";
	cout<<"Para ingresar presente su cedula e ingrese el numero: ";
	cin>>cedula;
	if(cedula>=18)
	{
		cout<<"Ingrese a cine adulto \n";
	}
	else if (cedula<=0)
	{
		cout<<"No has nacido \n";
	}
	else 
	{
		cout<<"Ingrese a cine para menores \n"
	}
}

