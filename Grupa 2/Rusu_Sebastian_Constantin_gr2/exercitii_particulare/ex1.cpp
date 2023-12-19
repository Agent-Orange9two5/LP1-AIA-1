#include <iostream>
#include <fstream>
using namespace std;

int a[50],i, n, s;

void citireVector() 
{
    s = 0;
    cout << "Cate numere doriti sa introduceti in vector?" << endl;
    cin >> n;
    cout << "Introduceti numerele: " << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Vectorul introdus este: " << endl;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void suma() 
{
    ofstream f("sumaf.txt");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            s = s + a[i];
        }
    }
    cout << endl << "Suma numerelor pare din vector este: " << s;
    f << s;
    f.close;

}

int main()
{

    citireVector();
    suma();
    return 0;
}

