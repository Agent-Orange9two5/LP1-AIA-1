#include <iostream>

using namespace std;

//Variabiala globala pentru a urmari progresul recursivitatii
int i=0;
//Declararea functiei recursive
void foo1(int);
void foo2(int);

void foo1(int n)
{
    //verifica conditia pt a continua recursivitatea
    if(i<=n)
    {
        //afiseaza valoarea curenta a i
        cout<<i<<" ";
        i++;
        //apelare funtie foo1,realizand astfel o recursivitate indirecta
        foo2(n);
    }
    else
        return;

}
//definitie funtie foo2
void foo2(int n)
{
    //verifica conditia pt a continua recursivitatea
    if(i<=n)
    {
        //afiseaza valoarea curenta a i
        cout<<i<<" ";
        i++;
        //apelare funtie foo1,realizand astfel o recursivitate indirecta
        foo1(n);
    }
    else
        return;

}

int main(void)
{
    int n;
    cin>>n;
    foo1(n);

    return 0;
}
