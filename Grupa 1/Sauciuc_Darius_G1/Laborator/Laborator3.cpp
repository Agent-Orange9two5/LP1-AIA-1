#include <iostream>

using namespace std;
// Variabila globala pentru a urmari progresul recursivitatii
int i = 0;
// Declarare functii recursive
void foo1(int);
void foo2(int);

// Definitie functie foo1
void foo1(int n)
{
    if(i <= n)
    {
        cout << i << " ";
        i++;
        foo2(n);
    }
    else return;
}

void foo2(int n)
{
    // Verifica conditia pentru a continua recursivitatea
    if(i <= n)
    {
        // Afiseaza valoarea curenta a lui i
        cout << i << " ";
        i++;
        // Apelarea functiei foo1, realizand astfel o recursivitate
        foo1(n);
    }
    else return;
}

int main(void)
{
    int n;
    cin >> n;
    foo1(n);
    return 0;
}
