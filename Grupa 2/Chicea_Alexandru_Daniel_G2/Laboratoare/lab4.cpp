#include <iostream>

using namespace std;
int v[10], i, j, s;
int main()
{
    for(i=0;i<10;i++)
    {
        v[i]=i+1;
        if(v[i]%2!=0)
            s=s+v[i];
    }
    cout<<"Suma numerelor impare:"<<s<<endl;
    cout<<"Nr pare:";
    for(i=0;i<10;i++)
    {
        if(v[i]%2==0)
            cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=9;i>=0;i--)
        cout<<v[i]<<" ";
    return 0;
}
