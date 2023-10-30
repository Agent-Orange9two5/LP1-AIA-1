#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256];
int i,ok=0;

cin.getline(s, 255);

for(i=1; i<strlen(s)-1; i++)
    if( strchr("aeiou", s[i-1])==NULL && strchr("aeiou", s[i+1])==NULL && strchr("aeiou", s[i])!=NULL && s[i-1]!=' ' && s[i+1] != ' ' && s[i] != ' ')
        ok+=1;

        cout<<ok;
return 0;
}
