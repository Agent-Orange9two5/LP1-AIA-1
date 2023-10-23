#include <stdio.h>
#include <stdbool.h>

bool palindrome(int n) {
    int x, inv = 0;
    x = n;
    while (x) {
        inv = inv * 10 + x % 10;
        x /= 10;
    }
    return n == inv;
}

int main() {
    int v[4][4], i, j, a[2], b[2], c[2], d[2], k = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    printf("Nr negative:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (v[i][j] < 0) {
                printf("%d(%d,%d) ", v[i][j], i, j);
            }
        }
    }

    printf("\nElemente deasupra diagonalei secundare:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j < 3 - i) {
                printf("%d ", v[i][j]);
            }
        }
    }

    printf("\nElemente sub diagonala principala:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i > j) {
                printf("%d ", v[i][j]);
            }
        }
    }

    printf("\nElemente palindrome de pe linii impare:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i % 2 == 0 && palindrome(v[i][j])) {
                printf("%d ", v[i][j]);
            }
        }
    }

    printf("\nElemente din triunghiul stanga:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i > j && j < 3 - i) {
                printf("%d ", v[i][j]);
                a[k] = v[i][j];
                k++;
            }
        }
    }
    k = 0;

    printf("\nElemente din triunghiul sus:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i < j && j < 3 - i) {
                printf("%d ", v[i][j]);
                b[k] = v[i][j];
                k++;
            }
        }
    }
    k = 0;

    printf("\nElemente din triunghiul dreapta:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i < j && j > 3 - i) {
                printf("%d ", v[i][j]);
                b[k] = v[i][j];
                k++;
            }
        }
    }

    printf("\nElemente din triunghiul jos:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i > j && j > 3 - i) {
                printf("%d ", v[i][j]);
                b[k] = v[i][j];
                k++;
            }
        }
    }

    return 0;
}
