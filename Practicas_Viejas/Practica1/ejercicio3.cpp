/*Ejercicio 1: Defina una estructura de datos que permita almacenar eventos de un calendario.
Esta no debe registrar eventos de fechas inexistentes. Asuma que su calendario funciona para un
sólo año. Además se desea conocer el día de la semana en que ocurre el evento. */

#include<iostream>
using namespace std;
struct Eventos{
  string nombre;
  int dia, mes;
} fecha;

int main(){
  int totaldias=0;
  cout<<"---Eventos del caldendario---"<<endl;
  do{
    fflush(stdin);
    cout<<"Nombre del evento: ";getline(cin, fecha.nombre);
    cout<<"Dia: ";cin>>fecha.dia;
    cout<<"Mes: ";cin>>fecha.mes;
  } while(fecha.dia>30 || fecha.mes>12);
  totaldias=fecha.mes*30+fecha.dia-30;
  switch (totaldias%7) {
    case 0:cout<<endl<<fecha.nombre<<" cae domingo";break;
    case 1:cout<<endl<<fecha.nombre<<" cae lunes";break;
    case 2:cout<<endl<<fecha.nombre<<" cae martes";break;
    case 3:cout<<endl<<fecha.nombre<<" cae miercoles";break;
    case 4:cout<<endl<<fecha.nombre<<" cae jueves";break;
    case 5:cout<<endl<<fecha.nombre<<" cae viernes";break;
    case 6:cout<<endl<<fecha.nombre<<" cae sabado";break;
  }

  return 0;
}
