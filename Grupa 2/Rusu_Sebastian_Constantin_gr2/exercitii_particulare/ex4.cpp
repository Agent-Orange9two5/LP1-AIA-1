#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int n, nr, i,j, v[20], a;

void generareNr()
{
	cout << "Cate numere doriti sa generati? " << endl;
	cin >> n;
	srand(time(0));
	for (i = 0; i < n; i++) {
		v[i] = rand();
		cout << endl << v[i] << endl;
	}
}

void sortareNr()
{
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (v[i] < v[j]) {
				a = v[j];
				v[j] = v[i];
				v[i] = a;
			}
		}
	}
}
void scriereFisier()
{
	ofstream f("NumereSortare.txt");
	for (i = 0; i < n; i++) {
		f << v[i] << endl;
	}
	f.close();
}
int main()
{
	generareNr();
	sortareNr();
	scriereFisier();

	return 0;
}
