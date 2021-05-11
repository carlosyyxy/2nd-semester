/*Ejercicio 2: Una empresa de vigilancia privada ha tenido problemas con el comportamiento de sus
empleados, por ello decidió ordenar la creación de un sistema que permita almacenar los
datos de cada vigilante, de los cuales se desea conocer nombre, CI, dirección, años de
experiencia, nacionalidad, país de origen, edad y estado civil. La empresa presta servicios a
compañías públicas y privadas; de las públicas se desea conocer el área de servicio que
cubren y el número de vigilantes que requieren; de las privadas, la fecha desde la cual se les
presta servicio y para ambos tipos nombre, dirección y RIF. Usted debe satisfacer los
siguientes requerimientos:
○ Elaborar un algoritmo que permita conocer los datos del vigilante que tiene el mayor
número de quejas y en qué compañía.
○ Conocer la compañía que ha formulado el mayor número de quejas.
○ Diseñar una estructura de datos que permita representar esta información.*/

#include<iostream>
using namespace std;
int nCompanias;

struct Vigilante{
  string Nombre, Direccion, Nacionalidad, PaisDeOrigen, EstadoCivil;
  int CI, AniosDeExperiencia, Edad, QuejasTemp;
  bool Compania;
};

struct Compania{
  bool Tipo;
  string Nombre, Direccion, Rif, Area, Fecha;
  int nVigilantes, QuejasTotales=0, VigilantesTotal;
  Vigilante Vigilantes[100];
}Companias[100], Mayor;

void PedirDatos();
void DatosDelMayorVigilanteConQuejas(Compania[], int);
void MayorQuejasPorCompanias(Compania[], int);

int main(){
  PedirDatos();
  DatosDelMayorVigilanteConQuejas(Companias, nCompanias);
  MayorQuejasPorCompanias(Companias, nCompanias);
  return 0;
}

void PedirDatos(){
  cout<<"Numero de Companias: ";cin>>nCompanias;
  cout<<endl<<"---Pedida de Datos a las companias---"<<endl;
  for(int i=0;i<nCompanias;i++){
    fflush(stdin);
    cout<<endl<<"Nombre de la Compania: "; getline(cin, Companias[i].Nombre);
    cout<<"Direccion: "; getline(cin, Companias[i].Direccion);
    cout<<"RIF: "; getline(cin, Companias[i].Rif);
    cout<<"Es publica? (1/0): "; cin>>Companias[i].Tipo;
    if(Companias[i].Tipo==1){
      fflush(stdin);
      cout<<"Area: "; getline(cin, Companias[i].Area);
      cout<<"Vigilantes Requeridos: "; cin>>Companias[i].nVigilantes;
    }
    else{
      fflush(stdin);
      cout<<"Fecha de inicio de sus servicios: ";getline(cin,Companias[i].Fecha);
    }
    cout<<"Numero de Vigilantes: ";cin>>Companias[i].VigilantesTotal;
    cout<<endl<<"---Pedida de Datos a los vigilantes---"<<endl;
    for(int j=0;j<Companias[i].VigilantesTotal;j++){
      fflush(stdin);
      cout<<endl<<"Nombre: "; getline(cin, Companias[i].Vigilantes[j].Nombre);
      cout<<"Direccion: "; getline(cin, Companias[i].Vigilantes[j].Direccion);
      cout<<"Estado civil: "; getline(cin, Companias[i].Vigilantes[j].EstadoCivil);
      cout<<"Nacionalidad: "; getline(cin, Companias[i].Vigilantes[j].Nacionalidad);
      cout<<"Pais De Origen: "; getline(cin, Companias[i].Vigilantes[j].PaisDeOrigen);
      cout<<"Cedula de identidad: "; cin>>Companias[i].Vigilantes[j].CI;
      cout<<"Anios de Experiencia: "; cin>>Companias[i].Vigilantes[j].AniosDeExperiencia;
      cout<<"Numero de quejas: "; cin>>Companias[i].Vigilantes[j].QuejasTemp;
      Companias[i].QuejasTotales+=Companias[i].Vigilantes[j].QuejasTemp;
    }
  }
}

void DatosDelMayorVigilanteConQuejas(Compania Companias[], int nCompanias){
  int QuejasMayor=0, posC, posV;
  for(int i=0;i<nCompanias;i++){
    for(int j=0;j<Companias[i].VigilantesTotal;j++){
      if(Companias[i].Vigilantes[j].QuejasTemp>QuejasMayor){
        QuejasMayor=Companias[i].Vigilantes[j].QuejasTemp;
        posV=j;
        posC=i;
      }
    }
  }

  cout<<endl<<"---Datos del Vigilante con mayor numero de quejas---"<<endl;
  cout<<endl<<"Compania: "<<Companias[posC].Nombre<<endl;
  cout<<"Nombre: "<<Companias[posC].Vigilantes[posV].Nombre<<endl;
  cout<<"Numero de Quejas: "<<Companias[posC].Vigilantes[posV].QuejasTemp<<endl;
  cout<<"Direccion: "<<Companias[posC].Vigilantes[posV].Direccion<<endl;
  cout<<"Estado civil: "<<Companias[posC].Vigilantes[posV].EstadoCivil<<endl;
  cout<<"Nacionalidad: "<<Companias[posC].Vigilantes[posV].Nacionalidad<<endl;
  cout<<"Pais De Origen: "<<Companias[posC].Vigilantes[posV].PaisDeOrigen<<endl;
  cout<<"Cedula de identidad: "<<Companias[posC].Vigilantes[posV].CI<<endl;
  cout<<"Anios de Experiencia: "<<Companias[posC].Vigilantes[posV].AniosDeExperiencia<<endl;
}

void MayorQuejasPorCompanias(Compania Companias[], int nCompanias){
  int QuejasMayor=0, pos;
  for(int i=0;i<nCompanias;i++){
    if(Companias[i].QuejasTotales>QuejasMayor){
      QuejasMayor=Companias[i].QuejasTotales;
      pos=i;
    }
  }
  cout<<endl<<"---Datos de la compania con mas quejas---"<<endl;
  cout<<endl<<"Nombre: "<<Companias[pos].Nombre<<endl;
  cout<<"Numero de Quejas: "<<Companias[pos].QuejasTotales<<endl;
  cout<<"Direccion: "<<Companias[pos].Direccion<<endl;
  cout<<"RIF: "<<Companias[pos].Rif<<endl;
  if(Companias[pos].Tipo==1){
    cout<<"Area: "<<Companias[pos].Area<<endl;
    cout<<"Vigilantes Requeridos: "<<Companias[pos].nVigilantes<<endl;
  }
  else cout<<"Fecha de inicio de sus servicios: "<<Companias[pos].Fecha<<endl;
}
