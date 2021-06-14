/*.*/

#include<iostream>
#include <math.h>
using namespace std;
struct node {
 int info;
 node *next;
};
void main2();

int main(){
  main2();
  return 0;
}

void main2() {
    node *p, *t, *q, **r, s;
    p = new node;
    (*p).info = 60;

    (*p).next = new node;
    p->next->info = 15;

    r = p->next->next;

    p->next->next = new node;
    p->next->next->info = 55;
    

    p->next->next->next = new node;
    p->next->next->next->info = 56;
    
    p->next->next->next->next = new node;
    p->next->next->next->next = NULL;

    q = new node;
    q->info = 5;
    q->next = NULL;
    
    r->next = q;

    s.info = 6;
    s.next = NULL;

    (*q).info = (*p).info + p->next->next->next->next->info; //(*q.info) = 60 + 5 = 65
    p = (*q).next; // 
    r = &q; // r ahora referencia a la dirección de memoria de q 
    p->next->next->info = p->info * 30; 
    t = p->next->next; 
    s.info = (*t).info * pow(2, 3) - p->next->info;
    s.next = (*r)->next;
    (*r)->next = p->next;
    q->next->next = s.next;
    (*r) = &s;
    t->info = s.info + p->next->info;
    if ((*t).info == (*q).info)
          cout<<((*t).info);
    else if ((*t).info == (*p).info)
        cout<<((*p).info);
    else
        cout<<((*q).info);

    cout << "(*p.info)" << (*p).info << endl;
    cout << "(*q.info)" << (*q).info << endl;
    cout << "(*t.info)" << (*t).info << endl;
    cout << "(*r.info)" << (*r)->info << endl;
    cout << "(s.info)" << s.info << endl;
}
