#include <stdio.h>
#include <stdlib.h>
/* punct 1 cerinta */
void main ()
{
    FILE *fp;
    struct student{
    char nume[20];
    char prenume[20];
    float varsta;
    float media;
    };
/* punct 2 cerinta */
    if ((fp = fopen("student.txt", "w")) == NULL)
    printf("Eroare la deschidere DATA.txt pentru scriere\n");
  else
    fprintf(fp, "Andrei Ion 18 8\n");
    fprintf(fp, "George Alexandru 19 9\n");
    fclose(fp);
/* punct 3 cerinta */
    if ((fp = fopen("student.txt", "r")) == NULL)
    printf("Eroare la deschidere DATA.txt pentru citire\n");
  else;
    int caract;
    while ((caract = fgetc(fp)) !=EOF){
        putchar(caract);
        printf("pozitie: %ld\n", ftell(fp));
    }
  fclose(fp);
return 0;
}
/* punct 4 cerinta, explicatii:
functia fgetc citeste un caracter din fisierul dat si returneaza caracterul citit pana intalneste End Of File.
functia ftell ne arata pozitia curenta a cursorului in fisierul dat */
