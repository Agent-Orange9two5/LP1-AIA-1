#include <stdio.h>


struct Student {
    char nume[50];
    int varsta;
    float medie;
};

int main()
{
  FILE* fisier;
  int n, i;

  if ((fisier=fopen("studenti.txt", "w")) == NULL)
    printf("Eroare la deschiderea fisierului\n");
  else {
    printf("Introduceti numarul de studenti: ");
    scanf("%d", &n);

    struct Student a[n];

     for(i = 0; i < n; i++)
        {
        printf("Nume: ");
        scanf("%s", &a[i].nume);

        printf("Varsta: ");
        scanf("%d", &a[i].varsta);

        printf("Media: ");
        scanf("%f", &a[i].medie);

        fprintf(fisier, "%s \n %d \n %f \n", a[i].nume, a[i].varsta, a[i].medie);
        }

    fclose(fisier);
  }
    FILE* fisier1 = fopen("studenti.txt" , "r");

    if (fisier1 == NULL){
       printf("Eroare la deschiderea fisierului\n");
    }
    else {
        char c;
        int poz = 0;

      while ((c = fgetc(fisier1)) != EOF){  //fgetc retine fiecare caracter din fisier pana la EOF

        printf("Caracterul citit: %c\n", c );
        poz = ftell(fisier1);               //ftell retine pozitia cursorului din fisier
        printf("Pozitia cursorului: %d\n", poz);
        }
    }
    fclose(fisier1);


 return 0;
}
