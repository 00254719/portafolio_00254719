#include <iostream>

using namespace std;


int main(){
	
	int numero,resta,numReves=0;
	
	cout<<"Ingrese el numero a invertir: ";
	cin>>numero;
		while(numero>0){
		resta=numero%10;
		numero=numero/10;
		numReves=numReves*10+resta;				
	}
	cout<<"El numero al reves es: "<<numReves<<endl;
	
	return 0;
}
	

	

