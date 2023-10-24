#include <iostream>

using namespace std;

int main()

{
    int a[105][105], n;
    cout << "Introduceti numarul de lini si coloane: ";
    cin >> n;
    for (int i=0; i<n; i++){
        cout << "Linia" << i+1 << ": ";
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout<<endl;

    cout<<"Matricea introdusa este: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << a[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout << "Numarul negativ:"<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] < 0){
                cout<<a[i][j]<<" "<<" se afla pe pozitia ("<< i+1 <<", "<< j+1 <<")"<<endl;
            }
        }
    }


    cout << "Numerele de deasupra diagonalei secundare sunt: ";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i+j < n-1){
                cout <<a[i][j]<<" ";
            }
        }
    }
cout<<endl;

    cout << "Numerele de sub diagonala principala sunt: ";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i > j){
                cout <<a[i][j]<<" ";
            }
        }
    }
    cout<<endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int nr = a[i][j];
            int invers = 0;
            int original = nr;
    while (original>9){
        invers = invers * 10 + original % 10;
        original /= 10;}
        if (nr = invers){
            cout<<"Numarul "<<a[i][j]<<" este palindrom "<<endl;}

        }
      }

     cout << "Vectorul din cadranul nord este: ";
     for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
                if (i<j && i+j<n-1){
                   cout<<a[i][j]<<" ";}
        }
     }
     cout<<endl;
     cout << "Vectorul din cadranul sud este: ";
     for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
                if (i>j && i+j>n-1){
                   cout<<a[i][j]<<" ";}
        }
     }
     cout<<endl;
     cout << "Vectorul din cadranul est este: ";
     for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
                if (i<j && i+j>n-1){
                   cout<<a[i][j]<<" ";}
        }
     }
     cout<<endl;
     cout << "Vectorul din cadranul vest este: ";
     for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
                if (i>j && i+j<n-1){
                   cout<<a[i][j]<<" ";}
        }
     }
cout<<endl;
return 0;
}
