#include <iostream>
#include <fstream>
using namespace std;
#define patrat(a) (a*a)
int i, j, n, C[10], aux, np[10], aux2, a, np2[10];
struct punct {
	int x;
	int y;
};
punct P0, A[10], B[10], auxp;
void citirePuncte()
{
	cout << "Introduceti coordontele punctului P0" << endl;
	cin >> P0.x;
	cin >> P0.y;
	cout << "Ati introdus punctul P0(" << P0.x << "," << P0.y << ")"<<endl;
	cout << "Cate puncte doriti sa introduceti in multimea A?"<<endl;
	cin >> n;
	for (i = 0; i < n; i++) {
		np[i] = i + 1;
		np2[i] = np[i];
		cout << "Introduceti coordonatele punctului " << i+1 << endl;
		cin >> A[i].x;
		cin >> A[i].y;
	}
	cout << "Multimea introdusa este A{";
	for (i = 0; i < n; i++) {
		cout << "P" << np[i] << "(" << A[i].x << "," << A[i].y << ")";
		if (i != n - 1) {
			cout << ",";
		}
	}
	cout << "}" << endl;
}
void calculareDistanta()
{
	if (n > 1) {
		for (i = 0; i < n; i++) {
			if (A[i].x != P0.x) {
				if (A[i].x > P0.x) {
					B[i].x = A[i].x - P0.x;
				}
				else B[i].x = P0.x - A[i].x;
			}
			else B[i].x = A[i].x;
			if (A[i].y != P0.y) {
				if (A[i].y > P0.y) {
					B[i].y = A[i].y - P0.y;
				}
				else B[i].y = P0.y - A[i].y;
			}
			else B[i].y = A[i].y;
		}
	}
	else {
		B[0].x = A[0].x;
		B[0].y = A[0].y;
	}
	for (i = 0; i < n; i++) {
		C[i] = B[i].x + B[i].y;
	}
}
void detPunct() 
{
	if (n > 1) {
		for (i = 0; i < n; i++) {
			if (C[i] > C[i + 1]) {
				aux = C[i + 1];
				C[i + 1] = C[i];
				C[i] = aux;
				auxp.x = A[i + 1].x;
				auxp.y = A[i + 1].y;
				A[i + 1].x = A[i].x;
				A[i + 1].y = A[i].y;
				A[i].x = auxp.x;
				A[i].y = auxp.y;
				aux2 = np[i + 1];
				np[i + 1] = np[i];
				np[i] = aux2;
			}
		}
	}
	if (n > 1) {
		cout << "Cel mai apropiat punct de P0 este: P" << np[0] << "(" << A[0].x << "," << A[0].y << ") cu o distanta de " << C[0] << endl;
	}
	else cout << "Cel mai apropiat punct de P0 este: P" << np[0] << "(" << A[0].x << "," << A[0].y << ")" << endl;
}
void scriereFisier()
{
	ofstream f("date.txt");
	f << "Punctul P0 are coordonatele: (" << P0.x << "," << P0.y << ")" << endl;
	f << "Multimea A este: {";
	for (i = 0; i < n; i++) {
		f << "P" << np2[i] << "(" << A[i].x << "," << A[i].y << ")";
		if (i != n - 1) {
			f << ",";
		}
	}
	f << "}" << endl;
	if (n > 1) {
		f << "Cel mai apropiat punct de P0 este: P" << np2[0] << "(" << A[0].x << "," << A[0].y << ") cu o distanta de " << C[0] << endl;
	}
	else f << "Cel mai apropiat punct de P0 este: P" << np2[0] << "(" << A[0].x << "," << A[0].y << ")" << endl;
	f.close();
}
void patratNr()
{
	cout << "Ce numar doriti sa ridicati la patrat?" << endl;
	cin >> a;
	cout<<patrat(a);
}
int main()
{
	citirePuncte();
	calculareDistanta();
	detPunct();
	scriereFisier();
	patratNr();
	return 0;
}
