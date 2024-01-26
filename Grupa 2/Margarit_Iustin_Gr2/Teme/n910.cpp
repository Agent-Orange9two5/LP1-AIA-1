#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct orase{
char denumire[30],indice[1];
int locuitori;
float suprafata;
};
vector<orase> O;

ofstream gin("Date_Orase.txt");
ifstream fin("Date_Orase.txt");

void citire(){
    
int n;
cout<<"Numarul de orase: "<<endl;
cin>>n;
O.resize(n);

for (int i=0;i<n;i++){
    cout<<"\nDate oras "<<i+1<<endl<<"Denumire: ";
    cin>>O[i].denumire;
   
    cout<<"Numarul de locuitori: ";
    cin>>O[i].locuitori;

    cout<<"Suprafata: ";
    cin>>O[i].suprafata;

    cout<<"Indice economic (A, B, C sau D): "<<endl;
    cin>>O[i].indice;}
  }

int dupaloc(const orase& x,const orase& y)
{return x.locuitori<y.locuitori;}

void fisier(){

if(!gin.is_open())
cout<<"Fisierul Date_Orase.txt nu s-a deschis";

sort(O.begin(),O.end(),dupaloc);

gin<<"Orase ordonate crescator dupa numarul de locuitori: \n\n";
for(int i=0;i<O.size();i++)
gin<<O[i].denumire<<" are "<<O[i].locuitori<<" locuitori, o suprafata de "<<O[i].suprafata<<" km^2 si indicele economic "<<O[i].indice<<endl;
}

int medie(){
float s=0;
for(int i=0;i<O.size();i++)
s=s+O[i].locuitori;

gin<<"\nNumarul mediu de locuitori pentru cele "<<O.size()<<" orase este: "<<s/O.size();
return s/O.size();
}

void continut(){
string s;
while(getline(fin,s)){
cout<<s<<endl;}
}

int main(){

citire();
fisier();
cout<<"Numarul mediu de locuitori: "<<medie()<<"\n\n";
continut();
gin.close();
fin.close();
    return 0;
}
