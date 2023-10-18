#include <iostream>
using namespace std;
int main()
{
    int v[10],i,s=0,n;
    for(i=0;i<10;i++)
        cin>>v[i];
    for(i=0;i<10;i++)
    {
        if(v[i]%2==1)
            {
                s=s+v[i];
            }
        else
            {
                cout<<v[i]<<" ";
                cout<<endl;
            }
    }
    for(i=9;i>=0;i--)
        cout<<v[i]<<" ";
    cout<<s;
    return 0;
}

