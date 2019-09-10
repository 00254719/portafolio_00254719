#include<iostream>
using namespace std;

int func(int n){
	
if(n==0)
	return(0);

return(n + func(n-1));
	}
	

	int main (){
		
		int n;
		cout<<"Ingrese un numero: ";
		cin>>n;
		cout<<"Funcion con recusrsividad:"<<endl;
		cout<<func(n)<<endl;
		int num=0;
		int aux=0;
		cout<<"Funcion con iteracion:"<<endl;
		for(int i=0;i<=n;i++){
			num= i+aux;
			aux=num;	
		}
		cout<<num<<endl;
		return 0;

}
