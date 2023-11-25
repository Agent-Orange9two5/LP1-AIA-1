#include <stdio.h>
#include <conio.h>

using namespace std;

void main()
{
    long f0=1, f1=1;
    long fc;
    int i=1,n;
    printf("Introduceti numarul de termeni din sirul de fractii: ");
    scanf("%d",&n);
    //crearea algoritmului Fibonacci
    printf("%1d\n", f0);
    printf("%1d\n", f1);
    while(i<=n)
    {
        fc=f0+f1;
        f0=f1;
        f1=fc;
        i++;

        printf("%1d\n", fc);
    }

    getch();
}
