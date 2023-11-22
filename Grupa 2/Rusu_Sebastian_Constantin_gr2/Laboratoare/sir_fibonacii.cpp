#include <iostream>
using namespace std;
void s(int n,int a, int b){
    if(n>=1){
        cout<<a+b<<" ";
        return s(n-1,b,a+b);
    }
    else
        return;
}
int main(){
    int n,a=1,b=1;
    cout<<"Cate numere are sirul: ";
    cin>>n;
    if(n<=1){
        cout<<a
    }
    else
        s(n,a,b);
    return 0;
}

