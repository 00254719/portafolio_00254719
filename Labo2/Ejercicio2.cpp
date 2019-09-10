#include<iostream>
#include<stdlib.h>
using namespace std;

float RC(float n=0, float r=0){
	float r1=((n/r)+r)/2;
	
	if (abs(r1-r)<0.001){
		return r;
	}
	else {
		RC(n, r1);
	}
}

int main(){
	int n=0;
	cout<<"Ingrese el numero: ";
	cin>>n;
	
	cout<<"La raiz cuadrada es: "<<RC(n, 1)<<endl;
	
	
}

