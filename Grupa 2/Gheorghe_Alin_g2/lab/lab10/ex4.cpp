#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    FILE * pFile;
    char a[500]="";
    char linie[70];
    int i,j;
    int num=0;
    char vocale[]="aAeEiIouUO";
    pFile=fopen("fisier4.txt","r");
    if(pFile==NULL)
        perror("Ëroare la deschidere!");
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
    cout<<endl<<"Numarul de vocale este"<<num;
    return 0;
}
