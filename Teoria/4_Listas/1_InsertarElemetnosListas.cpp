/* 1. Insertar Elementos a una Lista enlazada */
#include <iostream>
using namespace std;
struct Node{
  int dato;
  Node *next;
};
void InsertarLista(Node *&, int);

int main(){
  Node *list = NULL;
  int dato;

  do {
    cout<<"Numero: "; cin>>dato;
    InsertarLista(list, dato);
  } while(dato!=0);

  return 0;
}

void InsertarLista(Node *&lista, int n){
  Node *nuevo_nodo = new Node(); //1er paso: Crear Nuevo Nodo.
  nuevo_nodo->dato = n; //2do Paso: Asignar al nodo el dato.

  Node *aux1 = lista; //3er Paso: Crear dos nodos auxiliares y asignarles lista al primero
  Node *aux2;

  while((aux1!=NULL)&&(aux1->dato<n)){
    aux2=aux1;
    aux1=aux1->next;
  }

  if(lista==aux1){
    lista = nuevo_nodo;
  }

  else{
    aux2->next=nuevo_nodo;
  }
  nuevo_nodo->next=aux1;
  cout<<"El numero: "<<n<<" Se agrego en la lista correctamente."<<endl;
}
