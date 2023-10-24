   /* matrice patratica 4/4
   sa se afiseze elem de pe diag principala, toate elem de sub diagonala secundara, suma tuturor elem de 3 cifre*/

#include <iostream>

using namespace std;

int main()
{
   int a[10][10],n,v[100],i,j,s=0;
   cout<<"Cate linii/coloane va avea matricea patratica: ";
   cin>>n;
   cout<<"Citim matricea patratica: "<<endl;
   for(i=0;i<n;i++)
    for(j=0;j<n;j++) cin>>a[i][j];
    cout<<endl;
}
