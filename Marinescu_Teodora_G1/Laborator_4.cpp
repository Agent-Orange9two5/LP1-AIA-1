#include <iostream>

using namespace std;

int main()
{
    int n=10;
    int v[n], si=0;
    cout<<"nr pare :";
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
        if(v[i]%2==1) si+=v[i];
        else cout<<v[i]<<" ";
    }
    cout<<endl<<"suma nr impare : "<< si<< endl;
    for(int i=n-1;i>=0;i--) cout<<v[i]<<" ";



    return 0;
}

