#include <iostream>

using namespace std;
//aloce dinamic 4 variabile int si sa se elibereze memoria corespunzator
int cmmdc(int a1, int b1){
        if(b1==0){
            return a1;
        }
        else{
            return cmmdc(b1, a1%b1);
        }
    }
int main()
{
    int a,b;
    cmmdc(a,b);
    cout<<"introduceti numerele: ";
    cin>>a>>b;
    int r = cmmdc(a,b);
    cout<<"Cel mai mic divizor comun pt nr: "<<a<<" si "<<b<<" este "<<r;
    return 0;
}
