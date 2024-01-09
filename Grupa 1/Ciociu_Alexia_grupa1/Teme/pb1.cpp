#include <iostream>
#include<fstream>
using namespace std;
int v[100],n,i,s;
int main()
{ofstream f("Sumepare.txt");
cout<<"Introduceti numarul de elemente: ";
cin>>n;
cout<<endl<<"Introduceti vectorul: ";
for(i=0;i<n;i++) cin>>v[i];
for(i=0;i<n;i++)
    if(v[i]%2==0) s+=v[i];
f<<"Suma elementelor pare este: "<<s;
f.close();
    return 0;
}
