#include <stdio.h>
#include <conio.h>

int a[10], n;


int diferenta (int n, int a[10])

{
    if(n==0) return 1;
    else return (a[n]- diferenta(n-1,a));

}

void main()
{
    printf("introdu nr de caini: ");

    scanf("%i",&n);

    for  (int i= 0;i<=n;i++);
    {
        printf("Elementul [%i] = " );
        scanf("%i", &a[10]);
    }
    printf("diferenta = %i", diferenta(n,a));
    return 0;
}


