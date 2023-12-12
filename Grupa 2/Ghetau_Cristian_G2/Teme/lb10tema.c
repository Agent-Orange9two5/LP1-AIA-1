#include <stdio.h>

// Structura pentru stocarea datelor despre student
struct Student {
    char nume[50];
    int varsta;
    float medie;
};

int main() {
    FILE *fisier;
    struct Student student1 = {"Ghetau Cristian", 23, 8.5};
    struct Student student2 = {"Ghetau Eugen", 32, 9.0};

    // Deschidem fisierul in modul de scriere ("w")
    fisier = fopen("studenti.txt", "w");
    if (fisier == NULL) {
        perror("Eroare la deschiderea fisierului pentru scriere");
        return 1;
    }

    // Scriem informatiile complete despre studenti in fisier
    fprintf(fisier, "Nume: %s\nVarsta: %d\nMedie: %.2f\n\n", student1.nume, student1.varsta, student1.medie);
    fprintf(fisier, "Nume: %s\nVarsta: %d\nMedie: %.2f\n\n", student2.nume, student2.varsta, student2.medie);

    // Inchidem fisierul
    if (fclose(fisier) == EOF) {
        perror("Eroare la inchiderea fisierului");
        return 1;
    }

    // Deschidem fisierul in modul de citire ("r")
    fisier = fopen("studenti.txt", "r");
    if (fisier == NULL) {
        perror("Eroare la deschiderea fisierului pentru citire");
        return 1;
    }

    // Citim si afisam continutul fisierului caracter cu caracter, indicand pozitia cursorului
    printf("\nContinutul fisierului si pozitia cursorului:\n");

    int caracter;
    long pozitie; // este un tip de date care reprezintă numere întregi, dar cu o capacitate de stocare mai mare decât int.

    // Utilizam fgetc pentru a citi caracter cu caracter din fisier
    // cat timp nu intalnim sfarsitul de fisier (EOF)
    while ((caracter = fgetc(fisier)) != EOF) {
        // Afisam caracterul citit
        putchar(caracter);

        // Daca caracterul citit este '\n', inseamna ca am terminat de afisat informatiile pentru un student
        if (caracter == '\n') {
            // Obtinem pozitia cursorului in fisier
            pozitie = ftell(fisier);

            // Afisam pozitia cursorului
            printf("\t\t\tPozitie cursor: %ld\n", pozitie);
        }
    }

    // Inchidem fisierul
    if (fclose(fisier) == EOF) {
        perror("Eroare la inchiderea fisierului");
        return 1;
    }

    return 0;
}
