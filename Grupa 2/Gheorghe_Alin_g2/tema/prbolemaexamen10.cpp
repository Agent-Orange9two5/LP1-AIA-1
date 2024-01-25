#include <iostream>
#include <fstream>
#include <string.h>
#include <new>
using namespace std;
int i,n,j;
struct oras{
    char nume[50];
    int locuitori, suprafata;
    char indice;
}*p;
void citire()
{
    cout<<"Introduceti numarul de orase: ";
    cin>>n;
    p = new (nothrow) oras[n];
    if(p == nullptr)
        cout<<"Eroare la alocarea memoriei";
    for(i=0;i<n;i++)
   {
       cout<<"Introduceti numele orasului cu numarul "<<i+1<<": ";
       cin >> p[i].nume;
       cout<<"Introduceti numarul de locuitori al orasul cu numarul "<<i+1<<": ";
       cin >> p[i].locuitori;
       cout<<"Introduceti suprafata orasului cu numarul "<<i+1<<": ";
       cin >> p[i].suprafata;
       cout<<"Introduceti indicele orasului cu numarul "<<i+1<<": ";
       cin >> p[i].indice;
   }
}
    ofstream g("orase.txt");
void fisier()
{
    oras aux;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].locuitori>p[j].locuitori)
            {
            aux=p[i];
            p[i]=p[j];
            p[j]=aux;
            }
        }

    }
    for(i=0;i<n;i++)
     g<<p[i].nume<<" - "<<p[i].locuitori<< " - "<< p[i].suprafata<< " - "<< p[i].indice<<endl;

}
void locuitori()
{
    int s=0, nrmed;
    for(i=0;i<n;i++)
    {
        s =s + p[i].locuitori;
    }
    nrmed = s/n;
    g<<endl<<"Numarul mediu de locuitori este: "<<nrmed;
}
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

