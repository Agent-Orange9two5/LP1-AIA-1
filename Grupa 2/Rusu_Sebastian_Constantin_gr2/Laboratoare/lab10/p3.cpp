//sa se creze disier litera pe linie la final cuv format din toate literele
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    FILE*fp=fopen("abc.txt",w);
    char a[i];
    for(int i=0,i<=9,i++){
        cout<<"scrie";
        cin<<a[i];
        f<<a[i]<<endl;
    }
    fclose("abc.txt");
    fopen("abc.txt",r);
    for(int i=0,i<=9,i++){
        ifstream f("abc.txt");
        f>>a[i];
        cout<<a[i];
    }
    fclose("abc.txt");
}
