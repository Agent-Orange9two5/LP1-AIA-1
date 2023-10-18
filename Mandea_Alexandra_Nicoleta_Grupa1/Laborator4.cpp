#include <iostream>

using namespace std;

int main()
{
    int v[10],n,i,si=0;
    cout<<"Introduceti numarul de elemente: ";
    cin>>n;
    cout<<"Introduceti elementele vectorului: ";
    for(i=0;i<n;i++)
        cin>>v[i];
    cout<<"Elementele pare: ";
    for(i=0;i<n;i++)
        if(v[i]%2==1)
            si=si+v[i];
        else
            cout<<v[i]<<" ";
    cout<<endl;
    cout<<"Suma elementelor impare: "<<si<<endl;
    cout<<"Vectorul inversat: ";
    for(i=n-1;i>=0;i--)
        cout<<v[i]<<" ";

    return 0;
}
