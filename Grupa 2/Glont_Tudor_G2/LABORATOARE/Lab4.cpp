#include <iostream>
/*suma nr imp
nr pare
vectorul inversat*/
using namespace std;

int main()
{
    int v[10], n, i, s=0;
    cin>>n;
    for(i=1; i<=n;i++)
       {
           cin>>v[i];
           if(v[i]%2==1)
                s=s+v[i];
       }
       cout<<s<<endl;
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0)
            cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=n;i>=1;i--)
        cout<<v[i]<<" ";

    return 0;
}

