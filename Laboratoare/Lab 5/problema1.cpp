#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char a[101];
   int i,j;
   int num=0,temp;

   cout<<"Introduceti sirul de caractere: ";
   cin.get(a, 100);

   for (i=0;i<strlen(a);i++)
   {
      if (*(a+i)=='a' || *(a+i)=='A')
      {
         num++;

        for (j=i;j<strlen(a);j++)
        {
            temp=j;
            if (*(a+j)==' ')
               j=strlen(a);
            }
         i=temp;
         }
   }
   cout<<"Litera a apare in "<<num<<" cuvinte ale frazei: "<<a;
   return 0;
}
