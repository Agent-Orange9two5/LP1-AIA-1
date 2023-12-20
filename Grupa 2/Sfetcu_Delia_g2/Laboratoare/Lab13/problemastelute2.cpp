#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    char a[100][100];
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= n + 1; j++)
        {
           a[i][j] = ' ';
        }
    for(int i = 0; i < n; i++){
        for(int j = i; j < 2 * n - i - 1; j++)
        {
            a[i][j] = '*';
        }
    }
    for(int i = 0; i < n; i++)
      {
          for(int j = 0; j <= n + 1; j++)
        {
            cout << a[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}
