#include <iostream>
#include <cstdlib>

using namespace std;

struct Carte {
    char titlu[30];
    char autor[30];
    int an;
    int id;
};

int main() {
    int numcarti;
    cout << "Introduceti numarul de carti: ";
    cin >> numcarti;

    int n=10;
    Carte *carte = (Carte *)malloc(n* sizeof(Carte));

    if (carte == nullptr) {
        cout << "Eroare la alocarea memoriei\n";
        return 1;
    }


    FILE *fp;
    if ((fp = fopen("biblioteca.txt", "w")) == NULL) {
        cout << "Eroare la deschidere biblioteca.txt pentru scriere\n";
        free(carte);
        return 1;
    }
    for (int i = 0; i < numcarti; i++) {
        cout << "Introduceti titlul cartii "<<i+1<<": ";
        cin >> carte[i].titlu;

        cout << "Introduceti numele autorului: ";
        cin >> carte[i].autor;

        cout << "Introduceti anul publicarii: ";
        cin >> carte[i].an;

        cout << "Scrieti un id pentru cartea introdusa: ";
        cin >> carte[i].id;
        cout <<endl;
        fprintf(fp, "ID: %d, Titlu: %s, Autor: %s, An: %d\n",
                carte[i].id, carte[i].titlu, carte[i].autor, carte[i].an);
    }

    fclose(fp);
    free(carte);

    return 0;
}
