#include <iostream>

using namespace std;

//matrice patratica cit tastatura
//afis elem diag principala / secundara in ord inversa
//sum elem above diag sec
//elem palindrom diag princ
//vect elem dintre diagonale


//	n=7
//		00 01 02 03 04 05 06 
//		10 11 12 13 14 15 16
//		20 21 22 23 24 25 26
//  >	30 31 32 33 34 35 36   <
//		40 41 42 43 44 45 46
//		50 51 52 53 54 55 56
//		60 61 62 63 64 65 66

// i=j princp
// j=n-i-1 secund  i+j=n-1
//	
//	 /\___/\ 
//	( o ^ o ) *
//  /| ( ) |\/
//	  U   U
//	
//	

int main()
{
	int n;
	cout << "introduceti nr de linii si coloane ( n = m ) al matricei : ";
	cin >> n;
	int m[n][n], l[n/2*n], r[n/2*n], t[n/2*n], b[n/2*n], d1[n], d2[n]; //matrice, vectori de elemente si coloane
	int lc = 0, rc = 0, tc = 0, bc = 0, d1c = 0, d2c = 0; //contori pt elemente vectori

	cout << endl << "introduceti matricea : " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m[i][j]; //citire matrice

			//verif diag principala
			if (i==j)
			{
			    d1[d1c]=m[i][j];
				d1c++;
			}
			//verif diag secundara
			if (i=n-1-j)
			{
				d2[d2c] = m[i][j];
				d2c++;
			}
			//verif top
			if (i<j && i<n-j-1)
			{
				t[tc] = m[i][j];
				tc++;
			}
			//verif right
			if (i < j && i > n - j - 1)
			{
				r[rc] = m[i][j];
				rc++;
			}
			//verif bottom
			if (i > j && i > n - j - 1)
			{
				b[bc] = m[i][j];
				bc++;
			}
			//verif left
			if (i > j && i < n - j - 1)
			{
				l[lc] = m[i][j];
				lc++;
			}
		}

	}


	cout << "elemente diagonala principala in ordine inversa : ";
	for (int i = n; i >= 0; i--) cout << d1[i] << " ";
	cout << "elemente diagonala secundara in ordine inversa : ";
	for (int i = n; i >= 0; i--) cout << d2[i] << " ";
	cout << "elemente deasupra diagonalelor : ";
	for (int i = 0; i < n; i++) cout << t[i] << " ";
	cout << "elemente la dreapta diagonalelor : ";
	for (int i = 0; i < n; i++) cout << r[i] << " ";
	cout << "elemente sub diagonale : ";
	for (int i = 0; i < n; i++) cout << b[i] << " ";
	cout << "elemente la stanga diagonalelor : ";
	for (int i = 0; i < n; i++) cout << l[i] << " ";


	return 0;
}

