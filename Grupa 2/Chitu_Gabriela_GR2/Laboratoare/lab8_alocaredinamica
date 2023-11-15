#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float *a, x;
    int n,i;
    printf("Cate numere? ");
    scanf("%d", &n);

    a=(float*) malloc(n*sizeof(float));

    if(!a) {
        printf("Nu pot aloca memorie.\n");
    }



for(i= 0 ; i < n; i++) {
 printf("a[%d] : ", i) ;
 scanf("%f", &a[i]);
 }
printf("x:");
scanf("%f", &x);

 printf("Numerele din inte4rvalul (%.2f, %2f) sunt: ", x-5 , x+5);
 for(i=0; i<n; i++) {
 if(fabs(x-a[i])<5)
    printf("%.2f ", a[i]);

 free(a);
 }
    return 0;
}
