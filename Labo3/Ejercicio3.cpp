#include <iostream>
#include <string>
using namespace std;

struct Libro{
	
	string nombre[100];
	int top;
	int NP[100];
};

typedef struct Libro L;

void initialize (L *s){
	s->top= -1;
}

bool empty(L *s){
	return s->top <0;
}
void introducir(Libro *s){
    int p;
    string t = "";
    cin.ignore(100,'\n');   
    cout << "Cual es el nombre: "; getline(cin, t);
    cout << "Cuantas paginas tiene: "; cin >> p;

    push(s, t, p);

}
void push(L *s, string x, int p){
	if(s->top<99){
		(s->top)++;
		s->nombre[s->top]= x;
		s->NP[s->top]= p;
	}
}

float pop(L *s){
	
	if(s->top >=0){
		cout<<s->nombre[s->top]<<endl;
		cout<<s->NP[s->top]<<endl;
		(s->top)--;
	}
}

void l(L s){
	if(!empty(&s)){
		pop(&s);
		l(s);
	}
}

int main(){
	
	L unLibro;
		initialize(&unLibro);
	

					push(&unLibro,"La Granja de Zenon",870);
						push(&unLibro,"El Pvtazo",69);
							push(&unLibro,"El Peppazo",940);
								push(&unLibro,"Estaaa",376);
								
	l(unLibro);while(true){
        cout << "\n\t1-Meter libro" << endl;
        cout << "\n\t2-Ver la libreria" << endl;
        int x;
        cin >>x;

        if(x== 1){
            introducir(&unLibro);
        }else(x== 2){
            cout << endl << "Tus libros son: " << endl;
            l(unLibro);
        }
        cout << endl;
    return 0;
}
}
