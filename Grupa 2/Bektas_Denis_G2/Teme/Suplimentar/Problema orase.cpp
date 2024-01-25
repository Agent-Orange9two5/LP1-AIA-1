/*
N orase citite de la tastatura cu caracteristicile din struct.
Programul va apela 4 functii care realizeaza:
- citirea de la tastatura a celor n localitati si plasarea lor intr un tablou alocat dinamic
- crearea fisierului care contine inregistrarile cu orasele si caracteristicile lor, ordonate crescator dupa numarul de locuitori
- calculul numarului mediu de locuitori pentru cele n localitati stocate in fisier se va face in programul principal
- citirea din fisier si afisarea la ecran a fiecarui oras si a caracteristicilor sale
*/
#include <iostream>
#include <fstream>
#include <cstring>
#include <new>

using namespace std;

struct Oras{
  string nume;
  int nr_loc;
  double suprafata;
  char indice_economic;
}*orase;

int i,n;
ofstream f("orase.txt");
ifstream g("orase.txt");

void citire_orase(){
    cout << "Cate orase doriti sa scrieti in fisier ?: ";
    cin >> n;
    orase = new (nothrow) Oras[n];
    if (orase==nullptr){
        cout << "Eroare: Nu s-a putut aloca memoria\a";
    }
    for (i=0; i<n; i++){
    cout << "Numele orasului "<<i+1<<": ";
    cin >> orase[i].nume;
    cout << "Numar de locuitori pentru " << orase[i].nume <<": ";
    cin >> orase[i].nr_loc;
    cout << "Suprafata " << orase[i].nume <<": ";
    cin >> orase[i].suprafata;
    cout << "Indicatorul economic A-E pentru " << orase[i].nume << " (A minim - E maxim): ";
    cin >> orase[i].indice_economic;
    cout << endl;
    }
}
void scriere_fisier(){

    for (i=0; i<n-1; i++){
            if (orase[i].nr_loc > orase[i+1].nr_loc) {
                swap(orase[i],orase[i+1]);
            }
    }
    for (i=0; i<n; i++){

         f << "Orasul "<<i+1<<"\n";
         f << "Nume: "<< orase[i].nume <<"\n";
         f << "Nr. locuitori: "<< orase[i].nr_loc<<"\n";
         f <<"Suprafata: "<< orase[i].suprafata<< "\n";
         f <<"Indicator economic: "<< orase[i].indice_economic<<endl;
         f <<endl;
    }
        if (!f.is_open()) {
            cout << "Eroare la deschiderea fisierului!\a"<<endl;
        }
            else
                cout << "Fisierul a fost deschis cu succes!\a"<<endl;
}

void medie_locuitori(){
  int s=0, nr_loc_mediu=0;
  cout << "Media locuitorilor din orasele introduse: ";
  for (i=0; i<n; i++){
    s += orase[i].nr_loc;
  }
  nr_loc_mediu = s/n;
  cout << nr_loc_mediu<<endl;
}

void citire_fisier(){
    string citireorase;
    while (getline (g, citireorase)){
        cout << citireorase <<endl;
    }
}

int main(){
citire_orase();
scriere_fisier();
f.close();
medie_locuitori();
citire_fisier();
g.close();
delete[] orase;
return 0;
}
