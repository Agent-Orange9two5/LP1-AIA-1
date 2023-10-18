#include <iostream>

using namespace std;

int main()
{
    int v[10],si=0;
    for(int i=0;i<10;i++)
    {
        cin>>v[i];
        if(v[i]%2!=0)si+=v[i];
    }
    cout<<"Suma nr impare este: "<<si<<endl;
    cout<<"Numerele pare sunt: "<<endl;
    for(int i=0;i<10;i++)
    {
        if(v[i]%2==0)cout<<v[i]<<" ";
    }
    cout<<endl<<"Vectorul inversat este: "<<endl;
    for(int i=9;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
