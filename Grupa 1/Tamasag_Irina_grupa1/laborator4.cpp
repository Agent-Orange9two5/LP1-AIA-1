


#include <iostream>

using namespace std;

int main()
{
    int v[10], si=0, n, i;
    cout<<"introduceti marimea vectorului";
    cin>>n;
    cout<<"introduceti vectorul";

    for(i=0;i<n;i++)

        cin>>v[i];

    cout<<"numerele pare sunt";
      for(i=0;i<n;i++)
      {
          if(v[i]%2==0)
            cout<<v[i]<<" ";
            else si= si+v[i];
      }
    cout<<endl;
    cout<<"suma nr impare este: "<<si<<endl;
    cout<<"vectorul inversat este:";
    for(i=n-1;i>=0;i--)
        cout<<v[i]<<" ";
    return 0;
}

