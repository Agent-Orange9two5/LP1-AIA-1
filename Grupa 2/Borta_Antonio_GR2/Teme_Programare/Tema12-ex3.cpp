#include <iostream>
#include <fstream>

using namespace std;

struct Contact
{
    int long nrtelefon;
    char nume[50], adresamail[50];
};

Contact a[20];
int main()
{
    ofstream file("Agenda.txt");
    int n, i;
    cout << "Introduceti numarul de contacte: ";
    cin >> n;
    cout << "Introduceti datele de contact: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Nume: ";
        cin >> a[i].nume;
        cout << endl;
        cout << "Nr de telefon: ";
        cin >> a[i].nrtelefon;
        cout << endl;
        cout << "Adresa mail: ";
        cin >> a[i].adresamail;
        cout << endl;
    }
    file << "Agenda este: " << endl;
    for(i = 0; i < n; i++)
    {
    file << a[i].nume << " ";
    file << a[i].nrtelefon <<" ";
    file << a[i].adresamail << endl;
    }

    file.close();

    return 0;
}
