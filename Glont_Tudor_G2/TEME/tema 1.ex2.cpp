#include <iostream>
/*Sa se afiseze un mesaj simplu:
cout<<"Studentul are nota de trecere: ";
sau
cout<<"Studentul nu are nota de trecere: ";
urmat de nota studentului calculata dupa urmatoarele regului: se vor citii 3 numere de la tastatura. Acestea vor reprezenta 3 note separate. Se va calcula media aritmetica acelor 3 numere.
In cazul in care media > 6 studentul are nota de trecere, in caz contrar se va afisa mesajul "Studentul nu are nota de trecere: "
( Media celor 3 note va fi afisata cu 2 respectiv 6 zecimale). */
using namespace std;

int main()
{
    float a,b,c, ma;
    cin>>a>>b>>c;
    ma=(a+b+c)/3;
    if(ma>=6)
        cout<<"Studentul are nota de trecere: "<< ma;
    else
        cout<<"Studentul nu are nota de trecere: "<< ma;
    return 0;
}
