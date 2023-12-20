#include <stdio.h>

int main()
{
    float lungime,latime,a,p;
    printf("Lungimea dreptunghiuui: ");
    scanf("%f", &lungime);
    printf("Latimea dreptunghiului: ");
    scanf("%f", &latime);

    a=lungime * latime;
    p=2*(lungime + latime);

    printf("Aria dreptunghiului este: %0.4f/n", a);
    printf("Perimetrul dreptunghiului este: %0.3f/n", p);
    return 0;
}
