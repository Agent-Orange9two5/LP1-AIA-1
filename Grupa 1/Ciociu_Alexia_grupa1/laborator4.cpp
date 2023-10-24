#include <iostream>
using namespace std;
int n,v[10],i,s=0,nrpare=0;
int main()
{ cout<<"Introduceti numarul de elemente:";
    cin>>n;
    cout<<"Vectorul are elementele:";
for(i=0;i<n;i++) cin>>v[i];
for(i=0;i<n;i++)
    if(v[i]%2!=0)  s+=v[i];
                else nrpare++;
    cout<<"Suma numerelor impare este:"<<s<<endl;
    cout<<"Numerele pare sunt:"<<nrpare<<endl;
cout<<"Vectorul inversat este:";
for(i=n-1;i>=0;i--)
    cout<<v[i]<<" ";
    return 0;
}
