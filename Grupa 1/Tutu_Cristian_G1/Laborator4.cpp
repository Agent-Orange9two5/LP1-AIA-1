#include <iostream>

using namespace std;

int main()
{
    int v[10],i,s=0;
    for(i=0;i<10;i++)
    {
        cout<<"v["<<i<<"]"<<" = ";
        cin>>v[i];
    }
    cout<<"Numerele pare sunt: ";
    for(i=0;i<10;i++)
    {
        if(v[i]%2==0)
            cout<<v[i]<<" ";
        else s+=v[i];
    }
    cout<<endl;
    cout<<"Suma numerelor impare este "<<s<<endl;
    cout<<"Vectorul inversat: ";
    for(i=9;i>=0;i--)
        cout<<v[i]<<" ";
    return 0;
}

