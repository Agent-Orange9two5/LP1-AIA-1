#include <stdio.h>

int main() {
    int a[4][4], n = 4, i, j, m, k, v[100], h = 0, va[2], vb[2], vc[2], vd[2], t = 0, u = 0, x = 0, z = 0;
    printf(">> Introduceti numerele pentru matrice: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    system("clear");

    // Matrice output
    printf(">> Matricea este: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // Numere de deasupra diag sec
    printf("\n>> Numerele de deasupra diagonala secundara sunt: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j != n - 1 && i + j <= 2)
                printf("%d ", a[i][j]);
        }
    }

    // Numere de sub diag prin
    printf("\n>> Numerele de sub diagonala principala sunt: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && i > j)
                printf("%d ", a[i][j]);
        }
    }

    // Numere negative si pozitia lor
    printf("\n>> Numere negative si pozitia lor: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < 0) {
                printf(" Numarul [ %d ] (Coloana: %d si Linia: %d)\n", a[i][j], j + 1, i + 1);
            }
        }
    }

    // Palindrome
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i % 2 == 1) {
                k = a[i][j];
                m = 0;
                if (a[i][j] < -9 || a[i][j] > 9) {
                    while (k) {
                        m = m * 10 + k % 10;
                        k /= 10;
                    }
                    if (m == a[i][j])
                        v[h++] = m;
                }
            }
        }
    }
    printf("\n>> Vector cu numerele palindrome din matrice cu linile impare: ");
    for (i = 0; i < h; i++)
        printf("%d ", v[i]);

    // Vectori cu numerele dintre diagonale
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j < 3)
                va[t++] = a[i][j];
            if (j < i && i + j < 3)
                vb[u++] = a[i][j];
            if (i < j && i + j >= 4)
                vc[x++] = a[i][j];
            if (i > j && i + j >= 4)
                vd[z++] = a[i][j];
        }
    }
    printf("\n\n>> Vector 1: ");
    for (i = 0; i < 2; i++) {
        printf("%d ", va[i]);
    }
    printf("\n>> Vector 2: ");
    for (i = 0; i < 2; i++) {
        printf("%d ", vb[i]);
    }
    printf("\n>> Vector 3: ");
    for (i = 0; i < 2; i++) {
        printf("%d ", vc[i]);
    }
    printf("\n>> Vector 4: ");
    for (i = 0; i < 2; i++) {
        printf("%d ", vd[i]);
    }
    return 0;
}
