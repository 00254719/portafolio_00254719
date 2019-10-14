#include <iostream>
#include <string>
using namespace std;


struct Tlista{
    string Carnet;
    string Nombre;
    string Apellido;
    int NumT;
    string Correo;
};
typedef struct Tlista Lista;

Lista solicitarLista(){
    Lista p;
    
    //---Solicitar ISBN, Titulo y Autor---
    cout << "Ingrese su Carnet: "; cin >> p.Carnet;
    cin.ignore();//Limpiando el buffer
    cout << "Ingrese su Nombre: "; getline(cin, p.Nombre);
    cout << "Ingrese su Apellido: "; getline(cin, p.Apellido);
    cout << "Ingrese su Numero de telefono: "; cin>> p.NumT;
    cin.ignore();
    cout << "Ingrese su correo electronico: "; getline(cin, p.Correo);
    
    return p;
}

void mostrarLista(Lista p){
    cout << "Carnet: " << p.Carnet << endl;
    cout << "Nombre: " << p.Nombre << endl;
    cout << "Apellido: " << p.Apellido << endl;
    cout << "Telefono: " << p.NumT << endl;
    cout << "Correo: " << p.Correo << endl;
    
    cout << endl;
}

struct TNodo{
    Lista dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Lista p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Lista p) {
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


void agregarLista(){
    Lista p = solicitarLista();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
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
        mostrarLista(s->dato);
        s = s->sig;
    }
}

void eliminarLista(){
    string unCarnet;
    cout << "Carnet que desee eliminar: ";
    cin >> unCarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).Carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "El Carnet que desea borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Carnet borrado!" << endl;
}
void ActualizarLista(){
    string unCarnet;
    cout << "Carnet que desea actualizar: ";
    cin >> unCarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).Carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "El Carnet que desea actualizar NO existe" << endl;
        return;
    }
    cout << "Ingrese su Carnet: "; cin >> (p->dato).Carnet;
    cin.ignore();//Limpiando el buffer
    cout << "Ingrese su Nombre: "; getline(cin, (p->dato).Nombre);
    cout << "Ingrese su Apellido: "; getline(cin, (p->dato).Apellido);
    cout << "Ingrese su Numero de telefono: "; cin>> (p->dato).NumT;
    cout << "Ingrese su correo electronico: "; getline(cin, (p->dato).Correo);
}
bool buscarLista() {
    string unCarnet = 0;
    cout << "Carnet de la persona que desea buscar: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio;

    while(s != NULL && (s->dato).Carnet != unCarnet)
        s = s->sig;
    
    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Ver Personas"
            << "\n\t3) Eliminar Persona\n\t4) Actualizar Persona"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarLista();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                eliminarLista();
            break;
            case 4: cout << "Actualizando..." << endl;
               ActualizarLista();
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}