#include <stdio.h>


int main() {

    double a, b, c, sum, med;

    printf("Notele studentului: \n");
    scanf("%2lf", &a);
    scanf("%2lf", &b);
    scanf("%2lf", &c);

    sum = a + b + c;
    med = sum / 3;

    if (med >= 6) {
        printf("Studentul are nota de trecere: %f\n", med);
    }   else {
        printf("Studentul nu are nota de trecere: %f\n", med);
    }
    
    return 0;
}
