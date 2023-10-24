#include <iostream>
using namespace std;

int main()
{
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0;
    for (auto i: v)
        if (i % 2 != 0)
            s += i;
    cout << "Suma nr impare: " << s << "\n" << "Nr pare: ";
    for (auto i: v)
        if (i % 2 == 0)
            cout << i << " ";
    cout << "\nVectorul inversat: ";
    for (int i = 9; i >= 0; i--)
        cout << v[i] << " ";
}
