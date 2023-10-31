#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* 2.	Se da un sir de caractere. Sa se afiseze:
    -	daca exista numere in sirul de caractere
    -  sirul de caractere cu litere mari
    -	numarul de cuvinte pe care acesta le contine*/
    char a[101];
    int i,ok1=0,ok2=0;
    cout << "Introduceti sirul de caractere: ";
    cin.get(a,100);
    for(i=0;i<strlen(a);i++)
    {
        if (a[i]>='0' && a[i]<='9')
            {
                ok1=1;
                break;
            }
    }
    if(ok1==1) cout << "Exista numere in sirul de caractere" << endl;
    else cout << "Nu exista numere in sirul de caractere." << endl;

    cout << "Sirul de caractere cu litere mari : ";
    for(i=0;i<strlen(a);i++)
        if(a[i]>='a' && a[i]>='A')
                cout << char(toupper(a[i]));
    cout<<endl;


    for(i=0;i<strlen(a);i++)
    { if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        {
            ok2++;
        }
        while(i<strlen(a) && a[i]!= ' ')
            i++;
        }
         cout << "Sirul de caractere contine " << ok2<< " " << "cuvinte. ";
    return 0;
}
