#include <iostream>
#include <vector>
using namespace std;

struct TPasatiempo{
    int Revueltas;
    int FQ;
    int Queso;
    int arroz;
};
typedef struct TPasatiempo Orden;

Orden solicitarTipo(){
    Orden p;
    cout << "Revueltas: "; cin >> p.Revueltas;
    cout << "Frijos con Queso: ";   cin >> p.FQ;
    cout << "Queso: "; cin >> p.Queso;
    cout << "De arroz presione(0) o de maiz presione(1):  "; cin>> p.arroz;
    return p;
}

void mostrarPasatiempo(Orden p){
    cout << "Revueltas: " << p.Revueltas << endl;
    cout << "Frijoles con Queso: " << p.FQ << endl;
    cout << "Queso: " << p.Queso << endl;
    if(p.arroz==0){
	cout<<"Masa de: Arroz"<<endl;  	
	}
	else if(p.arroz==1)
    cout << "Masa de: Maiz"<<endl;
    cout << endl;
}

vector<Orden> lista;

void agregarPasatiempo(){
    Orden p = solicitarTipo();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarPasatiempo(lista[i]);
}

int main(){
    cout << "Bienvenido que desea ?..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Pedido\n\t2) Ver Pedido"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando Pedido..." << endl;
                agregarPasatiempo();
            break;
            case 2: cout << "Pedidos hechos..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}