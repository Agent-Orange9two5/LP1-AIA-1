#include <stdio.h>

typedef struct {        // Structura Student

    char name[50];
    int age;
    float medie;

} Student;

int main() {

    FILE * fptr;

    Student S1, S2;

    fptr = fopen("students.txt", "w");      //  Deschid Fisierul in mod de scriere

    printf("Introduceti datele despre 2 studenti, cate o linie pentru fiecare student\n");
    scanf("%s %d %f", S1.name, &S1.age, &S1.medie);
    scanf("%s %d %f", S2.name, &S2.age, &S2.medie);     //  Introduc datele despre Studenti

    fprintf(fptr, "%s %d %f\n", S1.name, S1.age, S1.medie);
    fprintf(fptr, "%s %d %f\n", S2.name, S2.age, S2.medie);     //  Afisez datele despre Studenti in fisier

    fclose(fptr);   //  Inchid fisierul

    fptr = fopen("students.txt", "r");      //  Deschid fisierul in mod citire
    
    do
    {
        
        char c = fgetc(fptr);       //  creez un caracter care ia valoarea caracterului la care e cursorul
        
        if (feof(fptr)) 
            break ;     //  Daca cursorul ajunge la sfarsitul fisierului atunci se iese din bucla
 
        printf("%c", c);
        printf("Pozitie %ld\n", ftell(fptr));   //  Se afiseaza Pozitia cursorului
        
    }  while(1);
    
    fclose(fptr);   //  Inchid fisierul

    return 0;
}
