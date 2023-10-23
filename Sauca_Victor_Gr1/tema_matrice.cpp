#include <iostream>
#include <math.h>
using namespace std;
int palindrom(int n){
    if(n/10==0){
        return 0;
    }
    int m=0,k=n;
    while(k){
        m=m*10+k%10;
        k/=10;
    }
    if(m==n)return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Citeste n dimensiunea matricii (apoi enter): ";
    cin>>n;
    int v[n][n],N[n],S[n],E[n],V[n],a=0,b=0,c=0,d=0,s=0;
    cout<<"Citeste matricea ("<<n<<"x"<<n<<"): "<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>v[i][j];
            if(i<j && i+j<n-1){
                N[a]=v[i][j];
                ++a;
            }
            if(i<j && i+j>n-1){
                E[b]=v[i][j];
                ++b;
            }
            if(i>j && i+j<n-1){
                V[c]=v[i][j];
                ++c;
            }
            if(i>j && i+j>n-1){
                S[d]=v[i][j];
                ++d;
            }
            if(i+j<n-1){
                s+=v[i][j];
            }
        }
    }
    cout<<endl<<"Elementele de pe D.P.: ";
    for(int i=0;i<n;++i){
        cout<<v[i][i]<<" ";
    }
    cout<<endl<<"Elementele de pe D.S. in ordine inversa: ";
    for(int i=n-1;i>=0;--i){
        cout<<v[i][abs(i+1-n)]<<" ";
    }
    cout<<endl<<"Suma elementelor de deasupra D.S.: "<<s<<endl;
    cout<<"Elementele palindrome de pe D.P.: ";
    for(int i=0;i<n;++i){
        if(palindrom(v[i][i])){
            cout<<v[i][i]<<" ";
        }
    }
    cout<<endl<<"Zona N: ";
    for(int i=0;i<n-1;++i){
        cout<<N[i]<<" ";
    }
    cout<<endl<<"Zona E: ";
    for(int i=0;i<n-1;++i){
        cout<<E[i]<<" ";
    }
    cout<<endl<<"Zona V: ";
    for(int i=0;i<n-1;++i){
        cout<<V[i]<<" ";
    }
    cout<<endl<<"Zona S: ";
    for(int i=0;i<n-1;++i){
        cout<<S[i]<<" ";
    }
    return 0;
}
