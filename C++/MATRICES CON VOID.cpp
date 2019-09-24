#include<iostream>
using namespace std;
void vector();
void vector2();
void matriz1();
void matriz2();
void vector3();
void vector4();
void matriz8();
void matriz3();
void vector5();
void vector6();
void vector7();
void vector8();
void salida();

void salida()
{
	cout<<"No hay más opciones";
}
void vector()
{
	String vector[5]={"Juan","Pedro","Maria","Jose","Petronio","Ancelmo"};
	for (int i=0;i<=5;i++)
	{
		cout<<vector[i]<<endl;
	}
}
void vector2()
{
	String vector2[3];
	vector2[0]="Felipe";
	vector2[2]="Josefa";
	vector2[1]="Martin";
	for (int i=0;i<=2;i++)
	{
		cout<<vector2[i]<<endl;
	}
	
}
void matriz1()
{
	String matriz1[4][3]={{"Pedro","Juan","Jose"},{"Ana","Rocio","Luisa"},{"Victor","Pedro","Mila"},{"Juliana","Adriana","Rossana"}};
	for (int i=0;i<=3;i++)
		for (int j=0;i<=2;j++)
		{
			cout<<matriz[i][j]<<endl;
		}
}
void matriz2()
{
	String matriz2;
	matriz2[0][0]="Pablo";
	matriz2[1][0]="Argemio";
	matriz2[0][1]="Vilma";
	matriz2[1][2]="Ana";
	matriz2[2][2]="Ismael";
	for (int i=0;i<=3;i++)
		for (int j=0;j<=2;j++)
		{
			cout<<matriz2[i][j]<<endl;
		}	
	
}
void vector3()
{
	char vector3[]={'P','R','O','G','R','A','M','A','A','N','D','O'};
	for (int i=0;i<=10;i++)
		{
			cout<<vector3[i];
		}
}
void vector4()
{
	char vector4[3];
	vector4[1]='S';
	vector4[2]='Q';
	vector4[0]='L';
	for (int i=0;i<=2;i++)
	{
		cout<<vector4[i]<<endl;
	}
}
void matriz8()
{
	char matriz8[4][3]={{'S','Q','L'},{'M','A','R'},{'S','O','L'},{'P','A','N'}};
	for (int i=0;i<=3;i++)
		for (int j=0;j<=2;j++)
		{
			cout<<matriz8[i][j]<<endl;
		}
}
void matriz3()
{
	char matriz3[2][3];
	matriz3[0][3]="P";
	matriz3[1][1]="L";
	matriz3[2][2]="O";
	for (int i=0;i<=3;i++)
		for(int j=0;j<=2;j++)
		{
			cout<<matriz3[i][j]<<endl;
			
		}
	
}
void vector5()
{
	double vector5[3]={5.8,6.9,3.5};
	for (int i=0;i<=2;i++)
	{
		cout<<vector5[i]<<"\t";
	}
}
void vector6()
{
	double vector6[3];
	vector6[0]=5.3;
	vector6[1]=3.9;
	vector6[2]=8.1;
	for (int i=0;i<=2;i++)
	{
		cout<<vector6[i]<<"\t";
	}
	
}
void vector7()
{
	int vector7[4]={1,3,0,2000};
	for (int i=0;i<=3;i++)
	{
		cout<<vector7[i]<<"\t";
	}
}
void vector8()
{
	int vector8;
	vector8[0]=3;
	vector8[2]=880;
	vector8[1]=20;
	vector8[3]=1800000;
	for (int i=0;i<=3;i++)
	{
		cout<<vector8[i]<<"\t";
	}
	
}
main()
{
	int opcion;
	setlocale(LC_CTYPE,"Spanish");
	cout<<"Trabajando con switch-case(caso) \n";
	cout<<"Generamos el menú \n";
	cout<<"1) Para mostrar el vector principal \n";
	cout<<"2) Para mostrar el siguiente vector  \n";
	cout<<"3) Para mostrar la primera matriz \n";
	cout<<"4) Para mostrar la siguiente matriz \n";
	cout<<"5) Para mostrar el vector PROGRAMANDO \n";
	cout<<"6) Para mostrar el vector SQL \n";
	cout<<"7) Para mostrar la matriz SQL,MAR,SOL,PAN \n";
	cout<<"8) Para mostrar la matriz PLO \n";
	cout<<"9) Para mostrar vector con numeros \n";
	cout<<"10) Para mostrar vector con numeros \n";
	cout<<"11) Para mostrar vector con numeros \n";
	cout<<"12) Para mostrar vector con numeros \n";
	cout<<"Ingres el número de su elección: ";
	cin<<opcion;
	switch(opcion)
	{
		case 1:
			vector();
			break;
		case 2:
			vector2();
			break;
		case 3:
			matriz1();
			break;
		case 4:
			matriz2();
			break;
		case 5:
			vector3();
			break;
		case 6:
			vector4();
			break;
		case 7:
			matriz8();
			break;
		case 8:
			matriz3();
			break;
		case 9:
			vector5();
			break;
		case 10:
			vector6();
			break;
		case 11:
			vector7();
			break;
		case 12:
			vector8();
			break;
		default:
			salida();
	}
}
