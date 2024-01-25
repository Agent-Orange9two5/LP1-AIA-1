/*
N orase citite de la tastatura cu caracteristicile din struct.
Programul va apela 4 functii care realizeaza:
- citirea de la tastatura a celor n localitati si plasarea lor intr un tablou alocat dinamic
- crearea fisierului care contine inregistrarile cu orasele si caracteristicile lor, ordonate crescator dupa numarul de locuitori
- calculul numarului mediu de locuitori pentru cele n localitati stocate in fisier se va face in programul principal
- citirea din fisier si afisarea la ecran a fiecarui oras si a caracteristicilor sale
*/
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

struct Oras{
  string nume;
  int nr_loc;
  double suprafata;
  char indice_economic;
};

bool sortaredupaloc(const Oras&a, const Oras&b){
    return a.nr_loc < b.nr_loc;
}

int main()
{
    int n;
    cout << "Introduceti numarul de orase: ";
    cin >> n;
    Oras* orase = new Oras[n];


    for (int i=0; i<n; i++){

        cout << "Numele orasului " << i+1 << ": ";
        cin >> orase[i].nume;

        cout << "Numarul de locuitori pentru "<< orase[i].nume << ": ";
        cin >> orase[i].nr_loc;

        cout << "Suprafata "<< orase[i].nume << ": ";
        cin >> orase[i].suprafata;

        cout << "Indicatorul economic pentru " << orase[i].nume <<"(Rang intre A-E; A=minim, E=maxim)"<< ": ";
        cin >> orase[i].indice_economic;

        cout <<endl;
    }
    cout << endl;

        cout << "Media locuitorilor pentru orasele de mai sus: ";
        int total_nr_loc = 0;
        for (int i=0; i<n; i++){
            total_nr_loc += orase[i].nr_loc;
        }
        cout << double(total_nr_loc)/n;
        cout << endl;


      ofstream fout("orase.txt");

      if (fout.is_open()){
            sort (orase, orase+n, sortaredupaloc);
        cout << "Fisierul a fost deschis cu succes!"<<endl;

        for (int i=0; i<n; i++){
         fout << "Orasul "<<i+1<<"\n";
         fout << "Nume: "<< orase[i].nume <<"\n";
         fout << "Nr. locuitori: "<< orase[i].nr_loc<<"\n";
         fout <<"Suprafata: "<< orase[i].suprafata<< "\n";
         fout <<"Indicator economic: "<< orase[i].indice_economic<<endl;
         fout <<endl;
        }
        fout.close();
        }
        else {
            cout << "Eroare la deschiderea fisierului!"<<endl;
        }

    string citireorase;
    ifstream fin("orase.txt");
    while (getline (fin, citireorase)){
        cout << citireorase <<endl;
    }

 delete[] orase;
 return 0;

}
