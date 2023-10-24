/*
1 2 3 4 5 6 7 8 9 10

afisati:
    suma nr impare
    nr pare
    vectorul inversat
*/

#include <iostream>

using namespace std;

int main()
{
    int v[10];
    int i, s = 0;

    cout << "Introduceti numerele din vector: ";
    for(i = 0; i < 10; i++)
    {
        cin >> v[i];
    }

    for(i = 0; i < 10; i++)
    {
        if(v[i] % 2 != 0)
        {
            s = s + v[i];
        }
    }
    cout << "Suma nr impare este: " << s << endl;

    for(i = 0; i < 10; i++)
    {
        if(v[i] % 2 == 0)
        {
            cout << v[i] << " este nr par" << "; ";
        }
    }
    cout << endl;

    cout << "Vectorul inversat este: ";

    for(i = 9; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}
