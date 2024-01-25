#include <iostream>
#include<cstring>
using namespace std;
char s[30],id[9],s2[30];
int i,nr,j,k;
int main()
{ cout<<"Introduceti numele: ";
cin.getline(s,31);
cout<<endl<<"Numele este: ";
cout<<endl<<s;
cout<<endl<<"Numarul de litere este: ";
for(i=0;i<strlen(s);i++)
    if(s[i]!=' ') nr++;
cout<<nr;
strncpy(id,s,3);
i=0;
while(i<strlen(s)-1)
    {

    if(s[i]==' ')
             for(j=i+1;j<i+6;j++){
                                   s2[k]=s[j];
                                    k++;}

   i++;
    }
    strcat(id,s2);
cout<<endl<<id;
        return 0;
}
