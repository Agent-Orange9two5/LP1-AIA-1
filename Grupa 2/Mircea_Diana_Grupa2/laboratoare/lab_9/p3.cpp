#include <iostream>
using namespace std;
//Variabila globala pentru a urmari progresul recursivitatii
int i=0;
//Declarare functii recursive
void foo1(int);
void foo2(int);
//Definitie fundtie foo1
void foo1(int n)
{
    //Verfica conditia pentru a continua recurvitatea
    if(i<=n)
    {
        //Afiseaza valoarea curenta a i
        cout<<i<<" ";
        //implementarea valorilor lui i
        i++;
        //apelarea funtiei foo2, realizand astfel o recursivitate indirecta
        foo2(n);
    }
    else
        return; //incheie functia daca conditia nu este indeplinita
}
//definitia functiei foo2
void foo2(int n)
{
    //verifica conditia pentru a continua recursivitatea
    if(i<=n)
    {
        //afiseaza valoarea curenta a i
        cout<<i << " ";
        i++;
        //apelarea fnuctiei foo1, realizand astfel o recursivitate indirecta
        foo1(n);
}
    else
        return;
}
int main()
{
    int n;
    cin>>n;
    foo1(n);
    return 0;
}
