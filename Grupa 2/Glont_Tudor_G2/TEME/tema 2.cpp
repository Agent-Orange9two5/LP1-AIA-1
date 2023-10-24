#include <iostream>

using namespace std;

int main()
{
    int v[15], n, i, min, max, s=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        s=s+v[i];
    }
    cout<<"suma= "<<s<<endl;
    min=v[0];
    max=v[0];
    for(i=0; i<n; i++)
    {
        if(v[i]<min)
            min=v[i];
        if(v[i]>max)
            max=v[i];
    }
    cout<<"minim= "<<min<<endl<<"maxim= "<<max<<endl;
    cout<<"nr div cu 5 sunt ";
    for(i=0; i<n; i++)
    {
        if(v[i]%5==0)
            cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"nr div cu 11 sunt ";
    for(i=0; i<n; i++)
    {
        if(v[i]%11==0)
            cout<<v[i]<<" ";
    }

    return 0;
}
