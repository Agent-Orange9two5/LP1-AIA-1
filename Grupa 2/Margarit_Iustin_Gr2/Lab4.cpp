#include <iostream>
using namespace std;

int main()
{
 int v[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, p[10], i, j=1, sip=0;

 for (i=1;1<=10;i++){
    if(v[i]%2==0)
    {p[j]=v[i];j++;}
      else
         sip+=v[i]; }

 cout<<"Suma numerelor impare este: "<<sip<<endl;

cout<<"Numerele pare sunt:";
for(i=1;i<=10;i++)
    cout<<p[i]<<" ";
cout<<endl;

cout<<"Vector inversat este:";
for(i=10;i>=1;i--)
    cout<<v[i]<<" ";

    return 0;
}
