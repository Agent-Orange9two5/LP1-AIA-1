#include <stdio.h>
#include <stdlib.h>

int palindrom(int n)
{
    int inv = 0;

    while (n != 0)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }
    return inv;
}

int main()
{
    int m[4][4], i, j, s = 0, n, p, cp, inv = 0, v1[5], v2[5], v3[5], v4[5], a = 0, b = 0, c = 0, d = 0;
    printf("Cate linii/coloane va avea matricea patratica: ");
    scanf("%d", &n);
    printf("Citim matricea patratica:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    // Afisam elementele de pe diagonala principala
    printf("Elementele de pe diagonala principala sunt: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", m[i][i]);
    }
    printf("\n");

    // Afisam elementele de pe diagonala secundara in ordine inversa
    printf("Elementele de pe diagonala secundara sunt: ");
    for (i = 3; i >= 0; i--)
        printf("%d ", m[i][4 - 1 - i]);
    printf("\n");

    // Suma elementelor aflate deasupra diag sec
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j < n - 1)
            {
                s = s + m[i][j];
            }
    printf("Suma elementelor de deasupra diagonalei secundare este: %d\n", s);

    // Elementele palindroame de pe diag principala
    printf("Elementele palindrome de pe diagonala principala sunt: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            inv = palindrom(m[i][j]);
            if (inv > 10 && inv == m[i][j] && i == j)
                printf("%d ", m[i][j]);
        }
        inv = palindrom(m[i][j]);
        if (i == j && m[i][j] != inv)
        {
            printf("Nu exista numere palindrome pe diagonala principala");
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i < j && i + j < n - 1)
                v1[a++] = m[i][j];
            if (i > j && i + j > n - 1)
                v2[b++] = m[i][j];
            if (i < j && i + j > n - 1)
                v3[c++] = m[i][j];
            if (i > j && i + j < n - 1)
                v4[d++] = m[i][j];
        }

    printf("Elementele din triunghiul 1 sunt: ");
    for (i = 0; i < a; i++)
        printf("%d ", v1[i]);
    printf("\n");

    printf("Elementele din triunghiul 2 sunt: ");
    for (i = 0; i < b; i++)
        printf("%d ", v2[i]);
    printf("\n");

    printf("Elementele din triunghiul 3 sunt: ");
    for (i = 0; i < c; i++)
        printf("%d ", v3[i]);
    printf("\n");

    printf("Elementele din triunghiul 4 sunt: ");
    for (i = 0; i < d; i++)
        printf("%d ", v4[i]);
    printf("\n");

    return 0;
}

