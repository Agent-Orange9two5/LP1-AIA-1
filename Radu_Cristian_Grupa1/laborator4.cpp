#include <iostream>

using namespace std;

int main()
{
   int v[10],i,j,n,s1=0,s2=0;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>v[i];
   for(i=0;i<n;i++)
    if(v[i]%2!=0)
     s1=s1+v[i];
     else
        s2=s2+v[i];
     cout<<s2<<" " <<s1<<endl;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
            swap(v[j],v[j+1]);
     }
     for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}

