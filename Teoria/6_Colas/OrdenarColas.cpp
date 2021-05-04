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
void OrdenarLista(node *&frente, node*&fin);

int main(){
  node *frente=NULL, *fin=NULL, *aux;
  int dato, t, conteo=1;
  char verificar;
  bool validar=false;
  do{
    cout<<"Dato: ";cin>>dato;
    cout<<"Continuar? (S/N): ";cin>>verificar;
    insertarColas(frente, fin, dato);
  } while(verificar!='N' && verificar!='n');
  cout<<endl<< "ELIMINANDO ELEMENTOS..."<<endl;
  aux=frente;
  OrdenarLista(frente, fin);
  while(frente!=NULL){
    suprimirCola(aux, fin, dato);
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

void OrdenarLista(node *&frente, node*&fin){
     node *actual , *siguiente;
     int t;

     actual=frente;
     while(actual->next != NULL)
     {
          siguiente = actual->next;

          while(siguiente!=NULL)
          {
               if(actual->dato < siguiente->dato)
               {
                    t = siguiente->dato;
                    siguiente->dato = actual->dato;
                    actual->dato = t;
               }
               siguiente = siguiente->next;
          }
          actual = actual->next;
          siguiente = actual->next;
     }
}
void suprimirCola(node *&frente, node *&fin, int &n){
  n=frente->dato;

  if(frente == fin){
		frente = NULL;
		fin = NULL;
	}

  else frente=frente->next;
}
