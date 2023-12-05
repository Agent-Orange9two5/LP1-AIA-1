#include <stdio.h>
#include <stdlib.h>

struct student {
char nume[30];
int varsta;
float media;};

int main()
{int n,i;
FILE* fisier;
fisier=fopen("studenti.txt","w");
printf("Introduceti numarul de studenti: ");
scanf("%d",&n);
struct student a[n];
for(i=1;i<=n;i++)
{
    printf("Nume: ");
    scanf("%s",&a[i].nume);
    printf("Varsta:");
    scanf("%d",&a[i].varsta);
    printf("Media: ");
    scanf("%f",&a[i].media);
    fprintf(fisier,"%s \n %d \n %f \n",a[i].nume,a[i].varsta,a[i].media);}
    fclose(fisier);
}
FILE* fisier1;
fisier1=fopen("studenti.txt","r");
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
