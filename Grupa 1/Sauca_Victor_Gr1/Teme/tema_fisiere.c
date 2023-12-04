#include <stdio.h>
#include <stdlib.h>
struct Student{
    char nume[50];
    int varsta;
    float medie;
};
int main(){
    FILE *f = fopen("t.txt","w");
    if(!f)printf("Eroare");
    else{
        int n;
        printf("Nr studenti: ");
        scanf("%d",&n);
        struct Student v[n];
        for(int i=0;i<n;++i){
            printf("Nume: ");
            scanf("%s",&v[i].nume);
            printf("Varsta: ");
            scanf("%d",&v[i].varsta);
            printf("Media: ");
            scanf("%f",&v[i].medie);
            printf("---------\n");
            fprintf(f,"%s \n %d \n %f \n",v[i].nume,v[i].varsta,v[i].medie);
        }
        fclose(f);
        f=fopen("t.txt","r");
        if(!f)printf("Eroare");
        else{
            char c=fgetc(f);
            int x;
            while(c!=EOF){
                x=ftell(f);
                printf("caracter: %c , poz: %d \n",c,x);
                c=fgetc(f);
            }
            //fget - memoreaza pe rand fiecare caracter din f pana la EOF
            //ftell - memoreaza pozitia caracterului in fisier (>=1)
            fclose(f);
        }  
    }
    return 0;
}
