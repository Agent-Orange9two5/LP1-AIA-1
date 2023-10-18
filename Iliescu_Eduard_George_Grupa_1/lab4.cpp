#include <iostream>

using namespace std;

int main()
{
    int v[10],i,s=0;
    for(i=0;i<10;i++)
        cin>>v[i];
        for(i=0;i<10;i++)
            {if(v[i]%2==1)
                s+=v[i];
            if(v[i]%2==0)
                cout<<v[i]<<" ";
            }

        cout<<endl;
        for(i=9;i>=0;i--)
            cout<<v[i]<<" ";
            cout<<endl;
            cout<<s;
    return 0;
}

