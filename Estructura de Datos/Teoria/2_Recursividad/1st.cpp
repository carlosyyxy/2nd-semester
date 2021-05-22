#include <iostream>
using namespace std;
int factorial (int x);
int main(){
    int x;
    cout<<"Factorial de: "; cin>>x;
    cout<<"Resultado: "<<factorial(x)<<endl;
    return 0;
}

int factorial (int x){
    int i=0, fac=1;
    cout<<"i. "<<i<<" x= "<<x<<" fac= "<<fac<<endl;
    if (x==0) fac=1;
    else fac=x * factorial(x-1);
    return fac;
}