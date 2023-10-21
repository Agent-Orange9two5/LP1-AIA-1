#include <stdio.h>

int palindrom(int n)
{
    int inv = 0;

    while (n)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }
    return inv;
}

int main()
{
    int i, j, a[4][4], s = 0, invers, v1[2], v2[2], v3[2], v4[2], c1, c2, c3, c4;
    c1 = c2 = c3 = c4 = 0;
    printf("Introduceti de la tastatura o matrice patratica de 4 elemente:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            if (i < j && i + j < 3)
                v1[c1++] = a[i][j];
            if (i > j && i + j < 3)
                v2[c2++] = a[i][j];
            if (i > j && i + j > 3)
                v3[c3++] = a[i][j];
            if (i < j && i + j > 3)
                v4[c4++] = a[i][j];
        }
    }
    printf("Elementele de pe diagonala principala sunt: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
                printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    printf("Elementele de pe diagonala secundara sunt: ");
    for (i = 3; i >= 0; i--)
    {
        for (j = 3; j >= 0; j--)
        {
            if (i + j == 3)
                printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
                s += a[i][j];
        }
    }
    printf("Suma elementelor deasupra diagonalei principale sunt: %d\n", s);
    printf("Elementele palindrome de pe diagonala principala sunt: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            invers = palindrom(a[i][j]);
            if (i == j && a[i][j] == invers)
                printf("%d ", a[i][j]);
        }
        invers = palindrom(a[i][j]);
        if (i == j && a[i][j] != invers)
            printf("Nu exista numere palindrome pe diagonala principala");
    }
    printf("\n");
    printf("Elementele din triunghiul 1 sunt: ");
    for (c1 = 0; c1 < 2; c1++)
        printf("%d ", v1[c1]);
    printf("\n");
    printf("Elementele din triunghiul 2 sunt: ");
    for (c2 = 0; c2 < 2; c2++)
        printf("%d ", v2[c2]);
    printf("\n");
    printf("Elementele din triunghiul 3 sunt: ");
    for (c3 = 0; c3 < 2; c3++)
        printf("%d ", v3[c3]);
    printf("\n");
    printf("Elementele din triunghiul 4 sunt: ");
    for (c4 = 0; c4 < 2; c4++)
        printf("%d ", v4[c4]);

    return 0;
}
