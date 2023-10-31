#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   /* 1.	Sa se scrie un program care introduce de la tastatura o fraza si va afisa numarul de cuvinte care contin litera ‘a’ sau ‘A’. */
     char a[101];
     int i,j,ok=0,temp;
     cout << "Introduceti sirul de caractere:";
     cin.get(a, 100); //citim sirul si lungimea sa
     for(i=0;i<strlen(a);i++)
     {
         if(a[i]=='a' || a[i] =='A')
         {
             ok++;
        while (i<strlen(a) && a[i] != ' ')
                {
                    i++;
                }
                    }
                        }    // trecem peste cuvântul curent până la următorul spațiu sau sfârșitul șirului

     cout << "Numarul de cuvinte care contin litera 'a' sau 'A' este: " << ok <<endl;
return 0;
}
