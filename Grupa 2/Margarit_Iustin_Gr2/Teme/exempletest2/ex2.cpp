/*Problema 2
a) Citirea unei matrice pătratice de dimensiune n (n ≤ 10) și calcularea sumei elementelor de pe diagonala principală și a celei secundare.
b) Scrierea sumelor calculare într-un fișier numit "SumeDiagonale.txt".
*/
#include <fstream>
#include <iostream>
using namespace std;

ofstream g("SumeDiagonale.txt");

int main(){

int i,j,n,sump=0,sums=0;
cout<<"Introducti dimensiune matrice: "<<endl;
cin>>n;

int** H=(int**)malloc(n * sizeof(int*));

for(i=0;i<n;i++){
H[i]=(int*)malloc(n*sizeof(int*));
    for(j=0;j<n;j++){
cout<<"Introduceti valoarea pentru H["<<'['<<i+1<<']'<<'['<<j+1<<']'<<endl;
cin>>H[i][j];
     if (i==j)
     sump+=H[i][j];

     if(i+j==n-1)
     sums+=H[i][j];
}}

for ( i = 0; i < n; i++) 
        free(H[i]);

free(H);

g<<"suma diagonala principala: "<<sump<<endl<<"suma diagonala secundara: "<<sums;
g.close();
    return 0;
}
