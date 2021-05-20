/* Declaración de punteros en C++
  &n=Dirección de memoria de n;
  *n=la variable que cuya dirección esta almacenada en n.
*/
#include <iostream>
using namespace std;
int main(){
  int Numero=20; //Creamos una variable int y le asignamos el valor de 20
  int *Direccion_Numero; //Creamos un puntero del mismo tipo que Numero
  Direccion_Numero=&Numero; //Le asignamos al puntero la dirección de memoria de Numero

  cout<<"Numero: "<<*Direccion_Numero<<endl; //Mostramos el valor de la variable
  cout<<"Direccion de Memoria: "<<&Direccion_Numero<<endl; // Mostramos su direccion de memoria


  return 0;
}
