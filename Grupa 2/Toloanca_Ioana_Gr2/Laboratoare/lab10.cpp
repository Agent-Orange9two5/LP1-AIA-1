//ex1
#include <stdio.h>
#include <stdlib.h>

void main()
{ FILE *fp;
float a;
int i,j,m,n;
if((fp=fopen("DATA.txt","w"))== NULL)
    printf("Eroare la deschidere DATA.txt pentru scriere\n");
    else {
        printf("Introduceti numarul de linii:");
        scanf("%d", &n);
         printf("Introduceti numarul de coloane:");
        scanf("%d", &m);
        for(i=0;i<n;i++)
        {
            printf("Elemente linie %d\n",i);
            for(j=0;j<m;j++)
            {
                printf("Element[%d]=",j);
                scanf("%f",&a);
                fprintf(fp,"%.2f",a);
            }
            fprintf(fp,"\n");
        }
        fputs("Matricea a fost scrisa cu succes!",fp);
        fclose(fp);
    }

    if((fp=fopen("DATA.txt","r"))== NULL)
        printf("Eroare la deschidere DATA.txt pentru citire\n");
    else {
        printf("Elementele matricei sunt:\n");
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        { fscanf(fp, "%f",&a);
    printf("%.2f\t",a);
            }
        printf("\n");
    }
    fclose(fp);

}
}


//ex2
#include <stdio.h>
#include <stdlib.h>
int sizeof_file(char *filename) {
FILE *file=fopen(filename, "rt");
if(file==NULL) {
    return -1;
}
fseek(file,0,SEEK_END);
int bytes_count=ftell(file);
fclose(file);
return bytes_count;
}
void afisare_continut(char *filename)
{
    FILE *file=fopen(filename, "rt");
    char s[100];
    if(file==NULL) {return;}
    while(fgets(s,100,file)!=NULL) {
        printf("%s",s);
    }
    fclose(file);
}
int main(){
char filename[]="DATA.txt";
int sz=sizeof_file(filename);
if(sz<0) {
    fprintf(stderr, "ERROR:Fisierul nu a putut fi deschis %s", filename);
    return -1;
}
printf("Afisez_continutul\n");
afisare_continut(filename);
printf("\nFisierul %s are %d bytes\n", filename, sz);
fprintf(stdout, "Fisierul %s are %d bytes\n", filename, sz);
return 0;
}


//ex3
#include <iostream>
#include<fstream>
using namespace std;

int main()
{float n1,n2,n3,n4,t;
float mo,mf;
ifstream f("note.txt");
ofstream g("media.txt");
    f>>n1;
    cout << "Nota 1:" << n1<<endl;
    f>>n2;
    cout << "Nota 2:" << n2<<endl;
    f>>n3;
    cout << "Nota 3:" << n3<<endl;
    f>>n4;
    cout << "Nota 4:" << n4<<endl;
    mo=(float)(n1+n2+n3+n4)/4;
    f>>t;
    cout << "Nota la teze:" << t<<endl;
    cout << "Media notelor este:" << mo<<endl;
    mf=(mo*3+t)/4;
    cout << "Media finala este:" << mf<<endl;
    g<<"Media finala este:"<<mf<<endl;
    f.close();
    g.close();
    return 0;
}


//ex4
#include <iostream>
#include <string.h>
using namespace std;

int main()
{ FILE *pFile;
char a[500]="";
char linie[70];
int i,j;
int num=0;
char vocale[]="aAeEiIoOuU";
pFile=fopen("fisier4.txt", "r");
if(pFile==NULL)
    perror("Eroare la deschidere!");
else
{
    while(fgets(linie,70,pFile)!=NULL)
        strcat(a,linie);
    fclose(pFile);
}
for(i=0;i<strlen(a);i++)
{
    cout<<a[i];
    if(strchr(vocale,a[i]))
    {
        num++;
    }
}
    cout << endl<<"Numarul de vocale este:"<<num;
    return 0;
}

