#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256];
int i;

cin.getline(s, 255);
for(i=0;i<strlen(s)-1; i++)
    if(s[i]==' ' && s[i-1]!=' ')
    s[i-1]='5';

    s[strlen(s)-1]='5';

    cout<<s;
    return 0;
}
