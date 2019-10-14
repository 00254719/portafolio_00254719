#include <iostream>
#include <string>
using namespace std;

struct TLibro{
    int isbn;
   
};
typedef struct TLibro Libro;

Libro solicitarLibro(){
    Libro p;
    
    cout << "Numero: "; cin >> p.isbn;
    cin.ignore();
    bool continuar = true;
   
    return p;
}

void mostrarLibro(Libro p){
    cout << "Dato: " << p.isbn << endl;
}

struct TNodo{
    Libro dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Libro p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Libro p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarLibro(){
    Libro p = solicitarLibro();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarLibro(s->dato);
        s = s->sig;
    }
}

void eliminarLibro(int unISBN){
   int Numero=unISBN;
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).isbn != Numero){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << endl;  
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);  
       eliminarLibro(unISBN);
    cout<< endl;
}


int main(){

    int unISBN=0;
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver Datos"
            << "\n\t3) Eliminar Numero"
            << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        cout<<endl;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarLibro();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                 cout << "Numero que desea eliminar: ";
                    cin >> unISBN;
                eliminarLibro(unISBN);
            break;
		    case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
