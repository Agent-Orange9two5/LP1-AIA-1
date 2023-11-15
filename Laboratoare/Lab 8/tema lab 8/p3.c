// Exemplu de variabilă statică vs non-statică
#include "stdio.h"

// Funcție cu variabilă statică
int functie1()
{
    // Variabila statică menține valoarea între apeluri
    static int x = 0;

    // Se adaugă 10 la valoarea variabilei
    x += 10;

    // Se returnează valoarea curentă a variabilei
    return x;
}

// Funcție cu variabilă non-statică
int functie2()
{
    // Variabila locală este reinițializată la fiecare apel
    int x = 0;

    // Se adaugă 10 la valoarea variabilei
    x += 10;

    // Se returnează valoarea curentă a variabilei
    return x;
}

// Funcția principală
void main()
{
    // Numărul de iterații pentru buclele for
    int n = 10;

    // Afisează rezultatele pentru funcția cu variabilă statică
    printf("Functie cu variabila static: ");
    for (int i = 0; i < n; i++)
    {
        // Afișează rezultatul apelului funcției cu variabilă statică
        printf("%d ", functie1());
    }

    // Afișează o linie nouă pentru claritate
    printf("\n");

    // Afisează rezultatele pentru funcția cu variabilă non-statică
    printf("Functie cu variabila non-static: ");
    for (int i = 0; i < n; i++)
    {
        // Afișează rezultatul apelului funcției cu variabilă non-statică
        printf("%d ", functie2());
    }
}
