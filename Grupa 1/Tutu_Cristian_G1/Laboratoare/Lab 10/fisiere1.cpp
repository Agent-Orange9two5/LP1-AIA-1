#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    float a;
    int i,j,m,n;
    if((fp=fopen("DATA.txt","w"))==NULL)
        printf("Eroare la deschidere DATA.txt pentru scriere\n");
    else
    {
        printf("Introduceti numarul de linii: ");
        scanf("%d",&n);
        printf("Introduceti numarul de coloane: ");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
            printf("Elemente linie %d \n",i);
            for(j=0;j<m;j++)
            {
                printf("Elemente[%d]=",j);
                scanf("%f",&a);
                fprintf(fp,"%.2f",a);
            }
            fprintf(fp,"\n");
        }
        fputs("Matricea a fost scrisa cu succes!",fp);
        fclose(fp);
    }
    if((fp=fopen("DATA.txt","r"))==NULL)
        printf("Eroare la deschidere DATA.txt pentru citire \n");
    else
    {
        printf("Elementele matricei sunt:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                fscanf(fp,"%f",&a);
                printf("%.2f\t",a);
            }
        printf("\n");
        }
        fclose(fp);
    }

}
