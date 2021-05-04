/* Declaración de punteros en C++
  &n=Dirección de n;
  *n=la variable que cuya dirección esta almacenada en n.
*/
#include <iostream>
using namespace std;
int **puntero_matriz, nFilas, nColumnas;
void PedirDatos();
void Mostrardatos(int **, int, int);
int main(){
  PedirDatos();
  Mostrardatos(puntero_matriz, nFilas, nColumnas);
  //Liberar la memoria que hemos utilizado en la matriz
  for(int i=0;i<nFilas;i++){
    delete[] puntero_matriz[i];
  }
  delete[] puntero_matriz;
  return 0;
}
void PedirDatos(){
  cout<<"Filas: ";cin>>nFilas;
  cout<<"Columnas: ";cin>>nColumnas;
  //Reservar memoria para la matriz indicada
  puntero_matriz=new int*[nFilas];//Para las filas
  for(int i=0;i<nFilas;i++){
    puntero_matriz[i]=new int[nColumnas]; //Paralas columnas
  }
  cout<<endl<<"--Inicio del relleno de la matriz--"<<endl<<endl;
  for(int i=0;i<nFilas;i++){
    for(int j=0;j<nColumnas;j++){
      cout<<i<<"."<<j<<". Valor: "; cin>>*(*(puntero_matriz+i)+j);
    }
  }
}
void Mostrardatos(int **puntero_matriz, int nFilas, int nColumnas){
  cout<<endl<<"--Mostrando Matriz--"<<endl<<endl;
  for(int i=0;i<nFilas;i++){
    for(int j=0;j<nColumnas;j++){
      cout<<*(*(puntero_matriz+i)+j)<<" ";
    }
    cout<<endl;
  }
}
