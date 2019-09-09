#include<iostream>
using namespace std;

int func(int n){
	
if(n==0)
	return(0);

return(n + func(n-1));
	}
	
	int func2(int n){
		
		int number=0;
		int aux=0;
		for(int i=0;i<=n;i++){
			number= i+aux;
			aux=number;
			
		}
		

		
		return(number);
	}
	
	int main (){
		
		int n;
		cout<<"Ingrese un numero: ";
		cin>>n;
		
		cout<<func(n)<<endl;
		cout<<func2(n)<<endl;
		return 0;
	
		}
