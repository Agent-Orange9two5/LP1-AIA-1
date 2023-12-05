#include <stdio.h>
#include <string.h>

struct Elev {
    char nume[100];
    int varsta;
    float medie;
};

int main() {
    FILE *file;
    int n, i;
    char caracter;
    struct Elev elevi[100];
    if ((file = fopen("ELEVI.txt", "w")) == NULL) {
        printf("<<!>> Eroare la deschiderea fisierului! Incearca din nou! <<!>>");
    } else {
        bk:
        printf(" >> Introdu cati elevi doresti sa adaugi in lista: ");
        scanf("%d", &n);

        if (n < 1) {
            printf(" >> Introdu un numar valid de elevi!\n");
            goto bk;
        } else {
            for (i = 0; i < n; i++) {
                printf(" >> Introdu numele elevului [%d]: ", i + 1);
                scanf("%s", elevi[i].nume);
                printf(" >> Introdu varsta elevului [%d]: ", i + 1);
                scanf("%d", &elevi[i].varsta);
                printf(" >> Introdu media elevului [%d]: ", i + 1);
                scanf("%f", &elevi[i].medie);
                printf("\n\n >> Se salveaza pentru elevul [%s] ...\n\n", elevi[i].nume);
                fprintf(file, "%s %d %.2f\n", elevi[i].nume, elevi[i].varsta, elevi[i].medie);
            }
            printf(" >> Toti elevii au fost adaugati cu succes in fisierul ELEVI.txt!\n");
        }
    }
    fclose(file);
    if ((file = fopen("ELEVI.txt", "r")) == NULL) {
        printf("<<!>> Eroare la deschiderea fisierului! Incearca din nou! <<!>>");
    }
    else {
        printf(" >> Elevii adaugati in fisier sunt: \n");
        while ((caracter = fgetc(file)) != EOF) {
            printf(" >> Caracter citit: %c , Cursorul este la pozitia: %ld\n", caracter, ftell(file));
            //Acest while va citi tot fisierul prin functia fgetc((fisier)) si prin functia ftell((fisier)) imi va spune pe ce pozitie este caracteru afisat.
        }
    }
    fclose(file);
    return 0;

}
