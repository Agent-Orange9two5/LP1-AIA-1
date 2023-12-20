/*Problema 4
a) Generați aleator n numere întregi și stocați-le într-un vector.
b) Sortați aceste numere în ordine descrescătoare și afișați-le într-un fișier numit "NumereSortate.txt".
*/
#include <iostream>
#include <fstream>
using namespace std;

ofstream g("NumereSortate.txt");

void sort(float v[],int n){
    for(int i=0;i<n-1;i++)
     { for(int j=i+1;j<n;j++)
       if(v[i]<v[j])
       {float aux=v[i];
       v[i]=v[j];
       v[j]=aux;}}

      cout<<"NUMERELE ORDONATE DESCRESCATOR: ";
      for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
      g<<v[i]<<" ";}
      }

int main(){
int n;
int i=0;
cout<<"cate numere?";
cin>>n;

float* v=new float[n];

for(int i=0;i<n;i++)
cin>>v[i];

sort(v,n);
delete[] v;
    return 0;
}
