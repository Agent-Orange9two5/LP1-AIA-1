#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int n,i,j;
char a[50][50], b[50], c[50];

void citireSiruri()
{
	cout << "Cate siruri doriti sa introduceti? " << endl;
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Introduceti sirul " << i + 1 << endl;
		cin >> b;
		strcpy(a[i], b);
	}
	cout << endl;
}
void sortareSiruri()
{
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (strcmp(a[i], a[j]) > 0) {
				strcpy(c, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], c);
			}
		}
	}
}
void scriereSiruri()
{
	ofstream f("SiruriSortate.txt");
	for (i = 0; i < n; i++) {
		f << "Sirul " << i + 1 << " este: " << a[i]<<endl;
	}
	f.close();
}
int main()
{
	citireSiruri();
	sortareSiruri();
	scriereSiruri();

	return 0;
}
