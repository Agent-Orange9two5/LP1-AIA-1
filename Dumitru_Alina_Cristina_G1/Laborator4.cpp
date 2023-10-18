#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int v[10], n,i,s_i=0;
    cout<<"Introduceti marimea vectorului:";
    cin>>n;
    cout<<"Introduceti elementele vectorului:";

    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
            s_i=s_i+v[i];

    }
    cout<<"Suma numerelor impare este: "<<s_i<<endl;
    cout<<"Numerele pare sunt: ";
    for(i=0;i<n;i++)
      {
        if(v[i]%2==0)
        {
        cout<<v[i]<<" ";
        }
          cout<<endl;

      }
       cout<<"Vectorul inversat este: ";
    for(i=n-1;i>=0;i--)
        cout<<v[i]<<" ";

    return 0;
}

