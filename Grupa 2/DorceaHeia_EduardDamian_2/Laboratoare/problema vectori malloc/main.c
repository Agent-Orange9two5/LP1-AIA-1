//Se aloca un vector cu n valori, se cere un nr x de la tastatura si se vor afisa valorile din vector ce se afla in intervalul [x-5, x+5]

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float *a, x;
   int n,i;
   //Citirea nr de elemente
   scanf("%d", &n);
   // alocarea zonei de memorie pt vector
   a=(float *) malloc(n *sizeof(float));
   if (!a) {
    printf("Nu pot aloca memorie. \n");

   }

   //citirea vectorului
   for(i=0;i<n;i++) {
    printf("a[%d]:", i);
    scanf("%f", &a[i]);
   }
   //citim numarul x
   printf("x: ");
   scanf("%f", &x);

  //afisarea valorilor din inteval
   printf("Numerele din intervalul (%.2f, %.2f", x-5, x+5);
   for(i=0;i<n; i++)
    if(fabs(x-a[i]<5)) printf ("%.2f", a[i]);
    //printf("\n");

    //eliberarea memoriei
   free(a);
   return 0;
}
