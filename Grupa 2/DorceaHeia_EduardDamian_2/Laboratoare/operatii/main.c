#include <stdio.h>
#include <conio.h>

void main()
{
   int a,b,rezultat;
   char op;
   printf("Introduceti primul numar, operatorul de calcul, al doilea numar: ");
   scanf("%d %c %d", &a,&op,&b);
   if ( a > b)
    printf("Maximul este: %d/n", a);
   else
    printf("Maximul este: %d/n", b);
   switch (op)
   {
   case '+':
    {
        rezultat=a+b;
        printf("%d %c %d= %d",a,op,b,rezultat);
        break;
    }
   case '-':
    {
        rezultat=a-b;
        printf("%d %c %d = %d",a,op,b,rezultat);
        break;
    }
   case '/':
       if (b)
    {
        rezultat=a/b;
        printf("%d %c %d = %d",a,op,b,rezultat);
    }
    else printf("Al doilea operator este 0, eroare");
    break;
   case '*':
    {
        rezultat=a*b;
        printf("%d %c %d = %d",a,op,b,rezultat);
        break;
    }
   case '%':
    {
        rezultat=a%b;
        printf("%d %c %d = %d",a,op,b,rezultat);
        break;
    }
   }
}
