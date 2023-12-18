#include <stdio.h>

void main()
{
  FILE *fp;   // Declarație a unui pointer la structura de fișier
  float a;    // Variabilă pentru stocarea elementelor matricei
  int i, j, m, n;  // Variabile pentru indecși și dimensiuni ale matricei

  // Deschide fișierul DATA.txt pentru scriere (w - write)
  if ((fp = fopen("DATA.txt", "w")) == NULL)
    printf("Eroare la deschidere DATA.txt pentru scriere\n");
  else
  {
    // Solicită utilizatorului să introducă numărul de linii și coloane ale matricei
    printf("Introduceti numarul de linii: ");
    scanf("%d", &n);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &m);

    // Loop pentru citirea elementelor matricei și scrierea lor în fișier
    for (i = 0; i < n; i++)
    {
      printf("Elemente linie %d \n", i);
      for (j = 0; j < m; j++)
      {
        printf("Element[%d]=", j);
        scanf("%f", &a);
        fprintf(fp, "%.2f ", a);  // Scrie elementul în fișier cu două zecimale
      }
      fprintf(fp, "\n");  // Treci la următoarea linie în fișier
    }
    fputs("Matricea a fost scrisa cu succes!", fp);  // Adaugă un mesaj în fișier
    fclose(fp);  // Închide fișierul
  }

  // Deschide fișierul DATA.txt pentru citire (r - read)
  if ((fp = fopen("DATA.txt", "r")) == NULL)
    printf("Eroare la deschidere DATA.txt pentru citire\n");
  else
  {
    // Afișează elementele matricei citite din fișier
    printf("Elementele matricei sunt:\n");
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
      {
        fscanf(fp, "%f", &a);  // Citește elementul din fișier
        printf("%.2f\t", a);  // Afișează elementul cu două zecimale
      }
      printf("\n");  // Treci la următoarea linie în afișare
    }
    fclose(fp);  // Închide fișierul
  }
}
