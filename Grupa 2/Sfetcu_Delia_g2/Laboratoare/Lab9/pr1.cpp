#include <iostream>

using namespace std;
int fact_iterativ(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int fact_recursiv(int n){
    //cazul de baza pt recursivitate: 0! este 1
    if(n == 0)
        return 1;
    else
        //formula recursiva: n! = n * (n-1)!
        return n * fact_recursiv(n - 1);
}
int main()
{
    int n;
    cout << "Introduceti n: ";
    cin >> n;
    //afisarea rezultatului pentru metoda iterativa
    cout << "n! cu metoda iterativa este egal cu: " << fact_iterativ(n) << endl;
    //afisarea rezultatului pentru metoda recursiva
    cout << "n! cu metoda recusiv este egal cu: " << fact_recursiv(n);
    return 0;
}
