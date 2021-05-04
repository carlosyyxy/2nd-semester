/* Declaración de punteros en C++
  &n=Dirección de n;
  *n=la variable que cuya dirección esta almacenada en n.
*/
#include <iostream>
using namespace std;
int main(){
  int num[]={1,2,3,4,5}, *dir_num;
  dir_num=num;
  for(int i=0;i<5;i++){
    cout<<"Elemento del vector de ["<<i<<"]: "<<*dir_num++<<endl;
    cout<<"Posicion de memoria de ["<<i<<"]: "<<dir_num++<<endl<<endl;
  }



  return 0;
}
