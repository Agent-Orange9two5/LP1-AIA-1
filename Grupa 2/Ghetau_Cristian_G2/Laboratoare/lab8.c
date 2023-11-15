#include <stdio.h>
#include <stdlib.h>

int main()
{
   float *a, x;
   int n, i;

   /* citirea numarului de elemente */

   printf("cate numere? ");
   scanf("%d", &n);


   /* alocarea zonei de memorie pentru vector */

   a = (float *) malloc(n * sizeof(float));

   if (!a) {
    printf("nu pot aloca memorie. \n");
   }


   /* citirea vectorului */

   for (i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%f", &a[i]);
   }

   /*citim numarul x */

   printf("x: ");
   scanf("%f", &x);


   /*afisarea valorilor din interval */

   printf("numerele din intervalul (%.2f, %.2f) sunt: ", x - 5, x+5);
   for (i = 0; i < n; i++)
    if (fabs(x - a[i]) < 5)
    printf("%.2f", a[i]);

   //printf("\n");

   /* eliberarea memoriei */

   free(a);
   return 0;
}
