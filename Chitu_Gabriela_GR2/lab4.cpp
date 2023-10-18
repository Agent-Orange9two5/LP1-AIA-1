#include <iostream>

using namespace std;

int main()
{
 int v[10], i , s;

 for(int i=0; i<=10; i++) {
    cin>>v[i];
    if(v[i]%2!=0) s=s+v[i];
 }
 cout<<"Suma numerelor impare este:"<<s;
 cout <<"Numerele pare sunt: ";
 for(i=0; i<=10; i++) {
        if(v[i]%2==0) cout<<v[i]<<" ";
 }
 cout<<"Vectorul inversat este: ";
    for(i=9; i<=0; i++) {
    cout<<v[i]<<" ";
    }

return 0;
 }


