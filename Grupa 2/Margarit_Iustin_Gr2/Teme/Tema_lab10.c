#include <stdio.h>

int main(){

    int n,i;
   printf("Cati elevi?");
   scanf("%d", &n);

struct elev{
    int varsta;
    char nume[50];
    float media;
}e[n];

for (i = 0; i < n; i++) {
        printf("Adaugati numele, varsta si media pentru elevul %d:\n", i + 1);
        scanf(" %s %d %f", e[i].nume, &e[i].varsta, &e[i].media);
    }

FILE *file = fopen("f_elev.txt", "w");

for(i=0;i<2;i++)
 fprintf(file, "Numele: %s  Varsta: %d  Media: %f\n", e[i].nume, e[i].varsta, e[i].media);
    
fclose(file);

file=fopen("f_elev.txt", "r");

 if(file == NULL) 
      perror("Eroare la deschidere fisier");

    else{
        char c=fgetc(file); /* Citeste caracter din fisier */
         while (c!=EOF){
            printf("%c", c);
            c=fgetc(file);
            printf("%d\n", ftell(file));/* Afiseaza pozitia cursorului dupa fiecare caracter citit din fisier */    
            }
            fclose(file);
        }



    return 0;
}
