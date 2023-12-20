
#include <stdio.h>

void main(){
  FILE *fp;
  float a;
  int i,j,m,n;
  if ((fp=fopen("DATA.txt", "w"))==NULL)
  printf("Eroare la deschiderea DATA.txt pentru scriere\n");
  else{
    printf("Introduceti numarul de linii: ");
    scanf("%d", &n);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &m);

  for(i=0;i<n;i++){

    printf("Elemente linie %d \n", i);
    for(j=0;j<m;j++){
        printf("Element[%d]=", j);
        scanf("%f", &a);
        fprintf(fp, "%.2f", a);
    }
    fprintf(fp, "\n");
  }
  fputs("MATRICEA A FOST SCRISA CU SUCCES!", fp);
  fclose(fp);
}
if((fp=fopen("DATA.txt", "r"))== NULL) printf("Eroare la deschidere DATA.txt pentru citire \n");
else{
    printf("Elementele matricei sunt:\n");
    for(i=0;i<n;i++){
    for(j=0;j<m;j++)  {
        fscanf(fp, "%f", &a);
        printf("%.2f\t",a);
    }
    printf("\n");
}
    fclose(fp);
  }
  return 0;
}
