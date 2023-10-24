#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	int k=0, i;
	char txt[1024]; //sir introdus de utilizator
	char* p;

 	printf("Introduceti un sir de caractere si apoi apasati Enter\n");
	gets(txt); //scanf("%s",&txt);

    //Exista numere in sir?
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

    //Calculul numarului de cuvinte
	p=strtok(txt," ");
    while (p!=NULL)
	{
		p=strtok(NULL, " ");
		k++;
	}
	printf("\nNumarul de cuvinte este: %d\n",k); //nu se numara caracterul NULL

	getch();

}
