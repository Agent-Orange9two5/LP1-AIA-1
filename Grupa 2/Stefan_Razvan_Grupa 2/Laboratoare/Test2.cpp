  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ofstream g("NumeFisier.txt");

// Cream structul elev
struct Elev{
    string nume;
    string prenume;
    int varsta;
    int anStudiu;
}x;

int main()
{
    // Utilizare variabile
        // i - contor care parcurge vectorul de date
        // n - variabila care reprezinta cati elevi vor fi afisati atat pe ecran, cat si in fisier
    int i,n;

    cout<<"Cati elevi doriti sa introducem?"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
       cout<<"Introduceti datele elevului cu numarul: "<<i+1<<endl;
       cout<<"Numele este: ";
       cin>>x.nume;
       cout<<"Prenumele este: ";
       cin>>x.prenume;
       cout<<endl;
       cout<<"Varsta elevului este: ";
       cin>>x.varsta;
       cout<<endl;
       cout<<"Anul de studiu al elevului este: ";
       cin>>x.anStudiu;

        cout<<"Nume: "<<x.nume<<endl;
        cout<<"Prenume: "<<x.prenume<<endl;
        cout<<"Varsta: "<<x.varsta<<endl;
        cout<<"Anul de studiu: "<<x.anStudiu<<endl;

        g<<"Nume: "<<x.nume<<endl;
        g<<"Prenume: "<<x.prenume<<endl;
        g<<"Varsta: "<<x.varsta<<endl;
        g<<"Anul de studiu: "<<x.anStudiu<<endl;
    }

    for(i=0;i<n;i++)
    {

    }
    return 0;

}
