#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int n,a[100],i,num;
ofstream f("Numeresortate.txt");

void random(){
    cout<<"Cate numere introduceti? ";
    cin>>n;
    srand(time(0));
    for(i=0;i<n;i++){
        a[i]=rand();
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sortare(){
   for(i=0;i<n-1;i++){
   for(int j=i+1;j<n;j++){
    if(a[i]<a[j])
    {
        num=a[i];
        a[i]=a[j];
        a[j]=num;

    }
   }
   }
for(i=0;i<n;i++)
    f<<a[i]<<" ";
}

int main()
{
    random();
    sortare();
    return 0;
}
