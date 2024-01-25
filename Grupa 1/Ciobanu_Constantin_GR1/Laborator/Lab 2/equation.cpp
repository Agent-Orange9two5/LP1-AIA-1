#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (a) {

        d = b*b-4*a*c;
        if (d >= 0) {

            cout << "x1 =";
            cout << ((-b+sqrt(d))/(2*a)) << endl;
            cout << "x2 =";
            cout << ((-b-sqrt(d))/(2*a)) << endl;

        }   else {

            cout << "x1 si x2 nu sunt numere reale" << endl;

        }


    }

    return 0;
}
