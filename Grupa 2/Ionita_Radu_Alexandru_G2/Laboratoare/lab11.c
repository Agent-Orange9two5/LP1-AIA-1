#include <stdio.h>
#include <stdlib.h>

struct Biblioteca {
    char titlu[100];
    char autor[100];
    int an;
    int id;
};

void inputb(){
    FILE *file;
    struct Biblioteca booke[100];
    int i, n;

    if ((file = fopen("DATA.txt", "w")) == NULL) {
        printf("Eroare la deschiderea fișierului!");
    } else {
        printf("Introduceti cate carti doresti sa adaugi in fisier: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            printf("Titlu Carte (%d): ", i + 1);
            scanf("%s", booke[i].titlu);
            printf("Autor Carte (%d): ", i + 1);
            scanf("%s", booke[i].autor);
            printf("An Carte (%d): ", i + 1);
            scanf("%d", &booke[i].an);

            fprintf(file, "%d. %s - %s (%d)\n", i + 1, booke[i].titlu, booke[i].autor, booke[i].an);
        }
    }

    fclose(file);
}

void outputb() {
    FILE *file;
    char ca;
    if ((file = fopen("DATA.txt", "r")) == NULL) {
        printf("Eroare la deschiderea fișierului!");
    } else {
        printf(">> DATABASE <<\n\n");

        while ((ca = fgetc(file)) != EOF) {
            printf("%c", ca);
        }
    }

    fclose(file);
}

void idcheck() {
    FILE *file;
    char l[100];
    int nm;
    printf("Adauga Id-ul cartii dorite: ");
    scanf("%d", &nm);
    if ((file = fopen("DATA.txt", "r")) == NULL) {
        printf("Eroare!");
    } else {
        while (fgets(l, sizeof(l), file) != NULL) {
            int cnm;
            if (sscanf(l, "%d", &cnm) == 1) {
                if (cnm == nm) {
                    printf("Test: %s\n", l);
                }
            }
        }
    }

    fclose(file);
}

void stergetot() {
    FILE *file;
    int n = 2;
    if ((file = fopen("DATA.txt", "w")) == NULL) {
        printf("Eroare la deschiderea fișierului!");
    }
    else {
        for (int i = 0; i < n; i++) {
            fprintf(file, "");
        }
    }
    fclose(file);
}

void stergeid() {
    FILE *file;
    char l[100];
    int nm;
    printf("Adauga Id-ul cartii pe care doresti sa o stergi: ");
    scanf("%d", &nm);
    if ((file = fopen("DATA.txt", "r")) == NULL) {
        printf("Eroare!");}
    fclose(file);
}

int main() {
    int opt;
    do {
        printf("1 - ADD, 2 - READ, 3 - CHECK, 4 - DELETE, 5 - DELETE_ID: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                inputb();
                break;
            case 2:
                outputb();
                break;
            case 3:
                idcheck();
                break;
            case 4:
                stergetot();
                break;
            case 5:
                stergeid();
                break;
        }
    } while (opt != 0);
    return 0;
}
