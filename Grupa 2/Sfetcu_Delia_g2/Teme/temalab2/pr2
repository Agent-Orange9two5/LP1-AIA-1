#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, min = 2e9, max = -2e9, s = 0, dif = 0;
    printf("Introduceti 4 numere reale: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;
    printf("Maximul este: %f\n", max);
    
    min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    if(d < min)
        min = d;
    printf("Minimul este: %f\n", min);
    
    printf("Suma dintre minim si maxim este: %f\n", max + min);
    printf("Diferenta dintre minim si maxim este: %f\n", max - min);
    printf("Radacina patrata a numerelor aflate intre minimul si maximul gasite: \n");
    
    if(min < max) {
        for(float i = min; i <= max; i++) {
            if((int)sqrt(i) == sqrt(i))
                printf("%f ", sqrt(i));
        }
    }
    
    return 0;
}      

