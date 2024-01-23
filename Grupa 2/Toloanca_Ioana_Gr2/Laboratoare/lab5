//ex1
#include <iostream>
#include <string.h>
using namespace std;
int main()
{   char a[101];
    int i, j;
    int num=0, temp;
    cout<<"Introduceti sirul de caractere: ";
    cin.get(a , 100);
    for(i=0; i<strlen(a); i++) {  if(*(a+i)=='a'  ||  *(a+i)=='A')
        {        num++;
            for(j=i; j<strlen(a); j++)
            {   temp=j;
                if(*(a+j)==' ')
                j = strlen(a);            }
            i = temp;        }    }
    cout<<"Litera a apare in"<< num <<"cuvinte ale frazei "<< a;
    return 0;  }

//ex2
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{	int k=0, i;
	char txt[1024]; 
	char* p;
 	printf("Introduceti un sir de caractere si apoi apasati Enter\n");
	gets(txt);  //scanf("%s",&txt); 
    char v[]="0123456789";
    int test = 0;
    for(i=0;i<strlen(txt);i++)
      if (strchr(v,txt[i])!=0)
         test=1;
   if (test==1)
      printf("Exista numere in sir.\n");
   else
      printf("Nu exista numere in sirul de caractere.\n");
    //Afisarea sirului de caractere cu litere mari
     for(i=0;i<strlen(txt);i++)
        printf("%c", toupper(txt[i]));
    //Calculul nr lui de cuvinte
	p=strtok(txt," ");
    while (p!=NULL) 	{		p=strtok(NULL, " ");
		k++; }   
	printf("\nNumarul de cuvinte este: %d\n",k); //nu se numara caracterul NULL
	getch();  }


//ex3
#include <iostream>
#include <string.h>
using namespace std;
int main()
{   char sir1[101], sir2[101];
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
   while(p != NULL)   {      cout <<p<<endl;
                             p = strtok(NULL, sep);  }
       return 0;  }


//ex4
#include <iostream>
#include <string.h>
using namespace std;
int main()
{    string sir1, sir2;
    cout<<"Primul sir: ";
    getline(cin, sir1);
    cout<<"Al doilea sir: ";
    getline(cin, sir2);
    cout << "Lungimea pirmului sir este: " << sir1.size() << endl;
    cout << "Lungimea celui de-al doilea sir: " << sir2.length() << endl;
    int pos = sir1.find(sir2);
    if (pos == -1)
        cout << "Sirul 2 nu este continut in sirul 1" << endl;
    else
        cout << "Sirul 2 este inlus in sirul 1 incepand cu pozitia " << pos <<endl;
    string sir1_new = sir1.insert(3, "Limbaje de programare II");
    cout<< sir1_new << endl;
    sir1_new.append(" ");
    cout<< "Sirurile concatenate: " << sir1_new.append(sir2);

    return 0;
}
