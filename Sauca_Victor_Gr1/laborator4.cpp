#include <iostream>
using namespace std;
int main(){
    int v[]={1,2,3,4,5,6,7,8,9,10},s=0;
    for(int i=0;i<10;++i){
        if(v[i]%2)s+=v[i];
    }
    cout<<"Suma nr impare: "<<s<<endl;
    for(int i=0;i<10;++i){
        if(v[i]%2==0)cout<<v[i]<<" ";
    }
    cout<<endl;
    int j=9;
    for(int i=0;i<5;++i){
        swap(v[i],v[j]);
        j--;
    }
    for(int i=0;i<10;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}

