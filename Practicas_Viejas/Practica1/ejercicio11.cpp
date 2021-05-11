/*Ejercicio 4:  Considere las siguientes declaraciones e indique el efecto de las
siguientes operaciones:.*/

#include<iostream>
using namespace std;
void main2();

int main(){
  main2();
  return 0;
}

void main2() {
      int *x, *y, *z, a;
      char *w, b;
      bool c;
      x = new int;  //Se reserva/crea un espacio de memoria para x
      y = new int; //Se reserva/crea un espacio de memoria para y
      w = new char; //Se reserva/crea un espacio de memoria para w
      *x=1; *y=2; a=4, *w='a', b='b';
      x = y; //x ahora tendrá la dirección de memoria de y con sus valores
      b = *w; //b ahora tendrá el valor almacenado en w, es decir a.
      z = new int; *z=10;//Se reserva/crea un espacio de memoria para z
    //z = w; //No se puede igualar un puntero de tipo int a uno tipo char
    //c = (z == w); //No se puede comparar las direcciones de memoria de tipo int a uno tipo char
      x = new int; //Se Reserva/crea un nuevo espacio de memoria para x
      *x = 1; //Se le asigna el valor de 1.
      *w = 'g'; // Se le asigna el caracter 'g' a w.
      a = *x + *y; //Se le asigna a a la suma de *x+*y que en este caso es 3
      c = (a == *w); //C es igual a VoF si a(3) es igual al valor que apunta w(g), es decir es falso
      *z = a; //Se le asigna al puntero de z el valor de a, es decir 3
      z = x; //Ahora z iguala el valor y la direccion de memoria de x
      cout<<"*x: "<<*x<<"  "<<"*y: "<<*y<<"  "<<"*w: "<<*w<<"  "<<"*z: "<<*z<<"  "<<"a: "<<a<<"  "<<"b: "<<b<<"  "<<"c: "<<c<<endl;
      //x=1 y=2 w=g z=1 a=3 b=a c=false
      delete y; //Se elimina a Y.
      


}
