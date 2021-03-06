/*Ejercicio 10: Dada la siguiente secuencia de instrucciones indique que ocurre en cada línea y señale si
queda algún espacio de memoria por liberar.*/

#include<iostream>
using namespace std;
class node {
public:
int info;
node *next;
};

node *p, *q;
int *e, i, **f;
void main2();

int main(){
  main2();
  return 0;
}

void main2() {
    p = new node; //Reserva un espacio de memoria para p.
    e = new int; //Reserva un espacio de memoria para e
    *e = 0;  //El valor dentro de la variable de e es igualado a 0
    f = &e; // a **f se le asigna por referencia la posición de memoria de E, es decir vale 0.
    (*p).next = new node; //Se reserva el espacio de memoria para el nodo siguiente de p
    q = &(*p); //q es igualado a la posicion de memoria de p
    p = (*p).next; //p ahora es igualado a su siguiente nodo
    (*q).info = 30; //el valor de info de q ahora vale 30
    (*p).info = (*q).info + 10; //el valor de info de p ahora es 30+10, es decir 40
    (*p).next = new node; //se reserva el siguiente nodo de p
    (*((*p).next)).info = (*p).info + (*q).info + 10; //el siguiente nodo de p ahora valdra 40+30+10
    p = (*p).next; //p tiene el valor y la posicion de su siguiente nodo
    (*p).next = NULL; //el siguiente nodo de p ahora es nulo
    while(q != NULL){ //mientras que q sea distinto de nulo
        cout << "*e: " << *e << " **f: " << **f << " (*q).info " << (*q).info << endl;
        *e = **f + (*q).info; //el valor de e será la suma de f y de la info de q
        cout<<"*e: "<<*e<<" **f: "<<**f<<" (*q).info "<<(*q).info<<endl;
        q = (*q).next; //q ahora sera su siguiente nodo
    }
    f = new int*; //reserva una nueva posicion de memoria para f
    *f = new int; //reserva una nueva posicion de memoria para el primer puntero de f
    **f = 1;  //f pasa de valer 150 a 1.
    delete *f; //se elimina el numero 1
    *f = &i; //ahora f tendrá el valor q almacena la direccion de memoria de i
    i = 5; //i vale 5
    cout<<"**f: "<<*(*f)<<endl; //imprime 5
    //Falta liberar dos espacios d memoria de f, p y el de e.
  }
