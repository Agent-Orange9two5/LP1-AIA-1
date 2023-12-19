#include <iostream>
#include <fstream>

using namespace std;

int i, n;
struct agenda {
	string nume;
	int numarTelefon;
	string adresaEmail;
};
agenda v[20];
void citireContacte()
{
	cout << "Cate contacte doriti sa introduceti in agenda?" << endl;
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Introduceti numele contactului: " << endl;
		cin >> v[i].nume;
		cout << "Introduceti numarul de telefon al contactului: " << endl;
		cin >> v[i].numarTelefon;
		cout << "Introduceti adresa de email al contactului: " << endl;
		cin >> v[i].adresaEmail;
	}
}
void salvareContacte()
{
	ofstream f("agenda.txt");
	for (i = 0; i < n; i++) {
		f << "Numele contactului "<< i+1 <<" este: " << v[i].nume << endl;
		f << "Numarul de telefon al contactului " << i+1 << " este: " << v[i].numarTelefon << endl;
		f << "Adresa de email al contactului " << i+1 << " este: " << v[i].adresaEmail << endl;
		f << endl;
	}
	f.close();
}
void afisareContacte()
{
	for (i = 0; i < n; i++) {
		cout << "Numele contactului " << i+1 << " este: " << v[i].nume << endl;
		cout << "Numarul de telefon al contactului " << i+1 << " este: " << v[i].numarTelefon << endl;
		cout << "Adresa de email al contactului " << i+1 << " este: " << v[i].adresaEmail << endl;
		cout << endl;
	}
}
int main()
{
	citireContacte();
	salvareContacte();
	afisareContacte();
	return 0;

}
