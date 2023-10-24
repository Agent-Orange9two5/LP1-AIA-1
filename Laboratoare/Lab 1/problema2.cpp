#include <stdio.h>

void problema2()
{
    float lungime, latime;
    float a, p;

    printf("Lungimea dreptunghiului: ");
    scanf("%f", &lungime);
    printf("Latimea dreptunghiului: ");
    scanf("%f", &latime);

    a = lungime * latime;
    p = 2 * (lungime + latime);

    printf("Aria drepunghiului este: %0.2f\n", a);
    printf("Perimetrul drepunghiului este: %0.2f\n", p);
}
