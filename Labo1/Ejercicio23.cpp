#include <iostream>
using namespace std;

struct PR{
	float r, i;
};
PR num, num2;

void numerosc(){
	cout<<"Primer valor"<<endl;
	cout<<"Dijite la parte real: ";
	cin>>num.r;
	cout<<"Dijite la parte imaginaria: ";
	cin>>num.i;
	cout<<endl;
	
	cout<<endl;
	cout<<"Segundo valor"<<endl;
	cout<<"Dijite la parte real: ";
	cin>>num2.r;
	cout<<"Dijite la parte imaginaria: ";
	cin>>num2.i;
}

PR suma(PR num, PR num2){
	num.r+=num2.r;
	num.i+=num2.i;
	
	return num;
}

void resta(PR p){
	if (p.i < 0){
	cout<<endl;
	cout<<"La suma es: "<<p.r<<p.i<<"i"<<endl;
	}
	else{
	cout<<endl;
	cout<<"La suma es: "<<p.r<<"+"<<p.i<<"i"<<endl;
}
}

int main(){
	numerosc();
	PR p = suma(num, num2);
	resta(p);
	
	return 0;
}
