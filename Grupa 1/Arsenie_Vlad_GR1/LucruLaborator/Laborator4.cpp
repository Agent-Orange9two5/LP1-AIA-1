#include <iostream>

using namespace std;

int main()
{
    int v[11], s=0, i;
    cout<<"Vectorul este: ";
    for(i=0;i<10;i++)
        cin>>v[i];
    cout<<"Numerele pare sunt: ";
    for(i=0;i<10;i++)
    {
        if(v[i]%2==1)
            s+=v[i];
        else
            cout<<v[i]<<" ";
    }
    cout<<endl<<"Suma numerelor impare este: "<<s<<endl;
    cout<<"Vectorul inversat este: ";
    for(i=9;i>=0;i--)
        cout<<v[i]<<" ";
    return 0;
}
