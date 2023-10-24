#include <iostream>

using namespace std;

int main()
{
int v[10],s=0,i,np=0,inv;
for(i=0;i<10;i++)
{
    cin>>v[i];
    if(v[i]%2==1)
        s=s+v[i];
        else
        cout<<v[i]<<" ";


}
for (i=9;i>=0;i--)
    cout<<endl<<v[i];
cout<<endl<<"suma este"<<s;
return 0;

}

