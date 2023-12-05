#include <stdio.h>
#include <iostream>

using namespace std;


struct Student {
    char nume[50];
    int varsta;
    double medie;
};

int main()
{
    FILE* file = fopen("DATA.txt", "w");
    if (file == NULL)
    {
        printf("Eroare la deschiderea DATA.txt pentru scriere\n");
    }
    else
    {
        Student student[2];
        student[0] = { "Ana Maria",19,9.50 };
        student[1] = { "Marius Popescu",20,8.50 };
        for (int i = 0; i < 2; i++)
        {
            fprintf(file, student[i].nume);
            fprintf(file, " ");
            fprintf(file, "%d", student[i].varsta);
            fprintf(file, " ");
            fprintf(file, "%.2f", student[i].medie);
            fprintf(file, "\n");
        }
        fclose(file);
        file = fopen("DATA.txt", "r");
        if(file==NULL)
        {
            printf("Eroare la deschiderea DATA.txt pentru citire\n");
        }
        else
        {
            while (!feof(file))
            {
                char c = fgetc(file);
                printf("%c", c);
                printf(" ");
                printf("%ld", ftell(file));
                printf(" ");
            }
        }
    }
    return 0;
}
/*functia fgetc() este utilizata pentru a obtine fiecare caracter din fisier pe rand, iar functia ftell() este utilizata pentru a indica pozitia pe care se afla caracterul in fisier*/ 
