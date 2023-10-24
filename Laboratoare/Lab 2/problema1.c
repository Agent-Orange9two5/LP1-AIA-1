#include <stdio.h>
#include <conio.h>      //pentru furnizare intrarii si iesirii

void main()
{
    int a,b,rezultat;
    char op;
    printf("Introduceti primul numar, operatorul de calcul, al doilea numar: ");
    scanf("%d%c%d",&a,&op,&b);

    if (a > b)
        printf("Maximul este: %d\n", a);
    else
        printf("Maximul este: %d\n", b);
    switch (op)
    {
        case '+':
        {
            rezultat=a+b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break;
        }
        case '-':
        {
            rezultat=a-b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break;
        }
        case '*':
         {
            rezultat=a*b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            break;
         }
        case '/':
        {
            if (b)
            {
            rezultat=a/b;
            printf("%d %c %d = %d",a,op,b,rezultat);
            }
            else printf("Al doilea operand este 0. Eroare");
            break;
        }
        case '%':
        {
                if (b)
                {
                    rezultat = a%b;
                    printf("%d %c %d = %d",a,op,b,rezultat);
                }
   				else printf("Al doilea operand este 0. Eroare");
               break;
        }
   default: printf("Operator invalid");
    }
getch();    //pentru citirea caracterelor de la tastatura
}
