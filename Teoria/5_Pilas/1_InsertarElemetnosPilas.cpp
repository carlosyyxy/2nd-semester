/* 1. Insertar Elementos a una Lista enlazada */
#include <iostream>
using namespace std;
struct Node{
  int dato;
  Node *next;
};
void agregarPila(Node *&, int);

int main(){
  Node *pila = NULL;
  int n1, n2;
  cout<<"Numero: "; cin>>n1;
  agregarPila(pila, n1);
  cout<<"Numero: "; cin>>n2;
  agregarPila(pila, n2);



  return 0;
}

void agregarPila(Node *&pila, int n){
  Node *nuevo_nodo = new Node(); //1er paso: Crear Nuevo Nodo.
  nuevo_nodo->dato = n; //2do Paso: Asignar al nodo el dato.
  nuevo_nodo->next = pila;
  pila=nuevo_nodo;
  cout<<"Numero: "<<n<<" agregado correctamente."<<endl;
}
