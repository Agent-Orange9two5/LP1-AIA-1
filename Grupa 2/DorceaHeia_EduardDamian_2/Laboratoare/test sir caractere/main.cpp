
#include <iostream>
#include <cstring>
using namespace std;

int main() {

char s[51],s1[20]="ANTERIOR",s2[20]="POSTERIOR";
cin.getline(s, 50);  //mama
strcat(s1, s);  //ANTERIORmama
cout<<strcat(s1, "ERIOR")<<endl; //ANTERIORmamaERIOR
cout<<strcpy(s, s1)<<endl;  //sirul s va copia ce este in s1
cout<<strlen(s);  //aratam lungimea sirului s

return 0;
}
