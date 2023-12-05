#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Student 
{
    char nume[50];
    int varsta;
    float medie;
};

int main()
{
    FILE* fisier;
    fisier = fopen("Student.txt", "w");
    if (fisier == NULL)
    {
        printf("Eroare la deschiderea fisierului.");
    }
    else
    {
        Student student[2];
        student[0] = { "Binisor Teodor", 19, 2.50 };
        student[1] = { "Arsenie Vlad", 19, 10 };
        for (int i = 0; i < 2; i++)
        {
            fprintf(fisier, "%s %d %.2f\n", student[i].nume, student[i].varsta, student[i].medie);
        }
        fclose(fisier);
        fisier = fopen("Student.txt", "r");
        if (fisier == NULL) 
        {
            printf("Eroare la deschiderea fi?ierului.");
        }
        else
        {
            char c;
            int poz;
            while (!feof(fisier))
            {
                c = fgetc(fisier);
                printf("%c", c);
                poz = ftell(fisier);
                printf("(%d)", poz);
            }
            fclose(fisier);
        }
    }
    return 0;
}

//Am folosit functia fgetc pentru a citi carcacterul curent de pe pozitia curenta si avanseaza la urmatorul caracter
//Am folosit functia ftell pentru a determina pozitia curenta a caracterului din fisier
