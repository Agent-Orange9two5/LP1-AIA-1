/*Se citesc de la tastatura doua matrice cu elemente numere reale A(n x n) si B(n x n). Matricele se
stocheaza intr-un tablou bidimensional cu maxim 10 de linii si 10 de coloane. De asemenea,
numarul de linii n si numarul de coloane n se citesc de la tastatura. Sa se determine si sa afiseze:
- suma celor doua matrice;
- maximul elementelor de deasupra diagonala secundara pentru matricea A si B;
- produsul elementelor de sub diagonala secundare.
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/

#include <iostream>
using namespace std;
int main(){
    int n, A[10][10], B[10][10], i,j, suma=0, produs_1=1, produs_2=1;
    cout<<" Introduce cat de mare sa fie matricea: ";
    cin>>n;
    if (n>10){
        cout<<" Matricea nu poate fi mai mare decat 10. (Matricele A si B sunt de 10 linii si 10 coloane acum).";
        n = 10;}
    if (n<=0){
        cout<<" Matricea nu poate fi mai mic decat 0. (Matricele A si B sunt de 2 linii si 2 coloane acum).";
        n = 2;}
    else{
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>A[i][j];
                suma += A[i][j];

            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>B[i][j];
                suma += B[i][j];

            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i+j<n-1)
                cout<< "Maximul dintre elementele din matricea A si B sunt: " <<max(A[i][j], B[i][j]) <<endl;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i+j>n-1)
                produs_1 *= A[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i+j>n-1)
                produs_2 *= B[i][j];
        }
    }
    cout<<endl<<"Suma celor doua matrice sunt: "<<suma<<endl;
    cout<<"Produsul matricei A este: "<<produs_1<<endl;
    cout<<"Produsul matricei B este: "<<produs_2<<endl;
    return 0;
}
