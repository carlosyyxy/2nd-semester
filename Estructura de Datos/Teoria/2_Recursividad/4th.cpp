#include <iostream>
using namespace std;
int reversa(int x);

int main(){
    int x;
    cout << "Base: "; cin >> x;
    reversa(x);
    return 0;
}

int reversa(int x){
    cout<<x<<" ";
    if (x==0) return 0;
    else return reversa(x-1);

}