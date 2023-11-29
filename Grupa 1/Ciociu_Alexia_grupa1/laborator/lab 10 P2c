#include <stdio.h>
#include <stdlib.h>

int sizeof_file(char *filename){
    FILE *file=fopen(filename, "rt");

    if(file==NULL){
        return -1;
    }
    fseek(file, 0, SEEK_END);

    int bytes_count=ftell(file);

    fclose(file);
    return bytes_count;
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
