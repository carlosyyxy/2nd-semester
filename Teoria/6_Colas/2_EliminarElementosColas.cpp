/* 1. Insertar Elementos a una Cola */
#include <iostream>
using namespace std;
struct node{
  int dato;
  node *next;
};

void insertarColas(node *&, node *&, int);
bool colaVacia(node *);
void suprimirCola(node *&, node *&, int &);

int main(){
  node *frente=NULL;
  node *fin=NULL;
  int dato;
  char verificar;
  do{
    cout<<"Dato: ";cin>>dato;
    cout<<"Continuar? (S/N): ";cin>>verificar;
    insertarColas(frente, fin, dato);
  } while(verificar!='N' && verificar!='n');
  cout<<endl<< "ELIMINANDO ELEMENTOS..."<<endl;
  while(frente!=NULL){
    suprimirCola(frente, fin, dato);
    if(frente!=NULL) cout<<dato<<",";
    else cout<<dato<<".";
  }

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

void suprimirCola(node *&frente, node *&fin, int &n){
  n=frente->dato;
  node *aux=frente;

  if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
  
  else frente=frente->next;

  delete aux;
}
