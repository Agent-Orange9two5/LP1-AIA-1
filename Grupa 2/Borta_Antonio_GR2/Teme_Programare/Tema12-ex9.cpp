#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int s = 0, i, n, *c;
    ofstream file("SumaNumere.txt");
    cout << "Introduceti numarul de numere: ";
    cin >> n;
    c = (int*)malloc(n*sizeof(int));
    if (c == nullptr)
    {
        cout << "Eroare la alocarea memoriei!" << endl;
        return 1;
    }
    for(i = 0; i < n; i++)
    {
        cin >> c[i];
         s += c[i];
    }

    file << "Suma calculata este : " << s << endl;

    file.close();

    return 0;
}
