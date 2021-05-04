/*Ejercicio 8:  Dada la siguiente secuencia de instrucciones indique que ocurre en cada línea.
Indique además si queda algún elemento por liberar de memoria al terminar recorrido( ).*/

#include<iostream>
using namespace std;
class point {
     public:
     float x, y;
     point(){
         (*this).x = 0;
         (*this).y = 0;
 }
 point(float x, float y){
         (*this).x = x;
         (*this).y = y;
 }
};
class rect{
     public:
     point *p1, *p2;
     rect(){
         (*this).p1 = NULL;
         (*this).p2 = NULL;
     }
     rect(point *p1, point *p2){
         (*this).p1 = p1;
         (*this).p2 = p2;
     }
};

void recorrido();

int main(){
  recorrido();
  return 0;
}


void recorrido() {
    point *a, *b;
    a = new point;
    b = new point(1.0f, 1.0f);
    rect* r = new rect(a, b);
    delete a;
    delete r; // ¿ocurre un error en esta instrucción?
}
