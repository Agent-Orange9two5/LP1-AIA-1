#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256], voc[]="aeiou";
int i;

cin.get(s, 255);
for(i=0; i<strlen(s)-1; i++)
    if(strchr(voc, s[i])!=NULL)
    s[i]-=32;

    cout<<s;
    return 0;
}
