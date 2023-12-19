#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("SumaPare.txt");
    int a[50], i, n, s = 0;
    cout << "Introduceti numarul de elemente ale vectorului: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {    cin >> a[i];
        if(a[i] % 2 == 0)
        s += a[i];
    }
    cout << "Suma numerelor pare este: " << s << endl;

    file << "Suma numerelor pare este: " << s;

    file.close();

    return 0;
}
