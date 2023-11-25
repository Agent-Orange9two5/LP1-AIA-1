#include <stdio.h>
#include <stdlib.h>

void problema2()
{
    float lungime, latime;
    float a , p;

    printf("Lungimea dreptunghiului este: ");
    scanf("%f", &lungime);
    printf("Latimea dreptunghiului este: ");
    scanf("%f", &latime);

    a = lungime * latime;
    p = 2 * (lungime + latime);

    printf("Aria dreptunghiului este: %0.2f\n", a);
    printf("Perimetrul dreptunghiului este: %0.2f\n", p);
}
