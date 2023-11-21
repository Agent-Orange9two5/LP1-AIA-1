#include <iostream>

using namespace std;

int main()
{ int v[10],i,s=0,n;
cin>>n;
for(i=1;i<=n;i++)
cin>>v[i];
for(i=1;i<=n;i++)
    if(v[i]%2==1) s=s+v[i];
cout<<"suma numerelor impare este:"<<s<<" ";
cout<< "numerele pare sunt:";
for(i=1;i<=n;i++)
    if(v[i]%2==0) cout<<v[i]<<" ";
 cout<<"vectorul inversat este:";
 for (i=n;i>=1;i--)cout<<v[i]<<" ";

    return 0;
}
