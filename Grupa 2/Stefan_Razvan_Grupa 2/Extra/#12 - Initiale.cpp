#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256];
int i;

cin.getline(s, 255);
s[0]-=32;
s[strlen(s)-1]-=32;
for(i=1; i<strlen(s)-1; i++){
    if(s[i-1]==' ' || s[i+1]==' '){
        s[i]-=32;
    }
    }
    cout<<s;
    return 0;
}
