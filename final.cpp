#include <iostream>
using namespace std;
int main()
{
float vectorprin[10];
	int i;
	float media_arr=0;
	int suma=0;
	int mayor=0;
	
	cout<<"introduzca los 10  valores del arreglo"<<endl;
	for(i=1;i<11;i++)
	{
		cout<<i<<"valor:"<<endl;
		cin>>vectorprin[i];

	}
	cout<<"presione 2 para ver el arreglo al reves"<<endl;
	cout<<"presione 3 para ver la media del arreglo"<<endl;
	cout<<"presione 4 para ver el numero mayor del arreglo"<<endl;
	int opcion=0;
	cin>>opcion;
	
	switch(opcion)
{
		case 2 :
cout<<"los 10 numeros fueron:"<<endl;
	for(i=10;i>0;i--)
	{
		cout<<vectorprin[i]<<endl;
		
	}
	return 0;
	 break;
		case 3: 
		
	for(i=1;i<11;i++)
	{
	suma=suma+vectorprin[i];
	media_arr=suma/10;	
	}
	
	cout<<"la media es: "<<media_arr<<endl;
	 	for(i=1;i<11;i++)
	 	{
	 		if (vectorprin[i]> media_arr)
	 		{
	 			cout<<vectorprin[i]<<endl;
			 }
		 }
	break;
		case 4:
			for(i=1;i<11;i++)
	{
		cout<<i<<"valor:"<<endl;
		cin>>vectorprin[i];
if (vectorprin[i]>mayor)
{
	mayor=vectorprin[i];
	
}
}
cout<<"el numero mayor es "<<mayor<<endl;
	break;
		default:
		break;
	}
	return 0;
	
}



