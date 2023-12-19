// a) Creați o structură pentru a reprezenta un contact în agenda telefonică, conținând numele, numărul de telefon și adresa de e-mail.
//b) Citirea a n contacte de la tastatură (n ≤ 20), stocarea acestora într-un vector și afișarea acestora pe ecran și într-un fișier numit "Agenda.txt".

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ofstream g("Agenda.txt");
struct agendatelefonica {
    char nume[50];
    char numartel[10];
    char email[50];
}contacte[20];
int main()
{
    int i,n;
    cout << " Introduceti numarul de contacte: ";
    cin >> n;
    //for(i=1;i<=n;i++)
        // cin >> contacte[i];
    for(i=0;i<n;i++)
    {
        cout << "Introduceti numele persoanei " << i+1<< ":" ;
        cin >> contacte[i].nume;

        cout << "Introduceti numarul de telefon " << i+1 << ":";
        cin >> contacte[i].numartel;

        cout << "Introduceti adresa de email " << i+1 << ":";
        cin >> contacte[i].email;
    }
    for(i=0;i<n;i++)
       {
        g << contacte[i].nume << endl;
        g << contacte[i].numartel << endl;
        g << contacte[i].email <<  endl << endl;

       }
    g.close();
    return 0;
}
