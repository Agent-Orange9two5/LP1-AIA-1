#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fp("SumaPare.txt");
    int a[50], i, n, s = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {    cin >> a[i];
        if(a[i] % 2 == 0)
        s += a[i];
    }
    fp << s;
    
    return 0;
}
