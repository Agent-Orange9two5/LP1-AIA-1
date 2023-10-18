#include <iostream>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;


//Problema vectori laborator 4: pe vecotrul 1 2 3 4 5 6 7 8 9 10 sa se afiseze: suma nr impare,numerele pare, vectorul inversat
int main()
{
    int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int sumaNrImpare = 0;
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 != 0)
        {
            sumaNrImpare += v[i];
        }
    }
    cout << "suma nr impare este: " << sumaNrImpare;
    cout << endl;
    cout << "Numere pare sunt: ";
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            cout << v[i] << " ";
        }
    }
    cout << endl;
    cout << "Vectorul inversat este : ";
    for (int i = 9; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    return 0;
}


