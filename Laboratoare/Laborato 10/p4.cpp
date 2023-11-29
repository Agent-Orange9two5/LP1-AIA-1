#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   // Declarație a unui pointer la fișier
   FILE * pFile;

   // Inițializare un șir de caractere de lungime 500
   char a[500] ="";

   // Șir de caractere pentru a citi linii din fișier
   char linie[70];

   // Variabile de iterație
   int i,j;

   // Variabilă pentru numărarea vocalelor
   int num=0;

   // Șir de caractere care conține vocalele
   char vocale[] = "aAeEiIouUoO";

   // Deschidere fișier pentru citire
   pFile = fopen ("fisier4.txt" , "r");

   // Verificare dacă deschiderea fișierului a avut succes
   if (pFile == NULL)
      perror ("Eroare la deschidere !");
   else
   {
       // Citirea fiecărei linii din fișier și adăugarea la șirul 'a'
       while (fgets (linie , 70 , pFile) != NULL)
            strcat(a, linie);

       // Închidere fișier
       fclose (pFile);
   }

   // Parcurgerea fiecărui caracter din șirul 'a'
   for (i=0;i<strlen(a);i++)
   {
      // Afișarea caracterului curent
      cout << a[i];

      // Verificare dacă caracterul curent este o vocală
      if (strchr(vocale, a[i]))
      {
         // Incrementarea contorului de vocale
         num++;
      }
   }

   // Afișarea numărului total de vocale
   cout << endl << "Numarul de vocale este " << num;

   // Returnarea valorii 0 pentru a indica terminarea cu succes a programului
   return 0;
}
