#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct contact
{
    string nume,email,nrtel;
};
int main()
{
    int n;
    cout<<"Introduceti numarul de contacte: ";
    cin>>n;
    contact c[21];
    for(int i=0; i<n; i++)
    {
        cout<<"Introduceti numele contactului "<<i+1<<": ";
        cin>>c[i].nume;
        cout<<"Introduceti adresa de email a contactului "<<i+1<<": ";
        cin>>c[i].email;
        cout<<"Introduceti numarul de telefon al contactului "<<i+1<<": ";
        cin>>c[i].nrtel;
    }
    ofstream g("Agenda.txt");
    for(int i=0; i<n; i++)
    {
        g<<"Nume "<<c[i].nume<<endl;
        g<<"Adresa de email: "<<c[i].email<<endl;
        g<<"Numar de telefon "<<c[i].nrtel<<endl;
    }
    g.close();
    return 0;
}
