/*
00 01 02 03                                     
10 11 12 13 
20 21 22 23   
30 31 32 33

Afisare (conform index): 00 10 01 02 11 20 30 21 12 30 13 22 31 32 23 33  

Observatii:
I.
- 1st phase: Afiseaza toate elementele cu suma = 0
- 2nd phase: Afiseaza toate elementele cu suma = 1
- 3rd phase: Afiseaza toate elementele cu suma = 2
- 4th phase: Afiseaza toate elementele cu suma = 3
- 5th phase: Afiseaza toate elementele cu suma = 4
- 6th phase: Afiseaza toate elementele cu suma = 5
- 7th phase: Afiseaza toate elementele cu suma = 6

II.
Folosim o variabila care tine cont de paritatea diagonalei. Daca contorul diagonalei este par, 
afisarea se face din coltul stanga sus -> coltul dreapta jos. In caz contrar, afisarea se face
invers. In acest fel, se va crea efectul de serpuire.
*/

#include <iostream>
using namespace std;

int main(){
    int a[101][101],n,i,j,k;

    cin>>n;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        cin>>a[i][j];

    for(k=0; k<n; k++)
    {
        if(k%2==0)
        {
            for(i=0; i<=k; i++)
            {
                cout<<a[i][k-i]<<" "; 
            }
        }
        else{
            for(i=k; i>=0; i--)
            {
                cout<<a[i][k-i]<<" ";
            }
        }
    }

    for(k=n-2; k>=0; k--){
        if(k%2 == 1){
            for(i=0; i<=k; i++){
                cout<<a[n-i-1][n-k+i-1]<<" ";
            }
        } else{
            for(i=k; i>=0; i--){
                cout<<a[n-i-1][n-k+i-1]<<" ";
            }
        }
    }
    return 0;
}
