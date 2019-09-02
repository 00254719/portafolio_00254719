// Gerson Javier Quintanilla Sanchez
//00254719
//Seccion #02
// Si da error en algo comenten los for de promedio1 ... etc etc.


#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct Paises{
	char nombre[20];
	char capital[20];
	int habitantes=0;
	float promedioEdad=0;
};

	int main(){
		
		cout<<"\n ASIA "<<endl;
		
		Paises Uno [5];
		
		for(int i=0;i<5;i++){
			
			cout<<"\n Pais numero "<<i+1<<"  ";
			 fflush(stdin);
			cout<<"\n Nombre: ";
			cin.getline(Uno[i].nombre,20);
			
			cout<<" Capital: ";
			cin.getline(Uno[i].capital,20);
			
			cout<<" Numero de habitantes: ";
			cin>>Uno[i].habitantes;
			
			cout<<" Promedio de Edad: ";
			cin>>Uno[i].promedioEdad;
			}
	
		int total1=0;
				for(int i=0;i<5;i++){
			
				total1+= Uno[i].habitantes;
			}
		
		float promedio1=0;
			for(int i=0;i<5;i++){
				
				promedio1+= Uno[i].promedioEdad;
			}
	
	
		cout<<"\n AMERICA "<<endl;
		
		Paises Dos [5];
		
		for(int i=0;i<5;i++){
			
			cout<<"\n Pais numero "<<i+1<<"  ";
			 fflush(stdin);
			cout<<"\n Nombre: ";
			cin.getline(Dos[i].nombre,20);
			
			cout<<" Capital: ";
			cin.getline(Dos[i].capital,20);
			
			cout<<" Numero de habitantes: ";
			cin>>Dos[i].habitantes;
			
			cout<<" Promedio de Edad: ";
			cin>>Dos[i].promedioEdad;
			}

			int total2=0;
				for(int i=0;i<5;i++){
			
				total2+= Dos[i].habitantes;
			}
			
			float promedio2=0;
			for(int i=0;i<5;i++){
				
				promedio2+= Dos[i].promedioEdad;
			}
			
			cout<<"\n EUROPA"<<endl;
		
		Paises Tres [5];
		
		for(int i=0;i<5;i++){
			
			cout<<"\n Pais numero "<<i+1<<"  ";
			 fflush(stdin);
			cout<<"\n Nombre: ";
			cin.getline(Tres[i].nombre,20);
			
			cout<<" Capital: ";
			cin.getline(Tres[i].capital,20);
			
			cout<<" Numero de habitantes: ";
			cin>>Tres[i].habitantes;
			
			cout<<" Promedio de Edad: ";
			cin>>Tres[i].promedioEdad;
			}

			int total3=0;
				for(int i=0;i<5;i++){
			
				total3+= Tres[i].habitantes;
			}
			
			float promedio3=0;
			for(int i=0;i<5;i++){
				
				promedio3+= Tres[i].promedioEdad;
			}
			
			cout<<"\n AFRICA"<<endl;
		
		Paises Cuatro [5];
		
		for(int i=0;i<5;i++){
			
			cout<<"\n Pais numero "<<i+1<<"  ";
			 fflush(stdin);
			cout<<"\n Nombre: ";
			cin.getline(Cuatro[i].nombre,20);
			
			cout<<" Capital: ";
			cin.getline(Cuatro[i].capital,20);
			
			cout<<" Numero de habitantes: ";
			cin>>Cuatro[i].habitantes;
			
			cout<<" Promedio de Edad: ";
			cin>>Cuatro[i].promedioEdad;
			}

			int total4=0;
				for(int i=0;i<5;i++){
			
				total4+= Cuatro[i].habitantes;
			}
			
			float promedio4=0;
			for(int i=0;i<5;i++){
				
				promedio4+= Cuatro[i].promedioEdad;
			}
			
			cout<<"\n OCEANIA"<<endl;
		
		Paises Cinco [5];
		
		for(int i=0;i<5;i++){
			
			cout<<"\n Pais numero "<<i+1<<"   ";
			 fflush(stdin);
			cout<<"\n Nombre: ";
			cin.getline(Cinco[i].nombre,20);
			
			cout<<" Capital: ";
			cin.getline(Cinco[i].capital,20);
			
			cout<<" Numero de habitantes: ";
			cin>>Cinco[i].habitantes;
			
			cout<<" Promedio de Edad: ";
			cin>>Cinco[i].promedioEdad;
			}

			int total5=0;
				for(int i=0;i<5;i++){
			
				total5+= Cinco[i].habitantes;
			}
			float promedio5=0;
			for(int i=0;i<5;i++){
				
				promedio5+= Cinco[i].promedioEdad;
			}
			
			int opc;
			
			cout<<"PRESIONA (1) Para ver la cantidad de habitantes de ASIA"<<endl;
			cout<<"PRESIONA (2) Para ver la cantidad de habitantes de AMERICA"<<endl;
			cout<<"PRESIONA (3) Para ver la cantidad de habitantes de EUROPA"<<endl;
			cout<<"PRESIONA (4) Para ver la cantidad de habitantes de AFRICA"<<endl;
			cout<<"PRESIONA (5) Para ver la cantidad de habitantes de OCEANIA"<<endl;
			
			cout<<"Cual desea elegir: "<<endl;
			cin>>opc;

			switch(opc){
				
				case 1:
					cout<<" La cantidad de habitantes de ASIA son: "<<total1<<endl;
					break;
					
				case 2:
					cout<<"La cantidad de habitantes de AMERICA son: "<<total2<<endl;
					break;
					
				case 3:
					cout<<"La cantidad de habitates de EUROPA son: "<<total3<<endl;
					break;
					
				case 4:
					cout<<"La cantidad de habitantes de AFRICA son: "<<total4<<endl;
					break;
					
				case 5:
					cout<<"La cantidad de habitantes de OCEANIA son: "<<total5<<endl;
					break;
							
			}
			 
			 float edadMundial=0;
			 
			 edadMundial= (promedio1+promedio2+promedio3+promedio4+promedio5)/25;
			 cout<<"La edad Mundial es: "<<edadMundial;
			 
			 cout<<"PROGRAMA FINALIZADO";
			 
			return 0;
		}
