// Se citesc de la tastatura un numar n de orase si pentru fiecare oras se precizeaza urmatoarele caracteristici:
// - denumirea localitatii (orasului);
// - numarul de locuitori;
// - suprafata;
// - un indice de apreciere economica globala (A, B, C, D, si E cu A reprezentand minimul).
// Programul va apela 4 functii care realizeaza:
// a) citirea de la tastatura a celor n localitati si plasarea lor intr-un tablou alocat dinamic;
// b) crearea fisierului care contine inregistrarile cu orasele si caracteristicile lor, ordonate crescator dupa numarul de locuitori;
// c) calculul numarului mediu de locuitori pentru cele n localitati stocate in fisier;
// d) citirea din fisier si afisarea la ecran a fiecarui oras si a caracteristicilor sale.
// Afisarea numarului mediu de locuitori pentru cele n localitati se va face in programul principal.

#include <iostream>
#include <fstream>
#include <cstring>
#include <new>
using namespace std;

int n, i;

struct oras{
    string nume;
    int numarLocuitori;
    int suprafata;
    char indice;
}*p;

void citire()
{
   cout << " Introduceti numarul de orase: ";
   cin >> n;
   p = new (nothrow) oras[n];
   if(p == nullptr)
   {
       cout << " Nu s-a putut aloca memorie.";
   }

   for(i=0;i<n;i++)
   {
       cout << " Introduceti numele orasului cu numarul " << i+1 << ": ";
       cin >> p[i].nume;
       cout << " Introduceti numarul de locuitori pe care il are orasul cu numarul " << i+1 << ": ";
       cin >> p[i].numarLocuitori;
       cout << " Introduceti suprafata orasului cu numarul " << i+1 <<": ";
       cin >> p[i].suprafata;
       cout << " Introduceti indicele de apreciere economica al orasului cu numarul " << i+1 <<": ";
       cin >> p[i].indice;
   }
}

ofstream g("Orase.txt");

void fisier()
{
    for(i=0;i<n-1;i++)
    {
        if(p[i].numarLocuitori > p[i+1].numarLocuitori)
            swap(p[i], p[i+1]);

    }
    for(i=0;i<n;i++)
     g << p[i].nume << " - " << p[i].numarLocuitori << " - " << p[i].suprafata << " - " << p[i].indice << endl;
}

void media()
{
    int s=0, numarMediu;
    for(i=0;i<n;i++)
    {
        s += p[i].numarLocuitori;
    }
    numarMediu = s/n;
    g << endl << " Numarul mediu de locuitori este: " << numarMediu;
}

int main()
{
    citire();
    fisier();
    media();
    delete[] p;
    g.close();
    return 0;
}

