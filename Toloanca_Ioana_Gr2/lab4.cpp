#include <iostream>

using namespace std;

int main()
{ int v[10],i,s=0,nri=0,n;
cin>>n;
for(i=1;i<=n;i++)
    cin>>v[i];
for(i=1;i<=n;i++)
    if(v[i]%2!=0) s=s+v[i];
else cout<<"Numerele pare sunt:"<<v[i]<<endl;
        for(i=n;i>=1;i--)
        cout<<"Vectorul inversat este:"<<v[i]<<endl;
cout<<"suma numerelor impare este:"<<s<<endl;
    return 0;
}

