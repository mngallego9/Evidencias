#include<iostream>
using namespace std;
main()
{
	setlocale(LC_CTYPE,"Spanish");
	int i,numero;
	cout<<"Ingrese el numero: ";
	cin>>numero;
	if(numero%2==0)
	{
	
		for(i=1;i<=10;i++)
		{
		cout<<i<<"\n";
		cout<<endl;
		}
	}
	else
	{
		for(i=10;i>=1;i--)
		{
			cout<<i<<"\n";
			cout<<endl;
		}
	}
}
