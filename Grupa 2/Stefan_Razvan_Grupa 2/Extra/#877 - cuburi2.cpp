#include <iostream>
using namespace std;

int n,a[1001],nr=0,v[1001],i;

int main()
{
    cin>>n;
    cin>>v[0];
    a[0]=0;
    for(i=1;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>v[a[nr]])
        {
            while(v[a[nr]]<v[i] && nr>=0) nr--;
        }
        nr++;
        a[nr]=i;
    }
    cout<<nr+1<<endl;
    for(i=0;i<=nr;i++)
        cout<<a[i]+1<<" ";

    return 0;
}
