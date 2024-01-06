#include <iostream>
using namespace std;

int permutari(int n){

if(n==1||n==0)
return 1;

return n*=permutari(n-1);}

int main(){

int x;
cout<<"Permutari de: ";
cin>>x;
cout<<permutari(x);
    return 0;
}
