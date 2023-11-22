#include <iostream>

using namespace std;
//variabila globala pentru a urmarii progresul recursivitatii
int i=0;
//declararea fnctiei recursive
void foo1(int);
void foo2(int);
//definirea functiei foo1
void foo1(int n){
//verificarea conditiei pentru a continua recursivitatea
if(i<=n){
    //afiseaza valoarea curenta a lui i
    cout<<i<<" ";
    //incremetarea valorii lui i;
    i++;
    //apelarea functiei foo2,recursivitate indirecta
    foo2(n);

}
else return;//incheie functia daca nu e indeplinita
}
void foo2(int n){
    //verifica conditia pentru recursivitate
    if(i<=n){
    //afiseaza valoarea curenta a lui i
    cout<<i<<" ";
    i++;
    //apelarea functiei foo1,proc recursiva indirecta
    foo1(n);
}
else return;
}
int main(void)
{
    int n;
    cin>>n;
    foo1(n);
    return 0;
}
