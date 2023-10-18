#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[10],s=0,i;
    for(i=0;i<10;i++)
        {
            cin>>v[i];
            if(v[i]%2==1)
                s+=v[i];
            else
                cout<<v[i]<<" e par"<<endl;
        }
    for(i=9;i>=0;i--)
        cout<<endl<<v[i];
    cout<<endl<<"suma este:"<<s;
    return 0;
}
