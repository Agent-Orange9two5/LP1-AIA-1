// Se da fisierul inregistrari.txt. Fisieru are pe primul rand un numar intreg n care defineste numarul de cursanti inscrisi la curs. Pe baza acestui fisier:
// a. Se defineste o structura de date cu numele cursant corespunzatoare datelor continute in fisier.
// b. Creati o functie pentru salvarea datelor din fisier intr-un array cu n elemente de tipul structurii definite anterior.
// c. Creati o functie pentru afisarea datelor din array-ul de structuri.
// a1. Creati o functie care permite afisarea datelor cursantilor in ordine alfabetica dupa nume.
// b1. Creati o functie care, pe baza informatiilor din CNP extrage data nasterii
// c1. Creati o functie care scrie intr-un fisier numit procesate.txt datele din array-ul de structuri, adaugand data nasterii, media celor doua note si textul ADMIS/RESPINS comparand cu media 5.
// a2. Creati o functie care permite adaugarea unui cursant la sfarsitul fisierului inregistrari.txt. (trebuie modificat si numarul de cursanti scris pe prima linie
// b2. Creatie o functie care permite calcularea varstei unui cursant pe baza informatiilor din CNP.

#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxim_cursanti = 60;

struct cursant{
    string nume;
    long long int CNP;
    float nota1, nota2;
};

cursant cursant1[maxim_cursanti];
int n,i;

void vec()
{
    ifstream f("inregistrari.txt");
    f >> n;
    for(i=0;i<n;i++)
    {
        f >> cursant1[i].nume >> cursant1[i].CNP  >> cursant1[i].nota1 >> cursant1[i].nota2;
    }
    f.close();
}

void afisare_vec()
{
    for(i=0;i<n;i++)
    {
        cout << " Numele cursantului " << i+1 << " este: " << cursant1[i].nume << endl;
        cout << " CNP-ul cursantului " << i+1 << " este: " << cursant1[i].CNP << endl;
        cout << " Prima nota a cursantului " << i+1 << " este: " << cursant1[i].nota1 << endl;
        cout << " A doua nota a cursantului " << i+1 << " este: " << cursant1[i].nota2 << endl;
        cout << endl;
    }
    }
void ordinealfabetica()
{
    cursant aux;
   for(i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
        {
            if(cursant1[j].nume > cursant1[j+1].nume)
            {
                swap(cursant1[j], cursant1[j+1]);
            }
        }
    }
   cout << " Cursantii in ordine alfabetica sunt: " << endl;
   for (i=0;i<n;i++)
       {
           cout <<" " << cursant1[i].nume << endl;
       }
}

void dataNasterii()
{
    int zi, luna, an;
    for(i=0;i<n;i++)
    {
        long int CNP = cursant1[i].CNP;
        zi = CNP / 100000000;
        luna = CNP / 1000000000000;    // IMI FUG OCHII DE LA ZEROURI, NU MERGE FUNCTIA ASTA
        an = CNP / 1000000000000;
    }
    for(i=0;i<n;i++)
   {
    cout << " Data nasterii a cursantului " << i+1 << " este: " << zi << luna << an;
    }
}

// AR TREBUI CONTINUATA DE LA C1

int main()
{
    vec();
    afisare_vec();
    ordinealfabetica();
    dataNasterii();
    return 0;
}
