#include <iostream>

using namespace std;

int main()
{
   int v[]={1,2,3,4,5,6,7,8,9,10},i,s=0;
   for(i=0;i<=9;i++)
    {
       if(v[i]%2==1)
       s=s+v[i];
    }
   for(i=9;i>=0;i--)
   cout<<v[i]<<",";
   cout<<endl<<"nr pare = ";
   for(i=0;i<=9;i++)
    {
       if (v[i]%2==0)
       cout<<v[i]<<",";
    }
cout<<endl<<"Suma nr impare = "<<s;
return 0;
}
