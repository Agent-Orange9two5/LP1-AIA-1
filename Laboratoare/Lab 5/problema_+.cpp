#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char sir1[101], sir2[101];
   int i,j;
   int num=0,temp;

   cout<<"Introduceti sirul 1 de caractere: ";
   cin.getline(sir1, 100);

   cout<<"Introduceti sirul 2 de caractere: ";
   cin.getline(sir2, 100);

   strcat(sir1, sir2);
   cout<<endl<<sir1;

   char sep[] = " .";
   char *p = strtok(sir1, sep);
   while(p != NULL)
   {
      cout <<p<<endl;
      p = strtok(NULL, sep);
   }
    return 0;
}
