#include <stdio.h>
#include <stdlib.h>

struct Student
    {
        char nume[50];
        float varsta,media;
    };
int main()
{
    FILE *fp=fopen("student.txt","w");
    if (fp  == NULL)
    printf("Eroare la deschidere student.txt");

    fprintf(fp, "Gheorghe Alin 19 10");
    fprintf(fp, "Victoras Mihai 23 8");
    fclose(fp);

    fp = fopen("student.txt","r");
    if(fp==NULL)
    printf("Eroare la deschidere student.txt");
    int caracter;
    while((caracter = fgetc(fp))!= EOF) //Cat timp mai sunt linii in fisier
    {
        putchar(caracter);
        printf("(pozitie: %ld\n", ftell(fp)); //Afiseaza caracterul si pozitia sa
    }
    fclose(fp);
    return 0;
}
