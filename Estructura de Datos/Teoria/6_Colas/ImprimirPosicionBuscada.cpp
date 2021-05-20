/* 1. Insertar Elementos a una Cola */
#include <iostream>
using namespace std;
struct node{
  int dato;
  char cliente='P';
  node *next;
};

void insertarColas(node *&, node *&, int);
bool colaVacia(node *);
void suprimirCola(node *&, node *&, node *&, int, int &);
void OrdenarLista(node *&frente, node*&fin);
void ImprimirCola(node *&frente, node *&fin, int &n);

int main(){
  node *frente=NULL, *fin=NULL, *aux, *prueba;
  int dato, t, conteo=0;
  char verificar;
  bool validar=false;
  do{
    cout<<"Dato: ";cin>>dato;
    cout<<"Continuar? (S/N): ";cin>>verificar;
    insertarColas(frente, fin, dato);
  } while(verificar!='N' && verificar!='n');
  cout<<"Posicion a buscar: ";cin>>t;
  aux=frente;
  while(aux!=NULL){
    suprimirCola(aux, fin, prueba, t, conteo);
  }

  aux=frente;
  while(aux!=NULL){
    ImprimirCola(aux, fin, dato);
    if(aux!=NULL) cout<<dato<<",";
    else cout<<dato<<".";
  }
  cout<<endl<<prueba->dato<<endl;
  OrdenarLista(frente,fin);
  cout<<endl<<prueba->dato<<endl;
  while(frente!=NULL){
    ImprimirCola(frente, fin, dato);
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
void suprimirCola(node *&frente, node *&fin, node *&prueba, int t, int &conteo){

  if(conteo==t){
    prueba=frente;
    frente=NULL;
  }

  else{
    frente=frente->next;
  }

  conteo++;

}

void ImprimirCola(node *&frente, node *&fin, int &n){
  n=frente->dato;

  if(frente == fin){
		frente = NULL;
		fin = NULL;
	}

  else frente=frente->next;
}
