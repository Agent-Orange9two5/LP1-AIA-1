#include <iostream>

using namespace std;
int sirfib1(int n){
    int a, b, c, i;
     a=1;
     b=1;
     if (n<0) {
            cout<<"n trebuie mai mare de 0";
            return 0;
          }
     for(i=0;i<n;i++){
        c=a+b;
        b=a;
        a=c;
        i++;
     }
}

int main()
{
    int n;
    cout<<"n=";
    cin>>n; cout<<endl;
    cout<<"sir fibbonaci=";
    sirfib1(n);
}
