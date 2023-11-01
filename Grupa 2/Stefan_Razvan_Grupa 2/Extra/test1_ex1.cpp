#include <iostream>
using namespace std;

int main()
{
    int a[50][50],b[50][50],i,j,n;

    cout<<"Numarul de linii si coloane ale celor doua matrici este: ";
    cin>>n;

    cout<<"Elementele matricei 1: "<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];

        cout<<endl;

    cout<<"Elementele matricei 2: "<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>b[i][j];

        cout<<endl;

        cout<<"Suma celor doua matrici: "<<endl;
        cout<<"Matricea rezultate este: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]+b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
