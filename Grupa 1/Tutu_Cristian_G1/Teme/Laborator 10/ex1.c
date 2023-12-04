#include <stdio.h>
#include <stdlib.h>

struct Student {
    char nume[100];
    int varsta;
    float media;
} v[30];

int main() {
    int n, i;
    char s;
    FILE *fisier = fopen("date.txt", "w");

    if (fisier == NULL) {
        printf("Eroare la deschidere date.txt pentru scriere.\n");
        return -1;
    } else {
        printf("Introduceti numarul de studenti: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            printf("Introduceti numele studentului %d: ", i + 1);
            scanf("%s", v[i].nume);
            printf("Introduceti varsta studentului %d: ", i + 1);
            scanf("%d", &v[i].varsta);
            printf("Introduceti media studentului %d: ", i + 1);
            scanf("%f", &v[i].media);
            fprintf(fisier, "%s %d %.2f\n", v[i].nume, v[i].varsta, v[i].media);
        }
    }

    fclose(fisier);

    fisier = fopen("date.txt", "r");

    if (fisier == NULL) {
        printf("Eroare la deschidere date.txt pentru citire.\n");
        return -1;
    } else {
        while ((s = fgetc(fisier)) != EOF) {
            i = ftell(fisier);
            printf("Caracter: %c, pozitia cursorului: %d\n", s, i);
        }
    }

    fclose(fisier);

    return 0;
}
/* Folosind functia fgetc, memoram in variabila s pe rand fiecare caracter din fisier. Functia ftell este folosita pentru a retine pozitia cursorului in fisier. Astfel functia while va rula pana cand
variabila s ia valoarea EOF, adica atunci cand ajungem la sfarsitul fisierului. */
