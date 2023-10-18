#include <iostream>

using namespace std;

int main()
{
 int i,j, m[4][4], dp[4], k=0, ds[4], p=0, t[16], l=0;

 cout<<"Introduceti matrice 4x4:";
 for(i=1;i<=4;i++)
    for(j=1;j<=4:j++)
       {cin>>m[i][j];
       if(i==j)
         dp[k++]=m[i][j];
       if(i+j==5)
         ds[p++]=m[i-1][j];
       if(m[i][j]>99 && m[i[j]<1000)
          t[l++]=m[i][j];
         }

 cout<<"Toate elementele de pe diagonala principala:";
 for(i=1;i<=4;i++)
    cout<<dp[i]<<" ";
    cout<<endl;

    cout<<"elem sub diag secundara";
for(i=1;i<5;i++)
    cout<<ds[i]<<" ";
 cout<<endl;
 cout<<"Suma elem de 3 cifre: ";
 for(i=1;i<=l;i++)
    cout<<t[i]<<" ";


    return 0;
}
