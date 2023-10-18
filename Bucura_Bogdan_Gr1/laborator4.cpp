
#include <iostream>
using namespace std;
int i,s,k;
int main(){
int v[]={1,2,3,4,5,6,7,8,9,10};
for(i=0;i<=9;i++){
    if (v[i]%2==1)
    s=s+v[i];
}
for(i=9;i>=0;i--)
cout<<v[i]<<"; ";
cout<<endl<<"numerele pare sunt:";
for(i=0;i<=9;i++){
    if (v[i]%2==0)
    cout<<v[i]<<"; ";
}
cout<<endl<<"S impare este:"<<s;
return 0;
}
