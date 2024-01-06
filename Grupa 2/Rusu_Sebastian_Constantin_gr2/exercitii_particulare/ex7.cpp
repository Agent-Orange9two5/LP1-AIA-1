#include <iostream>
#include <fstream>
using namespace std;
struct student {
	char nume[20];
	char prenume[20];
	int varsta;
	struct note {
		int nota1;
		int nota2;
		int nota3;
	};
	float medie;
};
int n, i, j;
char fisier;
student a[100];
student::note b[100];
void introducereStudent()
{
	cout << "Cati studenti doriti sa introduceti?" << endl;
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Care este numele studentului?" << endl;
		cin >> a[i].nume;
		cout << "Care este prenumele studentului?" << endl;
		cin >> a[i].prenume;
		cout << "Care este varsta studentului?" << endl;
		cin >> a[i].varsta;
		cout << "Care sunt cele 3 note ale studentului?" << endl;
		cin >> b[i].nota1 >> b[i].nota2 >> b[i].nota3;
		a[i].medie = (b[i].nota1 + b[i].nota2 + b[i].nota3) / 3;
		cout << "Media studentului este: " << a[i].medie << endl;
	}

}
void scriereFisier()
{
	ofstream f("Catalog.txt");
	for (i = 0; i < n; i++) {
		f << "Nume: " << a[i].nume <<";" << endl;
		f << "Prenume: " << a[i].prenume << ";" << endl;
		f << "Varsta: " << a[i].varsta << ";" << endl;
		f << "Notele: " << b[i].nota1 <<", " << b[i].nota2 << ", " << b[i].nota3 << ";" << endl;
		f << "Media:" << a[i].medie << ";" << endl;
	}
	f.close();
}
void afisareFisier()
{
	ifstream f("Catalog.txt");
	while (f) {
		fisier = f.get();
		cout << fisier;
	}
}
int main()
{
	introducereStudent();
	scriereFisier();
	afisareFisier();
	return 0;
}
