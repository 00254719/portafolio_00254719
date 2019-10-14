#include <iostream>
using namespace std;
#define SIZE 10
int A[SIZE];
int frente = -1;
int atras = -1;


bool esta_vacia()
{
 if(frente == -1#include <iostream>
using namespace std;
#define SIZE 10
int A[SIZE];
int frente = -1;
int atras = -1;


bool esta_vacia()
{
 if(frente == -1 && atras == -1)
 return true;
 else
 return false;
}


void Poner ( int valor )
{
 
 if ((atras + 1)%SIZE == frente)
    cout<<"La cola esta llena \n";
 else
 {
  
  if( frente == -1)
     frente = 0;

 atras = (atras+1)%SIZE;
   A[atras] = valor;
 }
}

void quitar ( )
{
 if( esta_vacia() )
  cout<<"La cola esta vacia \n";
  
 else
 
 if( frente == atras )
  frente = atras = -1;
 else
  frente = (frente + 1)%SIZE;
}


void mostrar_cola()
{
 if(esta_vacia())
  cout<<"La cola esta vacia\n";
 else
 {
  int i;
  if( frente <= atras )
  {
   for( i=frente ; i<= atras ; i++)
   cout<<A[i]<<" ";
  }
  else
  {
   i=frente;
   while( i < SIZE)
   {
   cout<<A[i]<<" ";
   i++;
   }
   i=0;
   while( i <= atras)
   {
   cout<<A[i]<<" ";
   i++;
   }
  }
 }
}

int main()
{
 int opc, bandera=1, valor;
 while( bandera == 1)
 {
  cout<<"\n1.Poner 2.quitar 3.Mostrar Cola\n";
  cin>>opc;
  switch (opc)
  {
  case 1: cout<<"Valor Enter:\n";
          cin>>valor;
          Poner(valor);
          break;
  case 2: quitar();
          break;
  case 3: mostrar_cola();
          break;
  
  }
 }

 return 0;
} && atras == -1)
 return true;
 else
 return false;
}


void Poner ( int valor )
{
 
 if ((atras + 1)%SIZE == frente)
    cout<<"La cola esta llena \n";
 else
 {
  
  if( frente == -1)
     frente = 0;

 atras = (atras+1)%SIZE;
   A[atras] = valor;
 }
}

void quitar ( )
{
 if( esta_vacia() )
  cout<<"La cola esta vacia \n";
  
 else
 
 if( frente == atras )
  frente = atras = -1;
 else
  frente = (frente + 1)%SIZE;
}


void mostrar_cola()
{
 if(esta_vacia())
  cout<<"La cola esta vacia\n";
 else
 {
  int i;
  if( frente <= atras )
  {
   for( i=frente ; i<= atras ; i++)
   cout<<A[i]<<" ";
  }
  else
  {
   i=frente;
   while( i < SIZE)
   {
   cout<<A[i]<<" ";
   i++;
   }
   i=0;
   while( i <= atras)
   {
   cout<<A[i]<<" ";
   i++;
   }
  }
 }
}

int main()
{
 int opc, bandera=1, valor;
 while( bandera == 1)
 {
  cout<<"\n1.Poner 2.quitar 3.Mostrar Cola\n";
  cin>>opc;
  switch (opc)
  {
  case 1: cout<<"Valor Enter:\n";
          cin>>valor;
          Poner(valor);
          break;
  case 2: quitar();
          break;
  case 3: mostrar_cola();
          break;
  
  }
 }

 return 0;
}