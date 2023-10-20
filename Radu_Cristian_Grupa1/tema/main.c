#include <stdio.h>

int main()
{
    int a[100][100], i, j, m, s = 0, k, x = 0;
    int N[100], E[100], S[100], V[100];
    int n = 0, e = 0, sd = 0, v = 0;
    printf("Numarul de linii si coloane ale matricii patratice: ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("Elementele de pe diagonala principala: ");
    for (i = 0; i < m; i++)
        printf("%d ", a[i][i]);
    printf("\n");
    printf("Elementele de pe diagonala secundara invers: ");
    for (i = m - 1; i >= 0; i--)
        printf("%d ", a[i][m - i - 1]);
    printf("\n");
    printf("Suma elementelor de deasupra diagonalei principale: ");
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            if (i < j)
                s = s + a[i][j];
    printf("%d", s);
    printf("\n");
    printf("Elemente palidrom de pe diagonala principala: ");
    for (i = 0; i < m; i++)
    {
        k = a[i][i];
        x = 0;
        while (k)
        {
            x = x * 10 + k % 10;
            k /= 10;
        }
        if (x == a[i][i])
            printf("%d ", x);
    }
    printf("\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
        {
            if (i < j && i + j < m - 1)
                N[n++] = a[i][j];
            else if (i > j && i + j < m - 1)
                V[v++] = a[i][j];
            else if (i < j && i + j > m - 1)
                E[e++] = a[i][j];
            else if (i > j && i + j > m - 1)
                S[sd++] = a[i][j];
        }

    printf("Elementele din zona de N: ");
    for (i = 0; i < n; i++)
        printf("%d ", N[i]);
    printf("\n");
    printf("Elementele din zona de E: ");
    for (i = 0; i < e; i++)
        printf("%d ", E[i]);
    printf("\n");
    printf("Elementele din zona de S: ");
    for (i = 0; i < sd; i++)
        printf("%d ", S[i]);
    printf("\n");
    printf("Elementele din zona de V: ");
    for (i = 0; i < v; i++)
        printf("%d ", V[i]);
    return 0;
}
