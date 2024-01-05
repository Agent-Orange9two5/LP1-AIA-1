/*
Struct care contine datele unui elev. Daca media elevului este >= 6, intr-un fisier vor fi afisate numele si prenumele acestuia.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream g("Medii6.txt");

struct Elev
{
    string nume, prenume;
    char adresa[256];
    int cnp, nota1, nota2, nota3, medie;
} e;

int main()
{
    int x, i;
    cout << "Introduceti numarul de elevi: ";
    cin >> x;

    for (i = 0; i < x; i++)
    {
        cout << "Introduceti datele elevului cu numarul " << i + 1 << ": " << endl;

        cout << "Nume: ";
        cin >> e.nume;
        cout << endl;

        cout << "Prenume: ";
        cin >> e.prenume;
        cout << endl;

        cout << "CNP: ";
        cin >> e.cnp;
        cout << endl;

        cin.ignore();

        cout << "Adresa: ";
        cin.get(e.adresa, 256);
        cout << endl;

        cout << "Nota 1: ";
        cin >> e.nota1;
        cout << endl;

        cout << "Nota 2: ";
        cin >> e.nota2;
        cout << endl;

        cout << "Nota 3: ";
        cin >> e.nota3;
        cout << endl;

        e.medie = (e.nota1 + e.nota2 + e.nota3) / 3;

        if (e.medie >= 6)
        {
            g << e.nume << " " << e.prenume << endl;

        e.medie = 0;
    }

    g.close();
    return 0;
    }
}
