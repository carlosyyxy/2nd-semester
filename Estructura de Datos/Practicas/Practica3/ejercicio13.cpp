/*13.Elabore una función recursiva que reciba como parámetro un número entero positivo y
retorne el número con los dígitos invertidos.*/

#include <iostream>
using namespace std;
int Invertir(int numero, int invertido);

int main() {
  int numero = 12345, invertido=0;
  cout << "Numero invertido: " << Invertir(numero, invertido);
  return 0;
  
  }

int Invertir(int numero, int invertido){
    if(numero==0){
      return invertido;
    }
    else{
        return Invertir(numero / 10, invertido * 10 + (numero % 10));
    }
  }