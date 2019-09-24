#include<iostream>
using namespace std;
main()
{
	int numero,pares,sumatoria,numero1,numero2,suma,base,altura,area,contador,impares;
	cout<<"Impresion de numeros pares de 1 hasta 10 \n\n";
	cout<<"Ingrese un numero: ";
	cin>>numero;
	sumatoria=0;
	if ((numero>=10)&&(numero<=20))
	{
		cout<<"Los numeros pares son: \n";
		for(pares=1;pares<11;pares++)
		{
			pares=pares+1;
			cout<<pares<<endl;
			sumatoria=sumatoria+pares;
		}
		cout<<"La sumatoria de los numeros pares de 1 a 10 es: "<<sumatoria;
	}
	else if(numero==5)
	{
		cout<<"Vamos a sumar";
		cout<<"\n\nEs hora de pedir datos \n\n";
		cout<<"Ingrese el primer numero de la suma: ";
		cin>>numero1;
		cout<<"Ingrese el segundo numero de la suma: ";
		cin>>numero2;
		suma=numero1+numero2;
		cout<<"El resultado de la suma es: "<<suma<<endl;
		while((numero1==7)||(numero2==7))
		{
			cout<<"Los numeros impares son "<<endl;
			for(impares=11;impares<20;impares++)
			{
				cout<<impares<<endl;
				impares=impares+1;
			}
				numero1=numero1+1;
				numero2=numero2+1;
		}
	}
	else
	{
		while((numero!=5)&&(numero<10)&&(numero>20))
		{
			cout<<"Vamos a calcular el area del triangulo \n\n";
			cout<<"Ingrese la base \n";
			cin>>base;
			cout<<"Ingrese altura \n\n";
			cin>>altura;
			area=(base*altura)/2;
			cout<<"El area del triangulo es: "<<area<<endl;
		}
		numero=5;
	}
}
