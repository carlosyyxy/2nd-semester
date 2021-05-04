/* Mostrar los elementos de la lista */
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
  int dato;
  Node *next;
};
void Menu();
void InsertarLista(Node *&, int);
void MostrarLista(Node *);
Node *list = NULL;

int main(){
  Menu();
  return 0;
}

void Menu(){
  int opcion, dato;
  do{
    cout<<"MENU"<<endl;
    cout<<"1. Insertar elementos a la lista"<<endl;
    cout<<"2. Mostrar elementos a la lista"<<endl;
    cout<<"3. Salir del menu"<<endl;
    cout<<"Opcion: ";cin>>opcion;
    switch(opcion){
      case 1:do{
            cout<<"Numero: "; cin>>dato;
            InsertarLista(list, dato);
            } while(dato!=0);
            break;
      case 2:MostrarLista(list);
            break;
    }
  } while(opcion!=3);
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
void MostrarLista(Node *lista){
  Node *actual=new Node();
  actual = lista;
  while(actual!=NULL){
    cout<<actual->dato<<"-->";
    actual=actual->next;
  }
  cout<<endl;
}
