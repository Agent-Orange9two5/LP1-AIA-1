#include <stdio.h>

int main() {
    int i, j, n, m[100][100], nr = 0, v[100], suma = 0, ogl = 0, cln, n1, tr1[100], tr2[100], tr3[100], tr4[100], cnt = 0;

    printf("Introduceti numarul de linii si coloane al matricii: ");
    scanf("%d", &n);
    n1 = n;

    printf("Introduceti termenii din matrice:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("Elementele de pe diagonala principala sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", m[i][j]);
            }
        }
    }
    printf("\n");

    printf("Elementele de pe diagonala secundara sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j == n - 1) {
                v[nr] = m[i][j];
                nr++;
            }
        }
    }
    while (n1 - 1 >= 0) {
        printf("%d ", v[nr - 1]);
        nr--;
        n1--;
    }
    printf("\n");

    printf("Suma elementelor de deasupra diagonalei principale este: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j) {
                suma += m[i][j];
            }
        }
    }
    printf("%d\n", suma);

    printf("Numerele palindrom de pe diagonala principala sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                cln = m[i][j];
                while (cln != 0) {
                    ogl = ogl * 10 + cln % 10;
                    cln = cln / 10;
                }
                if (ogl == m[i][j]) {
                    printf("%d ", m[i][j]);
                }
                ogl = 0;
                cln = 0;
            }
        }
    }
    printf("\n");

    printf("Numerele din triunghiul de sus sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j < n - 1) {
                tr1[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    for (i = 0; i < cnt; i++) {
        printf("%d ", tr1[i]);
    }
    cnt = 0;
    printf("\n");

    printf("Numerele din triunghiul din dreapta sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j > n - 1) {
                tr2[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    for (i = 0; i < cnt; i++) {
        printf("%d ", tr2[i]);
    }
    cnt = 0;
    printf("\n");

    printf("Numerele din triunghiul de jos sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && i + j > n - 1) {
                tr3[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    for (i = 0; i < cnt; i++) {
        printf("%d ", tr3[i]);
    }
    cnt = 0;
    printf("\n");

    printf("Numerele din triunghiul din stanga sunt:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && i + j < n - 1) {
                tr4[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    for (i = 0; i < cnt; i++) {
        printf("%d ", tr4[i]);
    }

    return 0;
}
+
