#include <iostream>

using namespace std;

int i = 0;

void foo1(int);
void foo2(int);

void foo1(int n) {

    if (i <= n) {
        cout << i << " " << endl;
        i++;
        foo2(n);
    }
}

void foo2(int n) {
    if (i <= n) {
        cout << i << " " << endl;
        i++;
        foo1(n);
    }
    else
        return;
}

int main(void) {

    int n;
    cin >> n;
    foo1(n);

    return 0;
}
