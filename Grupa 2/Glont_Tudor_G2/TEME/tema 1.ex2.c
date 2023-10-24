#include <stdio.h>
#include <stdlib.h>
/*Sa se afiseze un mesaj simplu:
cout<<"Studentul are nota de trecere: ";
sau
cout<<"Studentul nu are nota de trecere: ";
urmat de nota studentului calculata dupa urmatoarele regului: se vor citii 3 numere de la tastatura. Acestea vor reprezenta 3 note separate. Se va calcula media aritmetica acelor 3 numere.
In cazul in care media > 6 studentul are nota de trecere, in caz contrar se va afisa mesajul "Studentul nu are nota de trecere: "
( Media celor 3 note va fi afisata cu 2 respectiv 6 zecimale). */

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float ma=(a+b+c)/3;
    if(ma>6)
      printf("Studentul are nota de trecere: %.2f",ma);
    if(ma<6)
       printf("Studentul nu are nota de trecere: %.6f",ma);
    return 0;
}
