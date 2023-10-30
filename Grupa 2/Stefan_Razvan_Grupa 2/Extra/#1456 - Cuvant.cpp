#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256],voc[]="aeou";
int i, ok=0;

cin>>s;
for(i=0;i<strlen(s);i++)
    if(strchr(voc, s[i])!=NULL)
        ok=1;

    if(ok==0)
        cout<<"DA";
    else cout<<"NU";
    return 0;

}
