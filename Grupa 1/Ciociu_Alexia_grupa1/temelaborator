#include <iostream>
using namespace std;
int a[4][4],i,j,x,nri=0,n,aux,s;
int main()
{cout<<"Introduceti numarul de linii"<<endl;
cin>>n;
cout<<"Introduceti matricea:"<<endl;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
cout<<"Elementele de pe diagonala principala sunt:";
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     if(i==j) cout<<a[i][j]<<"  ";
     cout<<endl;
     cout<<"Elementele palindroame de pe diagonala principala sunt:";
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
         if(i==j) {x=a[i][j];
         while(x!=0) {nri=nri*10+x%10;
                            x/=10;}
            if(a[i][j]==nri) cout<<nri<<" ",nri=0;
          }
    cout<<endl<<"Elementele in ordine inversa de pe diagonala secundara sunt:";
    for(i=n-1;i>=0;i--) cout<<a[i][n-1-i]<<" ";
    cout<<endl<<"Suma elementelor aflate deasupra diagonalei principale:";
       for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            if(i+j<n-1) s+=a[i][j];
            cout<<s;
    cout<<endl<<"Elementele care nu se afla pe diagonalele matricei:";
    cout<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
         if(i<j && i+j<n-1) cout<<a[i][j]<<" ";
         cout<<endl;
         for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j && i+j<n-1) cout<<a[i][j]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j && i+j>n-1) cout<<a[i][j]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j && i+j>n-1) cout<<a[i][j]<<" ";

       return 0;
}
