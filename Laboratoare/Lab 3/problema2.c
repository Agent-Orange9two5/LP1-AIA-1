#include <stdio.h>

int main()
{
    int a[100][100], n, i, j;
    int min, max;
    int first_diag[10], second_diag[10];

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

    printf("\nDiagonala principala: ");
    for (i=0; i<n; i++)
    {
        first_diag[i] = a[i][i];
        printf("%d ", first_diag[i]);
    }

    printf("\nDiagonala secundara: ");
    for (i=0; i<n; i++)
    {
        second_diag[i] = a[i][n-1-i];
        printf("%d ", second_diag[i]);
    }

    min = max = a[0][0];
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
            if (max < a[i][j])
                max = a[i][j];
        }

    printf("\nMinimul este: %d\n", min);
    printf("Maximul este: %d\n", max);

    return 0;
}
