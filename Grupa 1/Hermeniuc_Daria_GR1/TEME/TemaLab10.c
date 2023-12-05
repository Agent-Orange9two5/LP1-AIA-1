#include <stdio.h>
#include <string.h>

struct Student {
    char nume[50];

    int varsta;

    float medie;
}s1, s2;

int main() {
    FILE *fp;
    
    strcpy(s1.nume, "Dumitru Andrei");

    s1.varsta = 19;

    s1.medie = 9.5;

    strcpy(s2.nume, "Popescu Bogdan");

    s2.varsta = 19;

    s2.medie = 8.0;

    if((fp = fopen("STUD.txt", "w")) == NULL) 
        printf("Eroare la deschiderea fisierului STUD.txt pentru scriere\n");
    
    else
    {
        fprintf(fp, "%s %d %.2f\n", s1.nume, s1.varsta, s1.medie);

        fprintf(fp, "%s %d %.2f\n", s2.nume, s2.varsta, s2.medie);
    }
    
    fclose(fp);

    if((fp = fopen("STUD.txt", "r")) == NULL) 
        printf("Eroare la deschiderea fisierului STUD.txt pentru citire\n");

    int c, poz = 0;

    while((c = fgetc(fp)) != EOF) {  //Cu functia fgetc parcurgem datele din fisier caracter cu caracter si de fiecare data stocam un caracter in variabila 'c'
        printf("Cracterul %c se afla pe pozitia %d\n", c, poz);

        poz = ftell(fp); //Cu functia ftell actualizam pozitia la care ne aflam
    }

    fclose(fp);

    return 0;
}
