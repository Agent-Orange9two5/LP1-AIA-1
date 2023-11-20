#include <iostream>
using namespace std;
int main()
    {
        int v[15],i,n,min=100,max=0,suma=0;
        n=15;
        cout<<"Scrieti numerele vectorului: ";
        for(i=0;i<n;i++) cin>>v[i];
        for(i=0;i<n;i++){
                suma=suma+v[i];
                if(v[i]>max) max=v[i];
                if(v[i]<min) min=v[i];
            }
        cout<<"Cel mai mic numar din vector este: "<<min<<endl<<"Cel mai mare numar din vector este: "<<max<<endl<<"Suma numerelor din vector este: "<<suma<<endl;
        for(i=0;i<n;i++){
                if(v[i]%5==0) cout<<v[i]<<" este divizor a lui 5"<<endl;
                if(v[i]%11==0) cout<<v[i]<<" este divizor a lui 11"<<endl;
            }
        return 0;
    }
