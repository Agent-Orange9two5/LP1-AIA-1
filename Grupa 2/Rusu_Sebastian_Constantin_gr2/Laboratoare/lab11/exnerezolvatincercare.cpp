#include <iostream>
#include <fstream>
using namespace std;

struct oras{
    string nume;
    int pop;
    int sup;
    char indice;
    int mpop;
};

int n, i;
oras a[100];oras b;

void introducereOrase()
{
    cout<<"Cate orase doriti sa introduceti"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Care este numele orasului?"<<endl;
        cin>>a[i].nume; (string*)malloc(sizeof(string));
        cout<<"Care este populatia orasului?"<<endl;
        cin>>a[i].pop; (int*)malloc(sizeof(int));
        cout<<"Care este suprafata orasului?"<<endl;
        cin>>a[i].sup; (int*)malloc(sizeof(int));
        cout<<"Care este indicele de apreciere economica globala?"<<endl;
        cin>>a[i].indice; (char*)malloc(sizeof(char));
    }
}

void sortare()
{
    for(i=0;i<n;i++){
        if(a[i].pop>a[i-1].pop){
            a[i-1]=b;
            a[i-1]=a[i];
            a[i]=b;
        }
    }
}
void mediePop()
{
     for(i=0;i<n;i++){
        a[i].mpop=a[i].pop/a[i].sup;
     }
}

void scriereFisier()
{
    ofstream f("orasele.txt");
    for(i=0;i<n;i++){
        f<<"Numele orasului: "<<a[i].nume<<endl;
        f<<"Populatia orasului: "<<a[i].pop<<endl;
        f<<"Suprafata orasului: "<<a[i].sup<<"m^2"<<endl;
        f<<"Indicele de apreciere economica globala: "<<a[i].indice<<endl;
        //f<<"Media locuitorilor: "<<a[i].mpop<<endl;
        f<<endl;
    }
    f.close();
}

void afisareFisier()
{
    ifstream("orasele.txt");
   // while(){

   // }
//    f.close();
}

int main()
{
    introducereOrase();
    sortare();
    mediePop();
    scriereFisier();
    afisareFisier();
    return 0;
}
