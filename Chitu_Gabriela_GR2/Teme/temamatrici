#include <iostream>

using namespace std;

int main()
{
    int a[6][6] , i , j, ogl, cop , v1[3], v2[3], v3[3], v4[3], x=0, y=0, z=0, k=0, n;
    n=4;
    for(i=1 ; i<=4 ; i++) {
        for(int j=0 ; j<=4 ; j++) {
            cin>> a[i][j];
        }
    }
    for(int i=1 ; i<=4 ; i++) {
        for(int j=1 ; j<=4 ; j++) {
            if(a[i][j]<0)
                cout<< "Numarul negativ" << a[i][j] << " a carui linie este " << i << "si coloana " << j << endl;
        }
    }

    for(int i=1 ; i<=4 ; i++) {
        for(j=1 ; j<=4 ; j++) {
            if(i<j && i+j<n+1) {
                v1[x]=a[i][j];
                x++;
            }
            if(i>j && i+j<n+1) {
                v2[y]=a[i][j];
                y++;
            }
            if(i<j && i+j>n+1) {
                v3[z]=a[i][j] ;
                z++;
            }
            if(i>j && i+j>n+1) {
                v4[k]=a[i][j] ;
                k++;
            }
        }
    }

    for(int i=1 ; i<=4 ; i++) {
        for(int j=1 ; j<=4 ; j++) {
            if(i+j < n+1) {
                cout<<a[i][j] << endl;
            }
        }
    }

    for(int i=1 ; i<=4 ; i++) {
        for(int j=1 ; j<=4 ; j++) {
            if(i>j) {
                cout<< a[i][j] << endl;
            }
        }
    }


    for(int i=1 ; i<=4 ; i++) {
        for(int j=1 ; j<=4 ; j++) {
            if(i%2==1) {
                ogl=0;
                if(a[i][j] > 9){
                    cop=a[i][j];
                    while(cop!=0) {
                        ogl=ogl*10 + cop%10;
                        cop=cop/10;
                    }
                    if(ogl==a[i][j]) {
                        cout<<"Numarul palindrom este: " << a[i][j] << endl;
                    }
                }
            }
        }
    }

    for(int i=0 ; i<=1; i++) {
        cout<<"Primul vector din matrice este :" << v1[i] << endl;
    }


    for(int i=0 ; i<=1; i++) {
        cout<<"Al doilea vector din matrice este :" << v2[i] << endl;
    }


    for(int i=0 ; i<=1; i++) {
        cout<<"Al treilea vector din matrice este :" << v3[i] << endl;
    }

    for(int i=0 ; i<=1; i++) {
        cout<<"Al patrulea vector din matrice este :" << v4[i] << endl;
    }

    return 0;
}
