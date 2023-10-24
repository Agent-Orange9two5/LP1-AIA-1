#include <iostream>

using namespace std;

int main()
{int v[10],n,i,s=0,k=0,a[10];
cout<<"Introduceti numarul de elemente al vetorului:";
cin>>n;
cout<<endl;
cout<<"Introduceti elementele vectorului:";
for(i=0;i<n;i++)
    cin>>v[i];
for(i=0;i<n;i++)
    if (v[i]%2!=0)
    s=s+v[i];
for(i=n-1;i>=0;i--)
   {

    a[k]=v[i];
    k++;
}
cout<<"Vectorul inversat este:";
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Suma numerelor impare este:"<<s;
    cout<<endl;
    cout<<"Numerele pare sunt:";
    for(i=0;i<n;i++)
        if (v[i]%2==0)
    cout<<v[i]<<" ";

    return 0;
}
