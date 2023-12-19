#include <iostream>
#include <fstream>

using namespace std;

int a[10][10], i, j, n, sdp, sds;

void citireMatrice()
{
	cout << "Cate liniii si coloane va avea matricea?" << endl;
	cin >> n;
	cout << "Introduceti numere matricei: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Matricea intodusa este: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}

void sumaDiagonale()
{	
	ofstream f("sumaDiagonale.txt");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				sdp = sdp + a[i][j];
			}
			if (i + j == n - 1) {
				sds = sds + a[i][j];
			}
		}
	}
	f << "Suma diagonalei principale este: " << sdp << endl << "Suma diagonalei secundare este: " << sds;
	cout <<"Suma diagonalei principale este "<< sdp <<endl<<"Suma diagonalei secundare este: "<<sds;
}
int main()
{
	citireMatrice();
	sumaDiagonale();
	return 0;
}
