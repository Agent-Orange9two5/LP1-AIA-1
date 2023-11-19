#include <iostream>
using namespace std;
int main()
{
    int v[10],i,s=0,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
            s=s+v[i];
        else
            cout<<v[i]<< " ";
    }
    cout<<endl;
    cout<<"Suma= "<<s<<endl;
    for(i=n-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
