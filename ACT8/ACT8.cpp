#include <iostream>
using namespace std;

struct Tpila{

    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

float pop(Pila *s){
	float e=0;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
        return e;
    }
    return e;
}

 float Ultimo(Pila *s){
 	if (empty(s)){
 		return -1;
	 }
	 float a=0;
	 while(!empty(s)){
	 	a=pop(s);
	 }
	 return a;
 }

 float Ultimo2(Pila s){
 	float aux=0;
 	    while(!empty(&s)){
		aux=pop(&s);
		}
		
	return aux; 	
 }
 
int main (){
	
	Pila unaPila;
	    initialize(&unaPila);
	    push(&unaPila, 9.7);
    	push(&unaPila, 6.55);
    	push(&unaPila, 3.1416);
   		push(&unaPila, 27);
    		cout<<"Parte uno"<<endl;

    		float u=Ultimo(&unaPila);
			cout<<"El ultimo es: "<<u<<endl<<endl;
			
		initialize(&unaPila);
	    push(&unaPila, 9.7);
   		push(&unaPila, 6.55);
   		push(&unaPila, 3.1416);
   		push(&unaPila, 27);
			cout<<"Parte dos"<<endl;
			float u2=Ultimo2(unaPila);
			if(!empty(&unaPila)){
				cout<<"El ultimo es: "<<u2<<endl;
			}
			else{
			cout<<"La pila esta vacia"<<endl;
		}
			if (!empty(&unaPila))
			cout<<"La pila no esta vacia";		
    	
	return 0;
}   
