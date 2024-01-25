//cursul 4 tema 3
#include <iostream>
using namespace std;
long n,nr,nri;
int i,v[1000],x,max1=-1,min1=99999,cop;
int main()
{ cout<<"Numarul este: ";
    cin>>n;
    while(n!=0) {v[++x]=n%10;
                     n/=10;}
    for(i=1;i<=x;i++) {
       if(v[i]%2==0) nr=nr*10+v[i];
       if(v[i]%2==0) {cop=v[i];
                      cop=0;
                     nri=nri*10+cop;}
      else  if(v[i]%2!=0) nri=nri*10+v[i];
      if(min1>v[i]) min1=v[i];
      if(max1<v[i]) max1=v[i];
      }
    cout<<endl<<"Numarul par este: "<<nr;
    cout<<endl<<"Numarul impar este: "<<nri;
    cout<<endl<<"Cifra minima este: "<<min1;
    cout<<endl<<"Cifra maxima este: "<<max1;
    return 0;
}
