#include <iostream>

using namespace std;

int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},s=0,i;
for(i=0;i<10;i++)
{
    if(a[i]%2==1)
        s=s=a[i];
        if(a[i]%2==0)
     cout<<a[i]<<" ";
}for(i=9;i>=0;i--)
cout<<a[i]<< " ";
cout<<s;
 return 0;
}
