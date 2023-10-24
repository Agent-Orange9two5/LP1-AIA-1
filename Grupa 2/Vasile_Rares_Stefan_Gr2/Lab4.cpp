#include <iostream>
using namespace std;
int main()
{
    int n,v[10],s=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2)
            s=s+v[i];
        if(v[i]%2==0)
            cout<<v[i]<<' ';
    }
        cout<<endl;
        cout<<s<<endl;
    for(int i=n-1; i>=0; i--)
        cout<<v[i]<<' ';
    return 0;
}

