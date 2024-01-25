#include <stdio.h>

struct Masina {
    char marca[100];
    char model[50];
    unsigned short anFabricatie;
    char numarInmatriculare[8];
    enum Culoare color;
};

struct Masina citesteMasina() {
    struct Masina masina;
    
    printf("Care este marca masinii? ");
    fgets(masina.marca, 100, stdin);
    printf("Care este modelul masinii? ");
    fgets(masina.model, 50, stdin);
    printf("Care este numarul de inmatriculare al masinii? ");
    fgets(masina.numarInmatriculare, 8, stdin);

    masina.color = ROSU;

    printf("Care este anul de fabricatie a masinii? ");
    scanf("%hu", &masina.anFabricatie);
    return masina;
}

void afiseazaMasina(struct Masina masina) {
    
}

enum Culoare {
    NEGRU,
    BEJ,
    ALB,
    VERDE,
    ALBASTRU,
    ROSU
};

int main() {

    struct Masina parcAuto[10];
    parcAuto[0] = citesteMasina();
    afiseazaMasina(parcAuto[0]);

    return 0;
}
