//Gerson Javier Quintanilla Sanchez
//00254719
//Seccion #02

#include <iostream>
using namespace std;

int multi(int a, int b){
	if(b==1){
	
		return a;
	}
	else{
		int x =b-1;
		int y = multi (a,x);
		
		return a+y;
	
}
}
int main()
{
	cout << "Multiplicacion de 100*100: "<<endl;
	int r = multi(100,100); //Probar con el valor que desee.
	cout << "Resultado: " << r << endl;
	

}
