#include <iostream>
#include <fstream>
using namespace std;
int n, i, j, a[50][50], b;
void citireMatrice()
{
	cout << "Cate linii si coloane va avea matricea?" << endl;
	cin >> n;
	cout << "Introduceti numerele matricei: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void afisareMatrice()
{
	cout << "Matricea este: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j]<< " ";
		}
		cout << endl;
	}
}
void sumaDiagonaleiPrincipale()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j = i) {
				b = b + a[i][j];
			}
		}
	}
	cout << "Suma diagonalei principale este: " << b;
}
void scriereFisierMatrice()
{
	ofstream f("sumadiagonala.txt");
	f << "Suma diagonalei principale este: " << b;
	f.close();
}
int main()
{
	citireMatrice();
	afisareMatrice();
	sumaDiagonaleiPrincipale();
	scriereFisierMatrice();

	return 0;
}
