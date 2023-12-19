//a) Citirea unei matrici patratice de dimensiune n (n=<10) si calcularea sumei elementelor de pe diagonala principala si a celei secundare.
//b) scrierea sumelor calculate intr-un fisier numit "Sume.Diagonale.txt"

#include <iostream>
#include <fstream>

using namespace std;
ofstream g("SumeDiagonale.txt");

int main()
{
    int a[10][10],i,j,s1=0,s2=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>a[i][j];

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i==j)
    s1=s1+a[i][j];
    g<<s1;

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i+j==n-1)
    s2=s2+a[i][j];
    g<<s2;


}
