/*
Creați un program care primește de la tastatură un număr n și apoi citește
n perechi de numere întregi (x, y). Stocați aceste perechi într-un vector
și sortați-le în funcție de suma lor (x + y).

b) Afișați perechile sortate în ordine crescătoare a sumei într-un fișier numit
"PerechiSortate.txt".

*/

#include <iostream>
#include <fstream>
using namespace std;

ofstream g("PerechiSortate.txt");

struct Pereche{
int x,y,suma;
};

int main()
{
    cout<<"DISCLAIMER! Puteti introduce maxim 100 de perechi."<<endl;

    // Variabile
        // n - Numarul de perechi
        // x - elementul 1 din pereche
        // y - elementul 2 din pereche

    int i,j,n,x,y,s=0;
    Pereche perechi[100];

    cout<<"Cate perechi doriti sa introducem?"<<endl;
    cin>>n;

    // Introducerea perechilor
    for(i=0;i<n;i++)
    {
        cout<<"Introduceti perechea cu numarul "<<i+1<<" (perechile sunt formate din 2 numere): ";
        cin>>perechi[i].x >> perechi[i].y;
        perechi[i].suma=perechi[i].x+perechi[i].y;
    }

    // Sortarea in functie de suma
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(perechi[i].suma < perechi[j].suma)
                swap(perechi[i], perechi[j]);
        }
    }

    // Afisare
    for(i=0;i<n;i++){
        cout<<perechi[i].x << " " << perechi[i].y << endl;
        g<<perechi[i].x << " " << perechi[i].y << endl;
    }

    g.close();
    return 0;
}
