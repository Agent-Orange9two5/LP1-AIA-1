/*
00 01 02 03                                     
10 11 12 13 
20 21 22 23   
30 31 32 33 
||
||
33 23 13 03
32 22 12 02
31 21 11 01
30 20 10 00 

Observatii : 
Normal - i = crescator de sus in jos ; j = crescator de la stanga la dreapta
Simetric - i = descrescator de la stanga la dreapta ; j = descrescator de sus in jos

Conform observatiilor, vom construi simetricul matricei initiale.
*/

#include <iostream>
using namespace std;

int main(){
    int a[101][101], i, j, b[101][101], n;

    cin>>n;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        cin>>a[i][j];

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            b[i][j]=a[n-1-j][n-1-i];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
