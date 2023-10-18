#include <iostream>

using namespace std;

int main()
{
    int v[10],s=0,i;
    for(i=0;i<=9;i++) { cin>>v[i];
    if(v[i]%2==1) s=s+v[i];
    if(v[i]%2==0) cout<<endl<<"Nr pare "<<v[i]<<endl;
    }
    for(i=9;i>=0;i--){ cout<<v[i]<<" "; }
    cout<<"suma "<<s;

    return 0;
}

