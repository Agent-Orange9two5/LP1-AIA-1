#include <stdio.h>

/*

Se citeste o matrice patratica. Se afiseaza:
-elementele de pe diagonala principala
-elementele se pe diagonala secundara inversate
-elementele deasupra diagonalei principale
-elemetele palindrome de pe diagonala principala
-in patru vectori se stocheaza cele patru zone ale matricei: Nord, Sud, Est, Vest
si se afiseaza

*/

int main()
{
    int a[10][10], n, i, j, k=0, x=0, z=0, t=0,v1[10],v2[10],v3[10],v4[10],ca,ogl;
    printf("Introduceti numarul de elemente ale matricei: ");
    scanf("%d", &n);
    printf("Afisare matrice:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i < j && i + j < n - 1)
                v1[k++] = a[i][j];
            if (i < j && i + j > n - 1)
                v2[x++] = a[i][j];
            if (i > j && i + j > n - 1)
                v3[z++] = a[i][j];
            if (i > j && i + j < n - 1)
                v4[t++] = a[i][j];
        }
    printf("Afisarea elementelor de pe diagonala principala: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                printf("%d ", a[i][j]);
    printf("\n");
    printf("Afisarea elementelor in ordine inversa de pe diagonala secundara: ");
    for (i = n - 1; i >= 0; i--)
        for (j = n - 1; j >= 0; j--)
            if (i + j == n - 1)
                printf("%d ", a[i][j]);
    printf("\n");
    printf("Afisarea elementelor deasupra diagonalei principale: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i < j)
                printf("%d ", a[i][j]);
    printf("\n");
    printf("Afisarea elementelor palindrome de pe diagonala principala: ");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i==j)
            {
                ca=a[i][j];
                ogl=0;
                while(ca)
                {
                    ogl=ogl*10+ca%10;
                    ca=ca/10;
                }
                if(ogl==a[i][j])
                    printf("%d ",a[i][j]);
            }
    printf("\n");
    printf("Afisarea elementelor din zona Nord: ");
    for(i=0; i<k; i++)
        printf("%d ",v1[i]);
    printf("\n");
    printf("Afisarea elementelor din zona Est: ");
    for(i=0; i<x; i++)
        printf("%d ",v2[i]);
    printf("\n");
    printf("Afisarea elementelor din zona Sud: ");
    for(i=0; i<z; i++)
        printf("%d ",v3[i]);
    printf("\n");
    printf("Afisarea elementelor din zona Vest: ");
    for(i=0; i<t; i++)
        printf("%d ",v4[i]);

    return 0;
}
