#include <iostream>

using namespace std;

int main()
{ int a[4][4],i,j,n,s;
cout<<"Cate linii/coloane va avea matricea patratica: ";
cin>>n;
 cout<<"Citim matricea patratica: "<<endl;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>a[i][j];
    cout<<"Ëlementele de pe diagonala principala sunt:";
    if(i==j) cout<<a[i][j]<<" ";
    else if(i+j>n=1) cout<<"Elementele de sub diagonala secundara sunt:"<<a[i][j]<<" ";
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(a[i][j]>99) s=s+a[i][j];
    cout<<"Suma numerelor de 3 cifre este:"<<s;
    return 0;
}
