#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{ int i,j,m,n;
 cout << "Introduceti numarul de linii: ";
 cin >> n;
 cout << "Introduceti numarul de coloane: ";
 cin >> m;
  int **matrice = (int**)malloc(n*sizeof(int*));
  for (i=0; i<n; i++){
    matrice[i] = (int*)malloc(m*sizeof(int));
  }
    ofstream fout("matrice.txt");
  cout << "Introduceti elementele matricei: "<<endl;
  for (i=0; i<n; i++){
    for (j=0; j<m; j++){
        cin >> matrice[i][j];
    }
  }
  cout << "Elementele matricei: "<<endl;
  for (i=0; i<n; i++){
    for (j=0; j<m; j++){
        cout << matrice[i][j]<<" ";
    }
    cout << endl;
  }
  fout << "Elementele de deasupra diagonalei principale sunt: ";
  for (i=0; i<n; i++){
    for (j=0; j<m; j++){
         if (i<j){
         fout << matrice[i][j]<<" ";
         }
     }
  }
  fout.close();
  for (i=0; i<n; i++){
    free(matrice[i]);
  }
  free(matrice);
  return 0;
}
