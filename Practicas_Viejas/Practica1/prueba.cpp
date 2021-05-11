#include <iostream>
using namespace std;

struct node
{
    int info;
    node *next;
};

int main()
{
    node *q, *r, *s, t, *v;
    q = new node;
    (*q).info = 0;

    s = new node;
    (*s).info = 5;

     v = new node;
    (*v).info = 2;

    t.info = 1; //el valor de info de s valdrá 3

    //t=*q;
    v=q;    
    cout<< "v.info =" << (*v).info << endl;
    *q=*s;
    cout<< "(*q).info =" << (*q).info << endl;
    *s=*v;
    cout<< "(*s).info =" << (*s).info << endl;

    return 0;
} 