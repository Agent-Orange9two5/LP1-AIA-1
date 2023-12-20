/*Problema 1
a) Creați un vector cu n elemente întregi, unde n este citit de la tastatură. Inițializați vectorul cu numere întregi citite de la tastatură și calculați suma elementelor pare din vector.
b) Scrieți suma calculată a elementelor pare într-un fișier numit "SumaPare.txt".*/
#include <iostream>
#include <fstream>
using namespace std;
ofstream g("SumaPare.txt");

int main(){
    
int n,suma=0;
cout<<"cate elemente in vector?";
cin>>n;
int* v=(int*)malloc(n *sizeof(int));

for(int i=0;i<n;i++){
cout<<"Introduceti elemtul "<<i+1<<endl;
cin>>v[i];
if(v[i]%2==0)
suma+=v[i];}

cout<<suma;
g<<suma;
g.close();
free(v);
    return 0;
}
