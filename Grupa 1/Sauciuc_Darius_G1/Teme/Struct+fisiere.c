
#include <stdio.h>

struct Student
{
    char nume[100];
    int varsta;
    float medie;
}s[100];

int main()
{
    FILE *f = fopen("date.txt", "w");

    int n, i;

    if(f == NULL)
    {
        printf("Eroare la deschiderea fisierului de scriere\n");
    }
    else
    {
        printf("Introduceti numarul de studenti: ");
        scanf("%d", &n);

        for(i = 0; i < n; i++)
        {
            printf("Introduceti numele, varsta si media studentului %d: \n", i + 1);
            scanf("%s %d %f", s[i].nume, &s[i].varsta, &s[i].medie); // citim de la tastatura date despre studenti

            fprintf(f, "%s %d %.2f \n", s[i].nume, s[i].varsta, s[i].medie); // adaugam in fisier datele studentilor
        }
    }
    fclose(f);

    FILE *g = fopen("date.txt", "r");

    if(g == NULL)
    {
        printf("Eroare la deschiderea fisierului de citire\n");
    }
    else
    {
        int poz = 0;
        char c;

        while((c = fgetc(g)) != EOF) // citim caracter cu caracter datele fisierului pana ajungem la finalul acestuia
        {
            printf("Caracterul citit: %c\n", c); // afisam la fiecare pas caracterul citit din fisier
            poz = ftell(g); // retinem la fiecare pas pozitia cursorului in fisier
            printf("Pozitia cursorului este: %d\n", poz); // afisam pozitia cursorului
        }
    }
    fclose(g);

    return 0;
}