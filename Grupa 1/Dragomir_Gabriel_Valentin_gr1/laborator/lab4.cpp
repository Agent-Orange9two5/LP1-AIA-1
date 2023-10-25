#include <iostream>

using namespace std;
int v[10]={1,2,3,4,5,6,7,8,9,10},n,i,sumimp;
int main()
{
    n=10;
    for(i=0;i<n;i++)
    if(v[i]%2!=0) 
    sumimp+=v[i];
    
    cout<<sumimp<<endl;
    
    for(i=0;i<n;i++)
    if(v[i]%2==0)
    cout<<v[i]<<" ";
    
    cout<<endl;
    
    for(i=n-1;i>=0;i--)
    cout<<v[i]<<" ";
    
    return 0;
}
