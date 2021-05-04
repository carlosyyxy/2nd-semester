/*Ejercicio 9:  Haga la traza del siguiente algoritmo y explique qué sucede en cada instrucción*/

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
    int i, j, n, *arr, **mat;
    n=5;
    arr = new int[n];
    mat = new int*[n];
    for (i = 0; i < n; i++){
      arr[i] = i; //0 - 4 - 3 - 2 - 1
      mat[i] = new int[n]; //se crea una posicion de memoria para cada posicion de la itaracion de mat
      for(j = 0; j < n; j++)
      mat[i][j] = i + j; //0+0 - 4+1 - 3+2 - 2+3 - 1+4

    }
    i = n - 1; //4 - 3 - 2 - 1
    while (i >= 0){
      cout<<arr[i]<<" ";
      delete mat[i];
      i--;
    }
    delete arr;
    delete mat; // ¿a quién apunta arr? ¿podría acceder arr[0]?
}
