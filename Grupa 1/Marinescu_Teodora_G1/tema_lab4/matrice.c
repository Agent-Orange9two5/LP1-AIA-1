#include <stdio.h>

int main() 
{
    int n;
    printf("introduceti nr de linii si coloane ( n = m ) al matricei : ");
    scanf("%d", &n);
    
    int m[n][n], l[n / 2 * n], r[n / 2 * n], t[n / 2 * n], b[n / 2 * n], d1[n], d2[n]; //matrice, vectori de elemente si coloane
    int lc = 0, rc = 0, tc = 0, bc = 0, d1c = 0, d2c = 0; //contori pt elemente vectori

    printf("\n introduceti matricea : \n");

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            //citire matrice
            scanf("%d", &m[i][j]);
            
            //verif diag principala
            if (i == j) 
            {
                d1[d1c] = m[i][j];
                d1c++;
            }
            //verif diag secundara
            if (i == n - 1 - j) 
            {
                d2[d2c] = m[i][j];
                d2c++;
            }
            //verif top
            if (i < j && i < n - j - 1) 
            {
                t[tc] = m[i][j];
                tc++;
            }
            //verif right
            if (i < j && i > n - j - 1) 
            {
                r[rc] = m[i][j];
                rc++;
            }
            //verif bottom
            if (i > j && i > n - j - 1) 
            {
                b[bc] = m[i][j];
                bc++;
            }
            //verif left
            if (i > j && i < n - j - 1) 
            {
                l[lc] = m[i][j];
                lc++;
            }
        }
    }

    printf("\nelemente diagonala principala in ordine inversa : ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", d1[i]);
    }

    printf("\nelemente diagonala secundara in ordine inversa : ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", d2[i]);
    }

    printf("\nelemente deasupra diagonalelor : ");
    for (int i = 0; i < tc; i++) {
        printf("%d ", t[i]);
    }

    printf("\nelemente la dreapta diagonalelor : ");
    for (int i = 0; i < rc; i++) {
        printf("%d ", r[i]);
    }

    printf("\nelemente sub diagonale : ");
    for (int i = 0; i < bc; i++) {
        printf("%d ", b[i]);
    }

    printf("\nelemente la stanga diagonalelor : ");
    for (int i = 0; i < lc; i++) {
        printf("%d ", l[i]);
    }

    return 0;
}
