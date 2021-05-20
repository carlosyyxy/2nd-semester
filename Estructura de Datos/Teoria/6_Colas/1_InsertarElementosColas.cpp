/* 1. Insertar Elementos a una Cola */
#include <iostream>
using namespace std;
struct node{
  int dato;
  node *next;
};

void insertarColas(node *&, node *&, int);
bool colaVacia(node *);

int main(){
  node *frente=NULL, *fin=NULL;
  int dato;
  char verificar;
  do{
    cout<<"Dato: ";cin>>dato;
    cout<<"Continuar? (S/N): ";cin>>verificar;
    insertarColas(frente, fin, dato);
  } while(verificar!='N' && verificar!='n');
  return 0;
}

void insertarColas(node *&frente, node *&fin, int n){
  node *nuevo_nodo=new node();

  nuevo_nodo->dato=n;
  nuevo_nodo->next=NULL;

  if(colaVacia(frente)) frente=nuevo_nodo;
  else fin->next=nuevo_nodo;
  fin=nuevo_nodo;
  cout<<"Numero: "<<n<<" agregado correctamente."<<endl;
}

bool colaVacia(node *frente){
  return (frente==NULL)? true : false;
}
