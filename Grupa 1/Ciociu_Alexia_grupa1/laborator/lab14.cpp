#include <iostream>
#include<fstream>
using namespace std;
struct oras
{
    char denumire[30];
    int nr_loc;
    float suprafata ;
    char indice;

}x;
int main()
{int n,v[100],i,aux,j,s,ma;
ofstream f("orase.txt");
cout<<"Introduceti numarul de orase: ";
cin>>n;
oras x[n];
for(i=0;i<n;i++)
{
    cout<<endl<<"Numele orasului este: ";
    cin>>x[i].denumire;
    cout<<endl<<"Numarul de locuitori: ";
    cin>>x[i].nr_loc;
    cout<<endl<<"Suprafata: ";
    cin>>x[i].suprafata;
    cout<<endl<<"Indicele este: ";
    cin>>x[i].indice;
    s+=x[i].nr_loc;
}
for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++) {
        if(x[i].nr_loc>x[j].nr_loc) {aux=x[i].nr_loc;
                                     x[i].nr_loc=x[j].nr_loc;
                                     x[j].nr_loc=aux;}

        }
        ma=s/n;
    for(i=0;i<n;i++)
    {f<<endl<<"Orasul: "<<x[i].denumire;
    f<<endl<<"Numarul de locuitori: "<<x[i].nr_loc;
    f<<endl<<"Suprafata: "<<x[i].suprafata;
    f<<endl<<"Indicele: "<<x[i].indice;
    }
 cout<<"Media este: "<<ma;


    return 0;
}
