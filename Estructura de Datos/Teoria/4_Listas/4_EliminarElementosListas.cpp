/* 4.   Eliminar un elemento de la lista*/
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
void BuscarLista(Node *, int);
void EliminarNodo(Node *&, int);


Node *list = NULL;

int main(){
  Menu();
  return 0;
}

void Menu(){
  int opcion, dato;
  do{
    cout<<endl<<"MENU"<<endl;
    cout<<"1. Insertar elementos a la lista"<<endl;
    cout<<"2. Mostrar elementos a la lista"<<endl;
    cout<<"3. Buscar elemento en la lista"<<endl;
    cout<<"4. Eliminar elemento de la lista"<<endl;
    cout<<"5. Salir del menu"<<endl;
    cout<<"Opcion: ";cin>>opcion;
    switch(opcion){
      case 1:do{
            cout<<"Numero: "; cin>>dato;
            InsertarLista(list, dato);
            } while(dato!=0);
            break;
      case 2:MostrarLista(list);
            break;
      case 3:cout<<"Numero: ";cin>>dato;
            BuscarLista(list, dato);
            break;
      case 4:cout<<"Numero: ";cin>>dato;
            EliminarNodo(list, dato);
    }
  } while(opcion!=5);
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
void BuscarLista(Node *lista, int n){
  bool band=false;
  Node *actual=new Node();
  actual=lista;
  while(actual !=NULL && actual->dato<=n){
    if(actual->dato==n) band=true;
    actual=actual->next;
  }

  if(band==true) cout<<"El numero "<<n<<" ha sido encontrado"<<endl;
  else cout<<"El numero "<<n<<" NO ha sido encontrado"<<endl;

}
void EliminarNodo(Node *&lista, int n){
  //Preguntar si la lista esta vacia.

  if(lista!=NULL){
    Node *auxBorrar;
    Node *anterior = NULL;
    auxBorrar=lista;
    //Recorrer la lista.
    while(auxBorrar!=NULL && auxBorrar->dato!=n){
      anterior=auxBorrar;
      auxBorrar=auxBorrar->next;
    }
    //El elemento no esta en la lista.
    if(auxBorrar==NULL){
      cout<<"El elemento no ha sido encontrado"<<endl;
    }
    //El primer elemento es el que se quiere borrar.
    else if(anterior==NULL){
      lista=lista->next;
      delete auxBorrar;
    }
    //El elemento a eliminar se encuentra despues del primero.
    else{
      anterior->next=auxBorrar->next;
      delete auxBorrar;
    }
  }
  else{
    cout<<"La Lista esta vacia"<<endl;
  }
}
