#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char nume[100];
    int varsta;
    float medie;
};

int main() {
    FILE *file;
    int n, i;
    char car;
    struct Student studenti[100];
    if ((file = fopen("Studenti.txt", "w")) == NULL)
    {
        printf("Error!");
    }
    else
    {
        NRi:
        printf("Introdu numarul de studenti: ");
        scanf("%d", &n);

        if (n < 1)
        {
            printf("Numar invalid!\n");
            goto NRi;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                printf("Numele elevului [%d] este: ", i + 1);
                scanf("%s", studenti[i].nume);
                printf("Varsta elevului [%d] este: ", i + 1);
                scanf("%d", &studenti[i].varsta);
                printf("Media elevului [%d] este: ", i + 1);
                scanf("%f", &studenti[i].medie);
                fprintf(file, "%s %d %.2f\n", studenti[i].nume, studenti[i].varsta, studenti[i].medie);
            }
        }
    }
    fclose(file);
    if ((file = fopen("Studenti.txt", "r")) == NULL)
    {
        printf("Error!");
    }
    else
    {
        while ((car = fgetc(file)) != EOF)
        {
            printf("car: %c ;poz: %ld\n", car, ftell(file));
        }
    }
    fclose(file);
    return 0;

}
