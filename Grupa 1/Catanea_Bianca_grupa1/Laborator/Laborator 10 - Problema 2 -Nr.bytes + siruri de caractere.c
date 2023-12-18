/* Se cere numarul de bytes continuti intr-un fisier.
De asemenea, se va afisa dintr-un fisier doar sirurile de caractere*/
#include <stdio.h>

// Functie pentru a determina dimensiunea unui fisier dat
int sizeof_file(char *filename) {
    // Deschide fisierul pentru citire
    FILE *file = fopen(filename, "rt");

    // Verifica daca fisierul a fost deschis cu succes
    if (file == NULL) {
        return -1; // Returneaza -1 pentru a indica o eroare la deschidere
    }

    // Pozitioneaza cursorul la sfarsitul fisierului
    fseek(file, 0, SEEK_END);

    // Afla pozitia ultimului caracter cu ajutorul ftell
    int bytes_count = ftell(file);

    // Inchide fisierul
    fclose(file);

    return bytes_count; // Returneaza dimensiunea fisierului in bytes
}

// Functie pentru afisarea continutului unui fisier text
void afisare_continut(char *filename) {
    // Deschide fisierul pentru citire
    FILE *file = fopen(filename, "rt");
    char s[100];

    // Verifica daca fisierul a fost deschis cu succes
    if (file == NULL) {
        return; // Returneaza fara a face nimic in caz de eroare la deschidere
    }

    // Citeste si afiseaza continutul fisierului linie cu linie
    while (fgets(s, 100, file) != NULL) {
        printf("%s", s);
    }

    // Inchide fisierul
    fclose(file);
}

int main() {
    // Numele fisierului de intrare
    char filename[] = "DATA.txt";

    // Determina dimensiunea fisierului
    int sz = sizeof_file(filename);

    // Verifica daca s-a produs o eroare la deschiderea fisierului
    if (sz < 0) {
        // Afiseaza mesaj de eroare si returneaza -1 pentru a indica eroarea
        fprintf(stderr, "ERROR: Fisierul nu a putut fi deschis %s", filename);
        return -1;
    }

    // Afiseaza continutul fisierului
    printf("Afisez continutul\n");
    afisare_continut(filename);

    // Afiseaza dimensiunea fisierului
    printf("\nFisierul %s are %d bytes\n", filename, sz);

    // Afiseaza dimensiunea fisierului pe stdout
    fprintf(stdout, "Fisierul %s are %d bytes\n", filename, sz);

    return 0;
}
