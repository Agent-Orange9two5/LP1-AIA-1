#include <stdio.h>

int main()
{
    int a[5][5], n, x = 0, h = 0, k, c, v[16], p1[10], nr, p2[10], p3[10], p4[10];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Numerele negative din matrice sunt: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {  
            if(a[i][j] < 0)
            printf("%d ", a[i][j]);
        }
    printf("\nElementele de deasupra diagonalei secundare sunt: ");
    for(int i = 0; i < n; i++)
       { for(int j = 0; j < n; j++)
            if(i + j < n - 1)
            printf("%d ", a[i][j]);
        }
    printf("\nElementele de sub diagonala principala sunt: ");
    for(int i = 0; i < n; i++)
      { for(int j = 0; j < n; j++)
            if(i > j)
            printf("%d ", a[i][j]);
        }
    printf("\nVector cu numerele palindroame din matrice: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            k = a[i][j];  
            c = 0;
            if(a[i][j] > 9){
            while(k){
                c = c * 10 + k % 10;
                k /= 10;
            }
            if(c == a[i][j])
                printf("%d ", a[i][j]);
            }
        }
    printf("\nVector cu elementele aflate deasupra diagonalei principale si a celei secundare: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if((i < j) && (i + j < n - 1))
                p1[x++] = a[i][j];
        }
    for(int i = 0; i < x; i++)
        printf("%d ", p1[i]);
    x = 0;
    printf("\nVector cu elementele aflate in stanga diagonalei principale si a celei secundare: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if((i > j) && (i + j < n - 1))
                p2[x++] = a[i][j];
        }
    for(int i = 0; i < x; i++)
        printf("%d ", p2[i]);
    x = 0;
       printf("\nVector cu elementele aflate in dreapta diagonalei principale si a celei secundare: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if((i < j) && ((i + j )> (n - 1)))
                p3[x++] = a[i][j];
        }
    for(int i = 0; i < x; i++)
        printf("%d ", p3[i]);
    x = 0;
       printf("\nVector cu elementele aflate sub diagonala principala si cea secundara: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if((i > j) && ((i + j) > (n - 1)))
                p4[x++] = a[i][j];
        }
    for(int i = 0; i < x; i++)
        printf("%d ", p4[i]);
    return 0;
}