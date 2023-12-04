/*
1 - Definirea structurii student
2, 3 - Scrierea, citirea si afisearea din fisier

*/

#include <stdio.h>

// Structura student
struct Student{

    char nume[21];
    char prenume[21];
    float medie;

};

int main()
{
    // Deschidere fisier
    FILE *fp = fopen("STUDENT.txt","w");

    // Verificare fisier
    if (fp==NULL)
    {
        printf("ERROR!");
        return 1;
    }

    // Info Studenti
    fprintf(fp, "Stefan Razvan 20 10\n");
    fprintf(fp, "Ionita radu 19 2\n");

    // Inchidere fisier
    fclose(fp);

    // Deschidere fisier - modul citire
    fp = fopen("STUDENT.txt", "r");

    // Verificare fisier
    if(fp == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    // Citire + afisare caracter cu caracter
    int car;
    while ((car = fgetc(fp)) != EOF){
        putchar(car);
        // Afisare pozitie cursor
        printf("(pozitie: %ld\n", ftell(fp));
    }

    // Inchidere fisier
    fclose(fp);

    return 0;
}
