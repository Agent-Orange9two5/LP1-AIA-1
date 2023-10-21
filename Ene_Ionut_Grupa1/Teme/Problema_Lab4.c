#include <stdio.h>

int main() {
    int a[4][4], i, j, suma = 0, ca, ogl, N[2], E[2], S[2], V[2], n = 0, e = 0, s = 0, v = 0;

    // Se citeste de la tastatura matricea patratica de dimensiune 4
    printf("Introduceti elementele matricei:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Se afiseaza elementele de pe diagonala principala
    printf("Elementele de pe diagonala principala sunt:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");

    // Se afiseaza elementele de pe diagonala secundara in ordine inversa
    printf("Elementele de pe diagonala secundara afisate in ordine inversa sunt:\n");
    for (i = 3; i >= 0; i--) {
        printf("%d ", a[i][3 - i]);
    }
    printf("\n");

    // Suma elementelor aflate deasupra diagonalei secundare
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j < 4 - 1) {
                suma += a[i][j];
            }
        }
    }
    printf("Suma elementelor aflate deasupra diagonalei secundare este: %d\n", suma);

    // Se afiseaza elementele palindroame de pe diagonala principala
    printf("Elementele palindroame de pe diagonala principala sunt: ");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                ca = a[i][j];
                ogl = 0;
                while (ca != 0) {
                    ogl = ogl * 10 + ca % 10;
                    ca = ca / 10;
                }
                if (a[i][j] == ogl)
                    printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    // Stocam in 4 vectori triunghiurile ramase
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i < j && i + j < 4 - 1)
                N[n++] = a[i][j];
            else if (i > j && i + j < 4 - 1)
                V[v++] = a[i][j];
            else if (i < j && i + j > 4 - 1)
                E[e++] = a[i][j];
            else if (i > j && i + j > 4 - 1)
                S[s++] = a[i][j];
        }
    }
    printf("Elementele din primul triunghi ramas dupa excluderea diagonalelor: ");
    for (i = 0; i < n; i++)
        printf("%d ", N[i]);
    printf("\n");
    printf("Elementele din al doilea triunghi ramas dupa excluderea diagonalelor: ");
    for (i = 0; i < e; i++)
        printf("%d ", E[i]);
    printf("\n");
    printf("Elementele din al treilea triunghi ramas dupa excluderea diagonalelor: ");
    for (i = 0; i < s; i++)
        printf("%d ", S[i]);
    printf("\n");
    printf("Elementele din al patrulea triunghi ramas dupa excluderea diagonalelor: ");
    for (i = 0; i < v; i++)
        printf("%d ", V[i]);

    return 0;
}
