#include <stdio.h>
#include <stdlib.h>

int functie()
{
    static int x=0;
    x+=10;
    return x;
}

int functie2()
{
    int x=0;
    x+=10;
    return x;
}


void main()
{
    int n=10;
    printf("fct cu var static: ");
    for(int i=0;i<n;i++)
        printf("%d ", functie());
    printf("\nfunctie cu var non-static: ");
    for(int i=0;i<n;i++)
        printf("%d ", functie2());
}
