#include <stdio.h>

 typedef struct{
    char nume[100];
    int varsta;
    float medie;
} student;

int main(){

    FILE *fisier = fopen("studenti.txt", "w");

    if(fisier == NULL){
        printf("Eroare la deschiderea fisierului.\n");
        return 1;
    }

    student student1 = {"Stanculescu Mihai", 18, 4.5};
    student student2 = {"Bucura Ion Bogdan", 19, 10};

    fprintf(fisier, "%s, %d, %.2f\n", student1.nume, student1.varsta, student1.medie);
    fprintf(fisier, "%s, %d, %.2f\n", student2.nume, student2.varsta, student2.medie);
    fclose(fisier);

    fisier = fopen("studenti.txt", "r");

    if(fisier == NULL){
        printf("Eroare la deschiderea fisierului.\n");
        return 1;
    }

    int caracter;
    int pozitie=0;
        while((caracter = fgetc(fisier)) != EOF){      //Functia  fgetc citeste 1 caracter la fiecare iteratie a buclei while
            printf("%c", caracter);                    
            pozitie = ftell(fisier);                   //Functia ftell returneaza pozitia cursorului in fisier
            printf(" (pozitie: %d)", pozitie);
            printf("\n");
         }
    fclose(fisier);

    return 0;
}
