#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,s=0,n,np,nr,v1[100],h=0,v2[100],l=0,v3[100],g=0,v4[100],d=0;
    cout<<"Numar linii si coloane=";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
    }
     for(i=0; i<n; i++){
        for(j=0;j<n;j++)
    {
        if(a[i][j]<0)
            cout<<"Numar negativ: "<<a[i][j]<<" Pe linia: "<<i<<" si coloana: "<<j<<endl;
    }
    }
    cout<<"Elemente deasupra diagonala secundara: ";
    for(i=0; i<n; i++){
        for(j=0;j<n;j++)
    {
        if(i+j<n-1)
            cout<<a[i][j]<<" ";

    }
    }
    cout<<endl;
    cout<<"Elemente sub diagonala principala: ";
    for(i=0; i<n; i++){
        for(j=0;j<n;j++)
    {
        if(i>j)
            cout<<a[i][j]<<" ";
    }
    }
    cout<<endl;
    cout<<"Numere palindroame de pe  linii impare: ";
    for(i=1; i<n; i=i+2){
        for(j=0;j<n;j++)
    {
        nr=a[i][j];
        np=0;
        if(a[i][j]>9 || a[i][j]<-9){
        while(nr)
        {
            np=np*10+nr%10;
            nr/=10;
        }
        if(np==a[i][j])
            cout<<np<<" ";
        }
    }
    }
    cout<<endl;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++)
    {
        if(i<j)
            v1[h++]=a[i][j];
        if(i>j)
            v2[l++]=a[i][j];
        if(i+j<n-1)
            v3[g++]=a[i][j];
        if(i+j>n-1)
            v4[d++]=a[i][j];
    }
    }
    cout<<"vector deasupra diagonalei principale: ";
    for(i=0;i<h;i++)
        cout<<v1[i]<<" ";
    cout<<endl<<" vector sub diag princi: ";
    for(i=0;i<l;i++)
        cout<<v2[i]<<" ";
    cout<<endl<<"vector deasupra diag sec: ";
    for(i=0;i<g;i++)
        cout<<v3[i]<<" ";
    cout<<endl<<"vector sub diag sec: ";
    for(i=0;i<d;i++)
        cout<<v4[i]<<" ";
    return 0;
}
