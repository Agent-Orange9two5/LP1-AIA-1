/*
Problema 2
a) Citirea unei matrice pătratice de dimensiune n (n ≤ 10)
și calcularea sumei elementelor de pe diagonala principală
și a celei secundare.

b) Scrierea sumelor calculare într-un fișier numit "SumeDiagonale.txt".


00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/

#include <iostream>
#include <fstream>
using namespace std;

ofstream g("SumeDiagonale.txt");

int main()
{
    int n,i,j,s_pr=0, s_sec=0,a[101][101];

    cin>>n;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(i==j){
            s_pr+=a[i][j];
        }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j==n-1){
                s_sec+=a[i][j];
            }

            g<<s_pr<<endl;
            g<<s_sec;

            return 0;
}
