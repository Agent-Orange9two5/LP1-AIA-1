#include <iostream>
using namespace std;
// Funcție recursivă pentru a calcula cel mai mic divizor comun (CMMD)
int cmmd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return cmmd(b, a % b);
    }
}

int main() {
    int num1, num2;

    cout << "Introduceti primul numar: ";
    cin >> num1;

    cout << "Introduceti al doilea numar: ";
    cin >> num2;

    // Calculul CMMD folosind funcția recursivă
    int rezultat = cmmd(num1, num2);

    cout << "Cel mai mic divizor comun pentru " << num1 << " si " << num2 << " este: " << rezultat <<endl;

    return 0;
}
