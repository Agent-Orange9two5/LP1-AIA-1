#include <stdio.h>
int n,i;
struct Student{
    char nume[10];
    int varsta,media;
}s[10];

int main()
{  
    FILE* pf;
    pf=fopen("in.txt","w");
    if(pf==NULL)
    { printf("Nu s-a putut deschide fisierul.\n");
        return -1;}
        else{
        printf("Introduceti numarul de studenti: ");
        scanf("%d", &n); //citim numarul de studenti
        
        for(i=0;i<n;i++){
            printf("Introduceti datele pentru studentul: %d\n", i+1);
        scanf("%s %d %d", s[i].nume, &s[i].varsta, &s[i].media);  //citim de la tastatura datele
        fprintf(pf, "%s %d %d\n", s[i].nume,s[i].varsta, s[i].media);}  //le punem in fisier
        
        
    fclose(pf);
    
    pf=fopen("in.txt","r");
    if(pf==NULL)
    { printf("Nu s-a putut deschide fisierul.\n");
        return -1;}
        
        else{
            char c;
            long poz;
            while((c=fgetc(pf))!= EOF )  //cat timp fgetc citeste un caracter din pf si il atribuie lui c si este diferit de eof (end of file)
            printf("Caracter: %c, Pozitie curenta: %ld\n", c, (poz=ftell(pf)) ); //ftell actualizeaza si atribuie lui poz pozitia curenta a cursorului din pf
    }

    fclose(pf);
        }
        return 0;
        
}

