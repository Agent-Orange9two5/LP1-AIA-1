//creati un fisier cpp

//1 2 3 4 5 6 7 8 9 0-vector

/*  suma nr impare
    nr pare
    vectorul inversat
*/


#include <iostream>

using namespace std;

int main() {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 0}, i, s = 0;

    cout << "Numerele pare: ";

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 != 0)
            s = s + v[i];

        if(v[i] % 2 == 0)
            cout<< v[i] << " ";

    }

    cout << endl;

    cout << "Vectorul inversat: ";

    for(i = 9; i >= 0; i--)
        cout<< v[i] << " ";

    cout << endl;

    cout << "Suma numerelor impare: " << s;
}
