#include <iostream>

using namespace std;

int main()
{
    //matrice 4/4, sa se afiseze elem de pe diag principala, elementele de sub
    // diag secundara, suma tuturr nume de 3 cifre din matrice
    int v[5][5],i,j,n, s=0;
    cin>>n;
    for (i=0; i<=n; i++)
        for (j=0; j<=n; j++)
            cin>>v[i][j];

    for (i=0;i<=n; i++){
        for (j=0; j<=n; j++) {
            if (i==j) {
                cout<<v[i][j]<<" ";

            }
            if (i+j==n-1 && i<j)  {
                cout<<v[i][j]<<" ";
            }

        }
    }

    for (i=0;i<=n; i++){
        for (j=0; j<=n; j++) {
            if (v[i][j]>99 && v[i][j]<1000) {
                s=s+v[i][j];
            }
        }
    }
    return 0;
}
