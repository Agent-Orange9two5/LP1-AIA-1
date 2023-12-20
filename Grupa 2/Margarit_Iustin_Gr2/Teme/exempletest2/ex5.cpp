/*Problema 5
a) Creați un program care primește de la tastatură un număr n și apoi citește n șiruri de caractere de lungime variabilă. Stocați aceste șiruri într-un vector și afișați-le sortate în ordine alfabetică.
b) Scrieți aceste șiruri sortate într-un fișier text numit "SiruriSortate.txt".
*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct siruri{string s;};

void sort(siruri v[],int n){
    string a;
for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
  if(v[i].s>v[j].s)
     {a=v[i].s;
     v[i].s=v[j].s;
     v[j].s=a;}

cout<<"\nSirurile ordonate alfabetic: ";
cout<<v[0].s;
    for(int i=1;i<n;i++)
    cout<<" , "<<v[i].s<<" "; }

int main(){

int n;
cout<<"cate siruri?";
cin>>n;
siruri* v=new siruri[n];

for(int i=0;i<n;i++){
cout<<"adaugati sirul "<<i+1<<endl;
cin>>v[i].s;}
  
sort(v,n);
    return 0;
}
