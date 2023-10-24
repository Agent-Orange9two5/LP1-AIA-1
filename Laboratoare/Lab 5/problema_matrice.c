//Se dă o matrice cu n linii si m coloane, având toate elementele distincte.
//Să se calculeze suma elementelor de deasupra diagonalei principale.
// Sa se calculeze produsul elementelor de pe fiecare coloana
#include <stdio.h>

int main()
{
    int a[100][100], n, i, j;

    printf("numarul de linii / coloane: ");
    scanf("%d", &n);

     for (i=0; i<n; i++)
        for (j=0; j<n; j++)
         {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
         }

    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
            printf("%d ", a[i][j]);
    }

    printf("\n Deasupra diagonalei principale: "); //i<j
    for (i=0; i<n; i++)
        for (j=i+1; j<n; j++)
        {
            if( i<j)
                printf("%d ", a[i][j]);
        }

    printf("\n Sub diagonala principala: "); //i>j
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            if ( i > j)
                printf("%d ", a[i][j]);
        }

    printf("\nDeasupra diagonalei secundare: "); //i+j<n-1
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            if (i + j < n - 1)
               printf("%d ", a[i][j]);
        }


    printf("\nSub diagonala secundara: ");
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            if (i + j > n - 1)
               printf("%d ", a[i][j]);
        }

    printf("\nProdusul elementelor de pe fiecare coloana: \n");
    int prod = 1;
    for (j=0; j<n; j++)
    {
         for (i=0; i<n; i++)
            prod *= a[i][j];
        printf("Produsul de pe coloana %d, este %d \n", j, prod);
        prod = 1;
    }

    return 0;
}

