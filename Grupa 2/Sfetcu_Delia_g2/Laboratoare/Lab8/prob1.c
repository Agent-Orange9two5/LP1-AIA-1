#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float *a, x;
    int n, i;
    /*Citirea numarului de elem*/
    printf("Cate numere? ");
    scanf("%d", &n);
    /*Alocarea zonei de memorie pentru vectorul nostru*/
    a = (float *)malloc(n * sizeof(float));
    if(!a){
        printf("Nu se poate aloca memorie. \n");
    }
    /*Citirea vectorului*/
    for(i = 0; i < n; i++){
        printf("a[%d]: ",i);
        scanf("%f", &a[i]);
    }

    /*Citirea numarului*/
    printf("x: ");
    scanf("%f", &x);

    /*Afisarea numerelor din interval*/
    printf("Numerele din intervalul (%.2f, %.2f) sunt: ", x- 5, x + 5);
    for(i = 0; i < n; i++)
        if(fabs(x - a[i]) < 5)
         {
          printf("%.2f", a[i]);
          printf(" ");
            }
    /*Eliberarea memoriei*/
    free(a);
    return 0;
}
