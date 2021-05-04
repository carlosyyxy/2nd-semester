/* 1. Insertar Elementos a una Lista enlazada */
#include <iostream>
using namespace std;
struct Node{
  int dato;
  Node *next;
};
void agregarPila(Node *&, int);
void eliminarPila(Node *&, int &);


int main(){
  Node *pila = NULL;
  int dato;
  do{
    cout<<"Numero: "; cin>>dato;
    agregarPila(pila, dato);
  } while(dato!=0);

  cout<<"Sacando elementos de la pila"<<endl;

  while(pila!=NULL){
    eliminarPila(pila,dato);
    if(pila!=NULL) cout<<dato<<",";
    else cout<<dato<<".";
  }

  return 0;
}

void agregarPila(Node *&pila, int n){
  Node *nuevo_nodo = new Node(); //1er paso: Crear Nuevo Nodo.
  nuevo_nodo->dato = n; //2do Paso: Asignar al nodo el dato.
  nuevo_nodo->next = pila;
  pila=nuevo_nodo;
  cout<<"Numero: "<<n<<" agregado correctamente."<<endl;
}

void eliminarPila(Node *&pila, int &n){
  Node *auxBorrar;
  auxBorrar=pila;
  n=auxBorrar->dato;
  pila=auxBorrar->next;
  delete auxBorrar;
}
