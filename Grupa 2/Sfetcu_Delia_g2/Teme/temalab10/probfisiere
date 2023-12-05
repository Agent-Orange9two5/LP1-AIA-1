#include<stdio.h>
#include<stdlib.h>

//definirea structurii de date
struct student
{
    char nume[21];
    int varsta_stud;
    float medie;
}stud[100];
//definitia functiei main
int main(){
    int n;
    FILE *pf;   //declararea variabilei pointer de fisier
    pf = fopen("fisiertema.txt", "w");  //deschiderea fisierului in modul write, adica scrie
    printf("Introduceti numarul de studenti: ");
    //introducerea numarului de studenti
    scanf("%d", &n);
    //introducerea informatiilor despre studenti in fisier cu ajutorul structurii create mai devreme
    for(int i = 1; i <= n; i++)
    {
        printf("Introduceti numele, varsta si media studentului %d: \n", i);
        scanf("%s %d %f", stud[i].nume, &stud[i].varsta_stud, &stud[i].medie); //introducerea datelor fiecarui student in parte
        fprintf(pf, "%s %d %.2f \n", stud[i].nume, stud[i].varsta_stud, stud[i].medie); //afisarea datelor fiecarui student in parte
    }
    

    fclose(pf); //inchiderea fisierului
    pf = fopen("fisiertema.txt", "r");  //deschiderea fisierului in read mode
    int c;  //declararea variabilei pentru parcurgerea caracterelor din fisier
    int long poz = 0;   //declararea variabilei pentru retinerea pozitiei caracterelor
    //creerea unui while pentru verificarea si actualizarea pozitiilor caracterelor 
    
    while((c = fgetc(pf)) != EOF)    //fgetc este folosit pentru a returna pozitia unui singur caracter at a time in codul ASCII 
    {
        printf("Caracter %c, pozitie: %ld\n", c, poz);
        poz = ftell(pf);    //functia ftell este folosita pentru a determina pozitia pointer fileului din fisier respectand indexarea  
    }
    fclose(pf);   //inchiderea fisierului

    return 0;
}
