#include <iostream>
using namespace std;
int a=1,b=1,c;

int fibo(int n){

  while(n){
  c=a+b;
  a=b;
  b=c;
  n--;
  cout<<c<<" ";
  return fibo(n);}}

int main(){

int n;
cout<<"cate nr fibo?";cin>>n;
cout<<1<<" "<<1<<" ";
fibo(n-2);

  return 0;
}
