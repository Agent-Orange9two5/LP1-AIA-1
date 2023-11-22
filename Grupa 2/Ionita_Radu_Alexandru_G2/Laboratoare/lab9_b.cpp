#include <iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n){
    if(n<=1)
        return 1;
    else
        return n*fb(n-1);
}
int fb(int n){
    if (n<=1)
        return 1;
    else
        return n*fa(n-1);
}
int main()
{
    int num;
    cout<<"Introdu numarul: "; cin>>num;
    cout<<"Factorial din "<<num<<" este: "<<fa(num);
    return 0;
}
