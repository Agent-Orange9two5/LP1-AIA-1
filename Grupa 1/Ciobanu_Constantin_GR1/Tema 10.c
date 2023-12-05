#include <stdio.h>

typedef struct {

    char name[50];
    int age;
    float medie;

} Student;

int main() {

    FILE * fptr;

    Student S1, S2;

    fptr = fopen("students.txt", "w");

    printf("Introduceti datele despre 2 studenti, cate o linie pentru fiecare student\n");
    scanf("%s %d %f", S1.name, &S1.age, &S1.medie);
    scanf("%s %d %f", S2.name, &S2.age, &S2.medie);

    fprintf(fptr, "%s %d %f\n", S1.name, S1.age, S1.medie);
    fprintf(fptr, "%s %d %f\n", S2.name, S2.age, S2.medie);

    fclose(fptr);

    fptr = fopen("students.txt", "r");
    
    do
    {
        
        char c = fgetc(fptr);
        
        if (feof(fptr))
            break ;
 
        printf("%c", c);
        printf("Pozitie %ld\n", ftell(fptr));
    }  while(1);
    
    fclose(fptr);

    return 0;
}
