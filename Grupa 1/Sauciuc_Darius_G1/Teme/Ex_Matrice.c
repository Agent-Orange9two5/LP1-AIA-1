#include <stdio.h>

void main()
{
    int n, a[100][100], i, j, s = 0, v1[100], v2[100], v3[100], v4[100];

    printf("Introduceti numarul de linii/ coloane: ");
    scanf("%d", &n);

    printf("\n");
    printf("Introduceti elementele matricei: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    //afisarea elem diag principala
    printf("Elementele de pe diagonala principala sunt: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\n");

    //afis diag secundare in ordine inversa
    printf("Diagonala secundara in ordine inversa este: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i][n - i -1]);
    }
    printf("\n");

    //suma elem deasupra diag secundare
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i + j < n - 1)
            {
                s = s + a[i][j];
            }
        }
    }
    printf("Suma elementelor de deasupra diagonalei secundare este: %d \n",  s);

    //elemente palindroame de pe diag pr
    int cp; //copia elementului curent
    int inv; //inversul elementului curent
    printf("Numerele palindroame de pe diagonala principala sunt: ");
    for(i = 0; i < n; i++)
    {
        inv = 0;
        cp = a[i][i];
        while(a[i][i] != 0)
        {
            inv = inv * 10 + a[i][i] % 10;
            a[i][i] = a[i][i] / 10;
        }
        if(cp == inv)
        {
            printf("%d ", cp);
        }       
    }
    printf("\n");

    //stocarea triunghiurilor matricei in cei 4 vectori
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0; //indicii pt fiecare dintre cei 4 vectori

    //zona 1 - zona de sus
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i < j && i + j < n - 1)
            {
                v1[k1++] = a[i][j];
            }
        }
    }
    printf("Elementele triunghiului de sus sunt: ");
    for(i = 0; i < k1; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");
    //zona 2 - zona din stanga
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && i + j < n -1)
            {
                v2[k2++] = a[i][j];
            }
        }
    }
    printf("Elementele triunghiului din stanga sunt: ");
    for(i = 0; i < k2; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");
    //zona 3 - zona de jos
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && i + j > n - 1)
            {
                v3[k3++] = a[i][j];
            }
        }
    }
    printf("Elementele triunghiului de jos sunt: ");
    for(i = 0; i < k3; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("\n");
    //zona 4 - zona din dreapta
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i < j && i + j > n - 1)
            {
                v4[k4++] = a[i][j];
            }
        }
    }
    printf("Elementele triunghiului din dreapta sunt: ");
    for(i = 0; i < k4; i++)
    {
        printf("%d ", v4[i]);
    }
    printf("\n");
}