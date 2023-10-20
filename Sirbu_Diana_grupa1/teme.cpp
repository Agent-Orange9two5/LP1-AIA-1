#include <iostream>

using namespace std;

int main()
{
    int a[10][10],n,i,j,suma=0,inv,k,v1[2],v2[2],v3[2],v4[2];
   cout<<"Cate linii/coloane va avea matricea patratica: ";
   cin>>n;
   cout<<"Citim matricea patratica: "<<endl;
   for(i=0;i<n;i++)
    for(j=0;j<n;j++) cin>>a[i][j];

     cout<<"elem de pe diagonala principala sunt: ";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(i==j)
    {
       cout<<a[i][j]<<" ";
    }
    cout<<endl<<"elem palindrome de pe diagonala principala sunt: ";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(i==j)
        {
       k=a[i][j];
            inv=0;
            if(a[i][j]>9)
            {
            while(k)
            {
                inv=inv*10+k%10;
                k/=10;
            }
            if(inv==a[i][j]) cout<<inv<<" ";
            }
            }

    cout<<endl<<"elem de pe diagonala secundara in ordine normala sunt: ";

    for(i=0;i<n;i++)
    {
        cout<<a[i][n - i - 1] << " ";
    }
    cout<<endl<<"elem de pe diagonala secundara in ordine inversa sunt: ";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i][n - i - 1] << " ";
    }
    cout<<endl<<"elem de deasupra diagonalei secundare sunt: ";
    for(i=0;i<=n-2;i++)
    for(j=0;j<=n-2-i;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl<<"suma elem de deasupra diagonalei secundare sunt: ";
    for(i=0;i<=n-2;i++)
    for(j=0;j<=n-2-i;j++)
    {
        suma+=a[i][j];
    }
    cout<<suma<<endl;
    cout<<"primul vector: ";
    k=0;
    for(j=1;j<=n-1;j++)
    {
        v1[k]=a[0][j];
        k++;
    }
    for(k=0;k<2;k++)
        cout<<v1[k]<<" ";
    cout<<endl<<"al doilea vector: ";
    k=0;
    for(i=1;i<=n-1;i++)
    {
        v2[k]=a[i][n-1];
        k++;
    }
    for(k=0;k<2;k++)
        cout<<v2[k]<<" ";
    cout<<endl<<"al treilea vector: ";
    k=0;
    for(j=1;j<=n-1;j++)
    {
        v3[k]=a[n-1][j];
        k++;
    }
    for(k=0;k<2;k++)
        cout<<v3[k]<<" ";
    cout<<endl<<"al patrulea vector: ";
    k=0;
    for(i=1;i<=n-1;i++)
    {
        v4[k]=a[i][0];
        k++;
    }
    for(k=0;k<2;k++)
        cout<<v4[k]<<" ";
    return 0;
}

