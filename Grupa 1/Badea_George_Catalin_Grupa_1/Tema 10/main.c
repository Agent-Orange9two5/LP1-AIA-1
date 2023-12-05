#include <stdio.h>
struct Student {
    char nume[50];
    int varsta;
    float medie;
};

int main() {
    FILE *fisier = fopen("studenti.txt", "w");
    if (fisier == NULL) {
        printf("Eroare la deschiderea fisierului!");
        return 1;
    }
    fprintf(fisier, "Nume1 20 8.5\n");
    fprintf(fisier, "Nume2 22 9.0\n");
    fclose(fisier);
    fisier = fopen("studenti.txt", "r");
    if (fisier == NULL) {
        printf("Eroare la deschiderea fisierului!");
        return 1;
    }
    int caracter;
    long pozitie;
    while ((caracter = fgetc(fisier)) != EOF) //fgetc: Funcția fgetc este folosită pentru a citi un caracter din fișier.//
                                              // Ea returnează valoarea caracterului citit sau EOF (End of File) la sfârșitul fișierului.//
    {
        printf("%c", caracter);
        pozitie = ftell(fisier);              //ftell: Funcția ftell este folosită pentru a obține poziția curentă a cursorului în fișier.//
        printf(" (pozitie: %ld)\n", pozitie);
    }
    fclose(fisier);
    return 0;
}
