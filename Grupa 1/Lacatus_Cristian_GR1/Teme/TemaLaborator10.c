#include <stdio.h>


struct Student {
    char nume[50];
    int varsta;
    float medie;
};
int main() { 

// Deschidem fișierul în modul de scriere ("w")
    FILE *fisier = fopen("studenti.txt", "w");

// Verificăm dacă fișierul s-a deschis cu succes
if (fisier == NULL) {
    printf("Eroare la deschiderea fișierului!");
    return 1;
}
// Informatile despre studenti in fisier utilizand "fprintf"
fprintf (fisier, "George 20 8.7\n");
fprintf (fisier , "Maria 21 9.2\n");

// Inchidem fișierul
    fclose (fisier);

// Deschidem fișierul în modul de citire ("r")
fisier = fopen("studenti.txt", "r");

// Verificăm dacă fișierul s-a deschis cu succes
if (fisier == NULL) {
    printf("Eroare la deschiderea fișierului!");
    return 1;
}
//Variabila pentru a citi fiecare caracter din fisier
  int caracter;
//Variabila pentru a retine pozitia caracterului in fisier
  int pozitie = 0;
  
//Cu functia fgtec citim fiecare caracter din fisier pana la EOF
while((caracter = fgetc(fisier)) != EOF)
  
//Cu functia ftell afisam pozitia caracterului in fisier
printf("Caracter: %c, Pozitie: %ld\n", caracter, ftell(fisier)); 

// Inchidem fișierul
fclose(fisier);

return 0;
}


