#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float *a, x;
    int n, i;

    //  Citim numarul de elemente
    printf("Cate numere vrei\n");
    scanf("%d", &n);

    //  Alocarea zonei de momorie pentru vector
    a = (float *) malloc(n * sizeof(float));

    if (!a) {
        printf("Nu pot aloca memoria.\n");
    }

    //  Citim vectorul
    
    for (i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%f", &a[i]);
    }

    //  Citim numarul x
    printf("x: ");
    scanf("%f", &x);

    //  Afisarea valorilor din interval
    printf("Numerele din intervalul (%.2f, %.2f) sunt: ", x-5, x+5);
    for (i = 0; i < n; i++) {
        if (fabs(x - a[i]) < 5){
            printf("%.2f ", a[i]);
        }
    }
    printf("\n");

    //  Eliberezi memoria
    free(a);

    return 0;
}
