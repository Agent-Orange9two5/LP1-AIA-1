#include <iostream>
#include <vector>
using namespace std;
int main() {
	int v[]={1,2,3,4,5,6,7,8,9,10}, sumimp,i;
	cout<<"nr pare:"<<" ";
	for (i = 0; i < 10; i++) {
		if (v[i] % 2 == 1) {
			sumimp = v[i] + sumimp;
		}
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	cout<<'\n';
	cout << "suma nr impare:" << sumimp<<'\n';
	cout << "vector inversat:";
	for (i = 9;i >= 0; i--) {
		cout << v[i] << " ";
	}
}
