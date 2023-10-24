#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>

void main()
{
char sir[200];
int nnr=0,nl=0,nu=0;
int palindrom = 1;
int i,n;
printf("Introduceti sirul:\n");
scanf("%s", &sir);


n=strlen(sir);
for (i=0;i<n;i++)
  {
   if(isdigit(sir[i])) nnr++;
   if(islower(sir[i])) nl++;
   if(isupper(sir[i])) nu++;
   sir[i]=toupper(sir[i]);
  }
for (i=0;i<n/2;i++)
   if(*(sir+i) != *(sir+n-1-i)
        {palindrom = 0; break;}
printf("Numarul de cifre este %d\n",nnr);
printf("Numarul de litere mici este %d\n",nl);
printf("Numarul de litere mari este %d\n",nu);
printf("Sirul cu litere mari este %s\n",sir);
printf("Lungimea sirului este %d \n", n);
if (palindrom)
	printf("Sirul este palindrom");
else
	printf("Sirul nu este palindrom");
getch();
  }
