#include <iostream>
#include <fstream>
using namespace std;


struct orase{
string denumire,indice,locuitori,suprafata;

};


void citire(orase v[],int n){
int i,j;

string** H=new string*[n];
 for(i=0;i<n;i++)
    H[i]=new string[n];

for(i=0;i<n;i++)
{
    cout<<"INFO ORAS "<<i+1<<endl;

    cout<<"Denumire: ";
    cin.ignore();
    getline(cin,v[i].denumire);


    cout<<"Numar de locuitori: "<<endl;
    getline(cin,v[i].locuitori);

    cout<<"Suprafata de: "<<endl;
    cin.ignore();
    getline(cin,v[i].suprafata);

    cout<<"Indice de apreciere globala(A,B,C,D sau E)"<<endl;
    getline(cin,v[i].indice);
}

for(i=0;i<n;i++)
    for(j=0;i<n;j++)
        H[i][j]=v[i].denumire;

}

int fisier(orase v[],int n){
ofstream g("Orase.txt");
int i,j;
string s[n];


 for(i=0;i<n;i++){
   s[i]=v[i].denumire+", "+v[i].locuitori+", "+v[i].suprafata+", "+v[i].indice;

cout<<s[0];
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(v[i].locuitori>v[j].locuitori)
      {string aux=s[i];
        s[i]=s[j];
        s[j]=aux;}

    for(i=0;i<n;i++)
    {g<<s[i]<<endl;
    cout<<s[i]<<endl;}

 }
return 0;
}





int main()
{
    int n,i,j;
    cout<<"cate orase? ";
    cin>>n;
 orase* v=new orase[n];


 citire(v,n);
 fisier(v,n);


    return 0;
}
