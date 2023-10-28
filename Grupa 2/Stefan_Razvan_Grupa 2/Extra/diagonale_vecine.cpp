/*
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/

/* i==j => diag principala */
/* i-j==1 => diag vecina jos */
/* j-1==1 => diag vecina sus */

#include <iostream>
using namespace std;

int main(){
    int n,a[101][101],i,j,s=0;
        /*
        n - numarul de linii & coloane
        a[][] - matricea
        i & j - contori cu care parcurgem liniile, respectiv coloanele
        s - variabila in care retinem suma
        */

     //citim liniile si coloanele
    cin>>n;

        //citim matricea
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];


            //conform schitei de mai sus, accesam elementele din diagonalele vecine cu diagonala principala si calculam suma acestor elemente
         for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i-j==1 || j-1==1)
            s+=a[i][j];

                //afisam suma
            cout<<s;

            return 0;
}
