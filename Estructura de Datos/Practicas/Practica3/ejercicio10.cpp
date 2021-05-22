/*10. Dado un arreglo de N números enteros, diseñe algoritmos recursivos que retornen:
○ El mayor elemento del arreglo.
○ La suma de los elementos del arreglo.
○ La suma de los k primeros elementos del arreglo.
○ La media de los elementos del arreglo.
○ Si el arreglo está ordenado.
○ Si la suma de la primera mitad del arreglo es igual a la segunda mitad.*/

#include iostream
using namespace std;
int MayorElemento(int a[]);

int main(){
  int a[] = {1, 2, 3, 4, 5};
    cout<<"Mayor Elemento: "<<


  return 0
}

int MayorElemento(int a[]){
    int mayor, i=0;
    if (mayor==0){
      return 0;
    }
    else {
        if(a[0]>mayor ||  ){
          mayor = a[0];
          i++;
          MayorElemento(a[a + 1]);
        }
    }

}