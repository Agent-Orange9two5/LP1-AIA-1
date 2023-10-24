#include <iostream>
using namespace std;

int main()
{
    int v[10], s = 0, n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {   //citirea vectorului
        cin >> v[i];
        //suma elementelor impare
        if(v[i] % 2 != 0)
            s = s + v[i];
        //afisarea numerelor pare
        if(v[i] % 2 == 0)
            cout << v[i] << " ";
    }
    cout << endl;
    //afisarea elementelor vectorului in ordine inversa
    for(int i = n - 1; i >= 0; i--)
        cout << v[i] << " " << endl;
    //afisarea sumei elementelor impare
        cout << "Suma elementelor impare:" << s << " " << endl;
}
