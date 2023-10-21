#include <iostream>
using namespace std;

int main(){
    int a[4][4], i, j, n, vn[16], vw[16], vs[16], ve[16], k = 0, og;

    //Scopul variabilelor folosite
        //a[4][4] - matricea
        //i & j - variabilele care trec prin linii, respectiv coloane
        //n - variabila care determina numarul de linii / coloane
        //vn,vw,vs,ve - vectorii pentru triunghiurile formate in nord, vest, sud si est
        //og - variabila in care retinem oglinditul numerelor
        //k - index pentru vectorii din cerinta

    cout<<"Introduceti numarul de linii si coloane: ";
    cin>>n;
    cout<<endl;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        cin>>a[i][j];

        cout<<endl;


cout<<endl;
    //Afisarea numerelor negative si pozitiile acestora
    cout<<"Elementele negative din matrice sunt: ";
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            if(a[i][j] < 0){ 
                cout<<a[i][j]<<", care se afla pe linia "<<i<<" coloana "<<j<<endl;
            }
            cout<<endl;

    //Afisarea numerelor deasupra diagonalei secundare
    cout<<"Elementele care se afla deasupra diagonalei secundare sunt: ";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        if(i+j<n-1)
        cout<<a[i][j]<<" ";

        cout<<endl;

    //Afisarea numerelor de sub diagonala principala
    cout<<"Elementele care se afla sub diagonala principala sunt: ";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        if(i>j)
        cout<<a[i][j]<<" ";

        cout<<endl;

    //Afisarea numerelor palindrome de pe liniile impare
    cout<<"Numerele palindrome care se afla pe linii impare sunt: ";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            og = 0;
            if(a[i][j]>9){
                int num=a[i][j];
                while(num){
                    og = og*10 + (num%10);
                    num/=10;
                }
            }
            if(a[i][j] == og && i%2!=0){
                cout<<a[i][j]<<" ";
            }
        }
    }

    cout<<endl;

    //Vectori Nord, Est, Sud, Vest

        //Nord
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            if (i < j && i + j < n - 1) {
                vn[k] = a[i][j];
                k++;
            }
        }
    }

    cout << "elemente nord: " << endl;

    for (i = 0; i < k; i++) {
        cout << vn[i] << " ";
    }

    cout<<endl;

        //Vest
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            if (i > j && i + j < n - 1) {
                vw[k] = a[i][j];
                k++;
            }
        }
    }

    cout << "elemente vest: " << endl;

    for (i = 0; i < k; i++) {
        cout << vw[i] << " ";
    }

    cout<<endl;

    //Sud
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            if (i > j && i + j > n - 1) {
                vs[k] = a[i][j];
                k++;
            }
        }
    }

    cout << "elemente sud: " << endl;

    for (i = 0; i < k; i++) {
        cout << vs[i] << " ";
    }

    cout<<endl;

    //Est
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            if (i > j && i + j < n - 1) {
                ve[k] = a[i][j];
                k++;
            }
        }
    }

    cout << "elemente est: " << endl;

    for (i = 0; i < k; i++) {
        cout << ve[i] << " ";
    }


return 0;
}
