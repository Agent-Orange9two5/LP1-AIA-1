#include <iostream>

using namespace std;
int oglindit(int n)
{
    int invers=0;
    while(n)
    {
        invers=invers*10+n%10;
        n=n/10;

    }
    return invers;
}
int main()
{
    int m[4][4],n,i,j,v1[5]= {0},v2[5]= {0},v3[5]= {0},v4[5]= {0},a1=0,a2=0,a3=0,a4=0;

    cout<<"lungimea matricii este:";
    cin>>n;
    cout<<"matricea este:"<<endl;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>m[i][j];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(m[i][j]<0)
                cout<<m[i][j]<<' '<<"Se afla pe linia "<<i+1<<" si pe coloana "<<j+1<<endl;
    cout<<"numerele de deasupra diagonalei secundare: ";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i+j<n-1)
                cout<<m[i][j]<<' ';
    cout<<endl;
    cout<<"numerele de sub diagonala principala: ";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i>j)
                cout<<m[i][j]<<' ';
    cout<<endl;
    cout<<"numerele palindroame de pe liniile impare: ";
for(i=0; i<n; i++)
        for(j=0; j<n; j++)
    if(i%2==0 && (oglindit(m[i][j])==m[i][j]&&m[i][j]>9))
        cout<<m[i][j]<<' ';
        cout<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j && i+j<n-1)
                v1[a1++]=m[i][j];
            if(i>j && i+j>n-1)
                v2[a2++]=m[i][j];
            if(i<j && i+j>n-1)
                v3[a3++]=m[i][j];
            if(i<j && i+j<n-1)
                v4[a4++]=m[i][j];
        }
    }

    cout<<"numere de sub diagonala principala si deasupra diagonalei secundare: ";
    for(i=0; i<a1; i++)
        cout<<v1[i]<<' ';
    cout<<endl;
    cout<<"numere de sub diagonala principala si sub diagonalei secundare: ";
    for(i=0; i<a2; i++)
        cout<<v2[i]<<' ';
    cout<<endl;
    cout<<"numere de deasupra diagonala principala si sub diagonalei secundare: ";
    for(i=0; i<a3; i++)
        cout<<v3[i]<<' ';
    cout<<endl;
    cout<<"numere de deasupra diagonala principala si deasupra diagonalei secundare: ";
    for(i=0; i<a4; i++)
        cout<<v4[i]<<' ';
    cout<<endl;
    return 0;
}
