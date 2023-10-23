/*Se citeste o matrice patratica de 4/4 nr reale. Sa se afiseze:
-numerele negative din matrice
-toate elem de deasupra diag secundare
-toate elem de sub diag principala
-toate numerele palindroame de pe liniile impare
-sa se creeze 4 vectori -dintre diag principale sus jos stanga dreapta*/
#include <iostream>

using namespace std;

int main()
{
    int a[5][5], n, x = 0, h = 0, k, c, v[16], p1[10], nr, p2[10], p3[10], p4[10];
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "Numerele negative din matrice sunt: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {  
            if(a[i][j] < 0)
            cout << a[i][j] << " ";
        }
    cout << endl <<  "Elementele de deasupra diagonalei secundare sunt: ";
    for(int i = 0; i < n; i++)
       { for(int j = 0; j < n; j++)
            if(i + j < n - 1)
            cout << a[i][j] << " ";
        }
    cout << endl << "Elementele de sub diagonala principala sunt: ";
    for(int i = 0; i < n; i++)
      { for(int j = 0; j < n; j++)
            if(i > j)
            cout << a[i][j] << " ";
        }
    cout << endl << "Vector cu numerele palindroame din matrice: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            k = a[i][j];  
            c = 0;
            if(a[i][j] > 9){
            while(k){
                c = c * 10 + k % 10;
                k /= 10;
                }
            if(c == a[i][j])
                v[h++] = c;
            }
        }
        for(int i = 0; i < h; i++)
            cout << v[i] << " ";
    cout << endl << "Vector cu elementele aflate deasupra diagonalei principale si a celei secundare: ";
    for(int i = 0; i < n; i++)
         for(int j = 0; j < n; j++)
   {
            if((i < j) && (i + j < n - 1))
                p1[x++] = a[i][j];
        }
    for(int i = 0; i < x; i++)
        cout << p1[i] << " ";
x = 0;
cout << endl << "Vector cu elementele aflate in stanga diagonalei principale si a celei secundare: ";
    for(int i = 0; i < n; i++)
         for(int j = 0; j < n; j++)
         {
             if((i > j) && (i + j < n - 1))
                p2[x++] = a[i][j];
         }
    for(int i = 0; i < x; i++)
        cout << p2[i] << " ";
x = 0;
cout << endl << "Vector cu elementele aflate in dreapta diagonalei principale si a celei secundare: ";
    for(int i = 0; i < n; i++)
         for(int j = 0; j < n; j++)
         {
             if((i < j) && (i + j > n - 1))
                p3[x++] = a[i][j];
         }
    for(int i = 0; i < x; i++)
        cout << p3[i] << " ";
    x = 0;   
cout << endl << "Vector cu elementele aflate in sub diagonala principala si cea secundara: ";
    for(int i = 0; i < n; i++)
         for(int j = 0; j < n; j++)
         {
             if((i > j) && (i + j > n - 1))
                p4[x++] = a[i][j];
         }
    for(int i = 0; i < x; i++)
        cout << p4[i] << " ";
    
}      
    
