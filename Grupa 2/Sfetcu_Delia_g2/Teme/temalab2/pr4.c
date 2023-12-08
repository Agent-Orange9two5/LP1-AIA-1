#include <stdio.h>

int main() {
    double a, b, c, media = 0;
    printf("Notele studentului sunt: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Media lui este: ");
    media = (a + b + c) / 3;
    printf("%lf\n", media);
    if (media > 6)
        printf("Studentul are nota de trecere");
    else
        printf("Studentul nu are nota de trecere");
    return 0;
}
