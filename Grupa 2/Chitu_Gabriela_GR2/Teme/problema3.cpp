//a) Creați o structură pentru a reprezenta un contact în agenda telefonică, conținând numele, numărul de telefon și adresa de e-mail.
//b) Citirea a n contacte de la tastatură (n ≤ 20), stocarea acestora într-un vector și afișarea acestora pe ecran și într-un fișier numit "Agenda.txt".


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct agenda {
    string nume, numar,adresa;
    };

int main()
{
    int n;
    cout<< "Introduceti numarul de contacte: ";
    cin>>n;

    agenda a[20];
    for(int i=0;i<n;i++)
        {
        cout<<"Introduceti numele contactului "<<i+1<<":";
    cin>>a[i].nume;
    cout<<"Introduceti numarul de telefon al contactului "<<i+1<<":";
    cin>>a[i].numar;
    cout<<"Introduceti adresa de email a contactului "<<i+1<<":";
    cin>>a[i].adresa;
    }

    ofstream g("Agenda.txt");

    for(int i=0;i<n;i++)
        {
        g<<"Numele contactului "<<i+1<<":"<<a[i].nume<<endl;
    g<<"Numarul de telefon al contactului "<<i+1<<":"<<a[i].numar<<endl;

    g<<"Adresa de email a contactului "<<i+1<<":"<<a[i].adresa;

        }

        g.close();

        return 0;
}
