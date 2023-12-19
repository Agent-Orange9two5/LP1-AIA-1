#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("MatriceInmultita.txt");
    int n,m,cst,**a,i,j;
    cout<<"Introduceti numarul de linii ale matricei: ";
    cin>>n;
    cout<<"Introduceti numarul de coloane ale matricei: ";
    cin>>m;
    cout<<"Introduceti o valoare cu care sa fie inmultita matricea: ";
    cin>>cst;
    a=(int**)malloc(n*sizeof(int));
    if(!a)
    {
        cout<<"Eroare la alocarea memoriei pentru linii";
        return -1;
    }
    cout<<"Introduceti elementele matricei: ";
    for(i=0;i<n;i++)
    {
        a[i]=(int*)malloc(m*sizeof(int));
        if(!a)
        {
            cout<<"Eroare la alocarea memoriei pentru coloane";
            return -1;
        }
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            a[i][j]*=cst;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
            g<<a[i][j]<<" ";
        }
        cout<<endl;
        g<<endl;
    }
    for(i=0;i<n;i++)
        free(a[i]);
    free(a);
    g.close();
    return 0;
}
