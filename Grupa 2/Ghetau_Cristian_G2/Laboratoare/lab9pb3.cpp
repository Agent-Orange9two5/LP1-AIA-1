#include <iostream>
using namespace std;
//variabila globala pentru a urmari progresul recursivitatii
int i = 0;
//declarare functii recursive
void foo1(int);
void foo2(int);
// definitie functiei fool
void foo1(int n)
{
    // verifica conditia pentru a continua recursivitatea
    if ( i <= n)
    {
        // afiseaza valoara cureanta ai
        cout << i << " ";
        // incrementarea valorii lui i
        i++;
        // apelarea functiei foo2, realizant astfel o recursivitate indirecta
        foo2(n);
    }
    else
        return; // incheie functia daca conditia nu este indeplinita
}
// definitia functiei foo2
void foo2(int n)
{
    // verifica conditia pentru a continua recursivitatea
    if (i <= n)
    {
        // afiseaza valoarea curenta a i
        cout << i << " ";
        i++;
        // apelarea functiei fool, realizand astfel o recursivitate indirecta
        foo1(n);
    }
    else
        return;
}

int main (void)
{
    int n;
    cin >> n;
    foo1(n);
    return 0;
}
