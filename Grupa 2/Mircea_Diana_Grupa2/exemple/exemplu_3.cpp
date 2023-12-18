/*Creați o structură pentru a reprezenta un contact în agenda telefonică, conținând numele, numărul de telefon și adresa de e-mail.
b) Citirea a n contacte de la tastatură (n ≤ 20), stocarea acestora într-un vector și afișarea acestora pe ecran și într-un fișier numit "Agenda.txt".*/
#include <iostream>
#include <fstream>
using namespace std;
struct contact
{
    char nume[100],email[100];
    int nrtel;
};
int main()
{
    int n,i;
    ofstream g("Agenda.txt");
    cin>>n;
    contact contagenda[20];
    for(i=0;i<n;i++)
    {
        cout<<"Introduceti nume agenda ";
        cin>>contagenda[i].nume;
        cout<<"Introduceti numar telefon ";
        cin>>contagenda[i].nrtel;
        cout<<"Introduceti email ";
        cin>>contagenda[i].email;
    }
    for(i=0;i<n;i++)
    {
        g<<contagenda[i].nume<<"-"<<contagenda[i].nrtel<<"-"<<contagenda[i].email<<endl;

    }
    return 0;
}
