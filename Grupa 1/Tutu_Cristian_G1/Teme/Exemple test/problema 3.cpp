#include <iostream>
#include <fstream>
using namespace std;
struct agenda
{
    char nume[50],email[100];
    int numar;
}c[20];
int main()
{
    ofstream g("Agenda.txt");
    cout<<"Introduceti numarul de contacte: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Introduceti numele contactului "<<i+1<<": ";
        cin>>c[i].nume;
        cout<<"Introduceti numarul de telefon contactului "<<i+1<<": ";
        cin>>c[i].numar;
        cout<<"Introduceti adresa de email contactului "<<i+1<<": ";
        cin>>c[i].email;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Numele contactului "<<i+1<<": "<<c[i].nume<<"; Numarul de telefon al contactului "<<i+1<<": "<<c[i].numar<<"; Adresa de email al contactului "<<i+1<<": "<<c[i].email<<endl;
        g<<"Numele contactului "<<i+1<<": "<<c[i].nume<<"; Numarul de telefon al contactului "<<i+1<<": "<<c[i].numar<<"; Adresa de email al contactului "<<i+1<<": "<<c[i].email<<endl;
    }
    g.close();
    return 0;
}
