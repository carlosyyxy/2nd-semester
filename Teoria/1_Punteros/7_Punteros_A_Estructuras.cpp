/* Declaración de punteros a estructuras en C++*/
#include <iostream>
using namespace std;
struct Persona{
  char Nombre[30];
  int Edad;
} persona, *puntero_persona = &persona;
void PedirDatos();
void MostrarDatos(Persona *);
int main(){
  PedirDatos();
  MostrarDatos(puntero_persona);
  return 0;
}
void PedirDatos(){
  cout<<"---Pedida de datos---"<<endl;
  cout<<"Nombre: ";cin.getline(puntero_persona->Nombre,30,'\n');
  cout<<"Edad: ";cin>>puntero_persona->Edad;
}
void MostrarDatos(Persona *puntero_persona){
  cout<<endl<<"---Muestra de datos---"<<endl;
  cout<<"Nombre: "<<puntero_persona->Nombre<<endl;
  cout<<"Edad: "<<puntero_persona->Edad<<endl;
}
