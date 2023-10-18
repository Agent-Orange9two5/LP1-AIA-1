
#include <iostream>
using namespace std;
int main()
{
   int v[4][4],i,j,n;
   //sa se afiseze elem de pe diagonala principala,elementele de sub diagonala secundara,suma tuturor nr de 3 cifre
   cout<<"Cate linii/coloane va avea matricea patratica: ";
   cin>>n;
   cout<<"Citim matricea patratica: "<<endl;
   for(i=0;i<n;i++) {
    for(j=0;j<n;j++) cin>>a[i][j];
    cout<<endl;
    if (i==j) cout<<"ELEM DE PE DIAGONALA PRINCIPALA SUNT"<<a[i][j];
   }
    
