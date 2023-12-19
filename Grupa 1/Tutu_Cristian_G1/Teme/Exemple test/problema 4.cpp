#include <iostream>
#include <fstream>
using namespace std;
int nral(int mini,int maxi)
{
    return(rand()%(maxi-mini+1)+mini);
}
int main()
{
    ofstream g("NumereSortate.txt");
    int n,i,j;
    cout<<"Introduceti numarul de numere: ";
    cin>>n;
    int v[n];
    cout<<"Valorile generate aleatoriu sunt: ";
    for(i=0;i<n;i++)
    {
        j=nral(-100,100);
        cout<<j<<" ";
        v[i]=j;
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(i=0;i<n;i++)
        g<<v[i]<<" ";
    cout<<endl<<"Numerele sortate au fost scrise in fisier";
    g.close();
    return 0;
}
