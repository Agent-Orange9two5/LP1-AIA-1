/*
Se citesc de la tastatura un numar n de orase si pentru fiecare oras se precizeaza urmatoarele
caracteristici:
- denumirea localitatii (orasului);
- numarul de locuitori;
- suprafata;
- un indice de apreciere economica globala (A, B, C, D, si E cu A reprezentand minimul).
Programul va apela 4 functii care realizeaza:
a) citirea de la tastatura a celor n localitati si plasarea lor intr-un tablou alocat dinamic;
b) crearea fisierului care contine inregistrarile cu orasele si caracteristicile lor, ordonate
crescator dupa numarul de locuitori;
c) calculul numarului mediu de locuitori pentru cele n localitati stocate in fisier;
d) citirea din fisier si afisarea la ecran a fiecarui oras si a caracteristicilor sale.
Afisarea numarului mediu de locuitori pentru cele n localitati se va face in programul principal.
Sa se creeze un proiect in care functiile mentionate mai sus sunt stocate intr-o biblioteca statica de
tip .lib, iar programul principal foloseste aceasta biblioteca.
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <new>

using namespace std;

int i,n;


struct oras{
string numeOras;
int nrLocuitori;
int suprafata;
char economie;
}*p;


void citire()
{
   cout<<"Introduceti numarul de orase: ";
   cin>>n;
   p = new (nothrow) oras[n];
   if(p == nullptr)
   {
       cout<<"Eroare la alocarea memoriei!";
   }
   for(i=0;i<n;i++)
   {
       cout<<"Introduceti numele orasului cu numarul "<<i+1<<": ";
       cin >> p[i].numeOras;
       cout<<"Introduceti numarul de locuitori pe care il are orasul cu numarul "<<i+1<<": ";
       cin >> p[i].nrLocuitori;
       cout<<"Introduceti suprafata orasului cu numarul "<<i+1<<"(exprimata in km2): ";
       cin >> p[i].suprafata;
       cout<<"Introduceti indicele de apreciere economica al orasului cu numarul "<<i+1<<"(Este exprimat cu litere de la A la E, A fiind cel mai mic): ";
       cin >> p[i].economie;
   }
}
ofstream g("Orase.txt");
void fisier()
{
    oras aux;
    for(i=0;i<n - 1;i++)
    {
        if(p[i].nrLocuitori > p[i+1].nrLocuitori)
        {
            //Am modificat aici ca sa se modifice toata linia. Am scos de la p[i] .nrLocuitori.
            aux = p[i];
            p[i] = p[i+1];
            p[i+1] = aux;
            //swap(p[i], p[i+1]); (Intr-o linie de cod ce e mai sus)
        }
    }
    for(i=0;i<n;i++)
     g<<p[i].numeOras<<" - "<<p[i].nrLocuitori<< " - "<< p[i].suprafata<< " - "<< p[i].economie<<endl;
}
void locuitori()
{
    int s=0, nrMediu;
    for(i=0;i<n;i++)
    {
        s += p[i].nrLocuitori;
    }
    nrMediu = s/n;
    g<<endl<<"Numarul mediu de locuitori este: "<<nrMediu;
}
//Am adaugat functia citire_fisier.
void citire_fisier(){
    char citire;
    ifstream f("Orase.txt");
    if (!f.is_open()){
        cout<<"Eroare la deschiderea fisierului!"<<endl;
    }
    cout<<endl<<" Toate orasele introduse in fisier sunt (si numarul mediu de locuitori) :"<<endl;
    while(f.get(citire)){
        cout<< citire;
    }
    cout<<endl;
    f.close();
}
int main()
{
    citire();
    fisier();
    locuitori();
    delete[] p;
    g.close();
    citire_fisier();
    return 0;
}

// Radu regele rezolva problema.
// Radu putrezitul a rezolvat doar doua bug-uri mici. O problema legata de sortare si una legata de fisiere. <3 (totusi apreciez efortul lui oricat de mic)
