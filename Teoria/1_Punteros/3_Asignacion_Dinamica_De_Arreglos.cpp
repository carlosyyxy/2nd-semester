/* Asignacion dinamica de arreglos
new: Reserva el numero de bytes solicitado por la declaración
delete: Libera un bloque de bytes reservado con anterioridad.
ejm--> Pedir al usuario n calificaciones y almacenaarlos en un arreglo dinamico*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int NumCalif, *calif;
void PedirNotas();
void MostrarNotas();
int main(){
  PedirNotas();
  MostrarNotas();
  delete[] calif; //Liberando el espacio en bytes utilizados anteriormente.
  return 0;
}
void PedirNotas(){
  cout<<"Numero de calificaciones: ";cin>>NumCalif;
  calif = new int[NumCalif]; //Crear el arreglo
  for(int i=0;i<NumCalif;i++){
    cout<<i+1<<". Nota: ";cin>>calif[i];
  }
}
void MostrarNotas(){
  cout<<endl<<"--Calificaciones--"<<endl;
  for(int i=0;i<NumCalif;i++){
    cout<<i+1<<". Calificacion: "<<calif[i]<<endl;
  }
}
