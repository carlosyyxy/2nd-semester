/*Ejercicio 8:  Dada la siguiente secuencia de instrucciones indique que ocurre en cada línea.
Indique además si queda algún elemento por liberar de memoria al terminar recorrido( ).*/

#include<iostream>
using namespace std;
class node {
 public:
 int info;
 node *next;
} *p, *q;

void recorrido();

int main(){
  recorrido();
  return 0;
}

void recorrido() {
    p = new node; //se reserva un espacio de memoria para p
    (*p).info = 10; //se le asigna al info de p el numero 10
    (*p).next = p; //el nodo siguiente de p es igualado a su predecesor
    q = new node; //se reserva un espacio de memoria para q
    (*p).next = q; //el nodo siguiente de p ahora es igualado a q
    (*q).info = (*p).info + 3; //se le asigna a la info de p (10) + 3=13
    (*q).next = p; // el siguiente de q es igual a p
    (*q).next = NULL; //el siguiente nodo de q es apuntado a nulo
    q = new node; //se reserva un nuevo espacio para q
    (*q).info = (*p).info + (*((*p).next)).info; //se la asigna al info de q
    //la suma de p y su sucesor, es decir 10+13=23
    (*((*p).next)).next = q; //al sucesor del sucesor de p se le iguala a q.
    (*q).next = NULL; //el siguiente de q es igual a nullo
    q = p; //q es igualado a p
    while (q != NULL){
        cout<<((*q).info)<<endl;
        q = (*q).next;
    }
    cout<<(*p).info<<endl;
    cout<<(*(*p).next).info<<endl;
    cout<<(*(*(*p).next).next).info<<endl;
    //Falta liberar todos los espacios de memorias ocupados por p
}
