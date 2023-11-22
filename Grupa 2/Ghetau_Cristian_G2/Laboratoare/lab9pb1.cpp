//calculul lui n!
#include <iostream>
using namespace std;
int fact_iternativ(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *=1;
    }
    return fact;
}
int fact_recursiv(int n) {
    //cazul de baza pentru recursivitate: 0! este 1
    if (n == 0)
        return 1;
    else
        // formula recursiva: n! = n * (n-1) !
        return n * fact_recursiv(n - 1);
}
int main() {
    int n;
    cout << "dati n: ";
    cin >> n;
    // afisarea rezultatului pentru metoda iterativa
    cout << "n! cu metoda interativa este egal cu : " << fact_iternativ(n) << endl;
    // afisarea rezultatului pentru metoda recursiva
    cout << "n! cu metoda recursiva este egal cu: " << fact_recursiv(n);
    return 0;
}


