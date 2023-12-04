#include <stdio.h>

typedef struct
{
    char nume[50];
    int varsta;
    float medie;
} Student;

int main()
{
    FILE *fisier = fopen("studenti.txt", "w");

    if (fisier == NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        return 1;
    }

    fprintf(fisier, "Popescu Maria 20 8.5\n");
    fprintf(fisier, "Marinescu Daniel 19 9.0\n");

    fclose(fisier);

    fisier = fopen("studenti.txt", "r");

    if (fisier == NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        return 1;
    }

    int caracter;
    long int pozitie;

    printf("Continutul fisierului:\n");

    while ((caracter = fgetc(fisier)) != EOF) //Funcția fgetc este utilizată pentru a citi caracterele din fișier
    {
        printf("%c", caracter);
        pozitie = ftell(fisier); //Functia ftell returnează poziția curentă a cursorului în fișier
        printf(" (pozitie: %ld)\n", pozitie);
    }

    fclose(fisier);

    return 0;
}
