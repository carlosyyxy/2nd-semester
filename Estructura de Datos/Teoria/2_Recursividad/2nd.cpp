#include <iostream>
using namespace std;
int fibbonnaci(int x);

int main(){
    int n;
    cout<<"Serie de Fibbonnaci de: "; cin>>n;
    cout<<"Resultado: "<< fibbonnaci(n);
    return 0;
}

int fibbonnaci(int x){
  if (x == 0)
    return 0;
  else if (x == 1)
    return 1;
  else if (x >= 2)
  
    return fibbonnaci(x - 1) + fibbonnaci(x - 2); 
}

/*3 + 2 
  2 + 1 //1 + 1
  1 + 0 //1
  0*/