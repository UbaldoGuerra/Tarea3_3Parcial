#include <iostream>
#include <math.h>

/*procedimiento para cada una de las operaciones:

Convertir kilometros a metros.
Convertir metros a pulgadas. */ 

using namespace std;

//Funciones
int menu(){
	int opcion; 
	
	system ("cls");
	
	cout<<"*************************************\n";
	cout<<"*                MENU               *\n";
	cout<<"*  1. Convertir kilometros a metros *\n";
	cout<<"*  2. Convertir metros a pulgadas   *\n";
	cout<<"*  3. Salir                         *\n";
	cout<<"*************************************\n";
	cout<<"\n";
	cout<<" Seleccione la opcion: ";
	cin>>opcion;
	
	return opcion;
}


//Procedimientos
void opcion1(){
	system ("cls");
	
	cout<<"*************************************\n";
	cout<<"*  1. Convertir kilometros a metros *\n";
	cout<<"*************************************\n";	
	cout<<"\n";
	double kilometros, metros;
	
	cout<<"Cuantos kilometros desea convertir: ";
	cin>>kilometros;
	
	metros=kilometros*1000;
	cout<<"\n";
	cout<<kilometros<<" Kilometros son: "<<metros<<" Metros"<<endl;
	cout<<"\n";
	system ("pause");
}

void opcion2(){
	system ("cls");
	double pulgadas, metros;
	
	cout<<"*************************************\n";
	cout<<"*  2. Convertir metros a pulgadas   *\n";
	cout<<"*************************************\n";	
	cout<<"\n";
	cout<<"Cuantos metros desea convertir: ";
	cin>>metros;
	
	pulgadas=metros*39.3701;
	cout<<"\n";
	cout<<metros<<" Metros son: "<<pulgadas<<" Pulgadas"<<endl;
	cout<<"\n";
	system ("pause");
}

int main(int argc, char** argv) {
	int opt; // = menu();
		//cout<<opt<<endl;
	
	while (opt!=3){
		opt = menu();
		
		switch(opt){
			
			case 1: 
				opcion1();
				break;
			case 2: 
				opcion2();
				break;
			case 3:  

				break;

			default: 
				cout<<"Opcion no valida."<<endl;
				cout<<"\n";
				system ("pause");
		}
		
	}
	
	return 0;
}
