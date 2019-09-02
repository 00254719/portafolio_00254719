//Gerson Javier Quintanilla Sanchez 
//00254719
//Seccion 02

#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int num[100],n,prueba;
	float mediana=0,resultado=0;
	int opc;
	
	
	
	cout<<"PRESIONA (1) PARA CONTINUAR, PRESIONA (2) PARA SALIR: ";
	cin>>opc;
	
	if(opc==1){
	
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<< " . Digite los numeros: ";
		cin>> num[i];
		
	}
		if(n==1||n==0){
			cout<<"SYSTEM ERROR, IQ 300+";
		}
		else if(n%2==0){
			prueba= (n+1)/2;
			mediana=(float)(num[prueba-1]+num[prueba])/2;
			resultado=mediana;
			
			cout<<"La mediana del conjunto es: "<<resultado<<endl;
		}
		else{
			 prueba= n/2;
			cout<<"La mediana del conjunto es: "<<num[prueba];
		} 
}
	else{
      
	   cout<<"HASTA OTRA"<<endl;
}
	getch();
	return 0;
}
