/*Se cere numarul de bytes continuti intr-un fisier.
De asemenea, se va afisa dintr-un fisier doar sirurile de caractere */
#include <stdio.h>
#include <stdlib.h>
//Functie pentru a determina dimesiunea unui fisier dat
int sizeof_file(char *filename){
    //Deschide fisierul pentru citire
    FILE *file=fopen(filename, "rt");
    //Verifica daca fisierul a fost deschis cu succes
    if(file==NULL){
        return -1; //Returneaza -1 pentru a indica eroarea la deschidere
    }
    fseek(file, 0, SEEK_END);
    //Afla pozitia ultimului caracter cu ajutorul ftell
    int bytes_count=ftell(file);
    //Inchide fisierul
    fclose(file);
    return bytes_count; //Returneaza dimensiunea fisierului in bytes
}

void afisare_continut(char *filename){
    FILE *file=fopen(filename, "rt");
    char s[100];

    if(file==NULL){
        return;
    }
    while(fgets(s, 100, file)!=NULL){
        printf("%s", s);
    }
    fclose(file);
}

int main(){
    char filename[]="DATA.txt";
    int sz=sizeof_file(filename);

    if(sz<0){
        fprintf(stderr, "ERROR: Fisierul nu a putut fi deschis %s", filename);
        return -1;
    }

    printf("Afisez continutul\n");
    afisare_continut(filename);

    printf("\nFisierul %s are %d bytes\n", filename, sz);

    fprintf(stdout, "Fisierul %s are %d bytes\n", filename, sz);

    return 0;
}
