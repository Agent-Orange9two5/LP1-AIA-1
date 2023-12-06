#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

struct Carte {
char titlu[50];
char autor[30];
int an;
int id;
};
int main()
{

  int numcarti = 50;
  Carte *carteArray = (Carte *)malloc(numcarti * sizeof(Carte));

    if (carteArray == nullptr) {
        cout << "Failed to allocate memory\n";
        return 1;
    }
  FILE *fp;
  if ((fp = fopen("biblioteca.txt", "w")) == NULL)
    cout << ("Eroare la deschidere bibiloteca.txt pentru scriere\n");
  else
    struct biblioteca*Carte[100];
    cout <<"Introduceti numarul de carti:"<<numcarti;
  for (int i=1; i<numcarti; i++) {
    cout << "Introduceti tiltul cartii";
   cin >> Carte[i].titlu;
    cout << "Introduceti numele autorului";
   cin >> Carte[i].autor;
    cout << "Introduceti anul publicarii";
   cin >> Carte[i].an;
  }
   if ((fp = fopen("biblioteca.txt", "r")) == NULL)
    printf("Eroare la deschidere biblioteca.txt pentru citire\n");
  else;

}
