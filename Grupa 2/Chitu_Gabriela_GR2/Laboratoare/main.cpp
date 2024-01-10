#include <iostream>
#include <string>
#include <fstream>

using namespace std;




    struct tara {
    string denumire_localitate , nr_locuitori , suprafata ;
    char indice_localitate;
    };

    int main () {
    int n;
    cout<< " Introduceti numarul de orase :";
    cin>> n;


    tara a[50];
    for(int i=0;i<n;i++)
    {
        cout<<"Introduceti numele localitatii"<<i+1<<":";
        cin>>a[i].denumire_localitate;
        cout<<"Introduceti numarul de locuitori"<<i+1<<":";
        cin>>a[i].nr_locuitori;
        cout<<"Introduceti suprafata"<<i+1<<":";
        cin>>a[i].suprafata;
        cout<<"Introduceti indicele de apreciere economica globala"<<i+1<<":";
        cin>>a[i].indice_localitate;
    }

    ofstream g("Romania.txt");

    void afisare_vector(string * nr_locuitori, int n);
    void sortare_vector(string* nr_locuitori, int n);


    for(int i=0;i<n;i++) {
        g<<"Numele localitatii"<<i+1<<":"<<a[i].denumire_localitate<<endl;
        g<<"Numarul de locuitori"<<i+1<<":"<<a[i].nr_locuitori<<endl;
        g<<"Suprafata"<<i+1<<":"<<a[i].suprafata<<endl;
        g<<"Indicele de apreciere economica globala"<<i+1<<":"<<a[i].indice_localitate<<endl;

    }


    g.close();

    }
