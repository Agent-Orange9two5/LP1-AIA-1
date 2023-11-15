#include <stdio.h>

void main(void)
 {
   enum zile_saptam {luni = 10, marti, miercuri, joi, vineri};
   enum zile_saptam zi_lucru;
   for (zi_lucru = luni; zi_lucru <= vineri; zi_lucru++)
     {
         printf("%d ", zi_lucru);
     }
   zi_lucru = miercuri;
   printf ("\nValoarea variabilei de tip enum \"zi_lucru\" este %d" , zi_lucru);
 }
