#include <stdio.h>
#include <conio.h>
void main()
{
long f0=1,f1=1;
long fc;
int i=1,n;
printf("Introduceti numarul de termeni din sirul lui Fibonacci: ");
scanf("%d",&n);

printf("%ld\n", f0);
printf("%ld\n", f1);
while(i<=n)
	{
   fc=f0+f1;
   f0=f1;
   f1=fc;
   i++;

   printf("%ld\n", fc);
   }

getch();
}
