#include <iostream>

using namespace std;
int i=2;

void foo2(int n, int m){
  for(i=2;i<n;i++) if (n%i==0 & m%i==0) cout<<"Cel mai mic div comun este "<<i;
}
void foo1(int n,int m){
    if (n<0 || m<0) cout<<"Valorile trebuie sa fie pozitive";
    foo2(n,m);

}
int main()
{
    int n,m;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    foo1(n,m);
    return 0;
}
// sa se creeze un fisier care sa contina pe fiecare linie cate o litera. la finalul programului se va afisa in consola cuvantul
