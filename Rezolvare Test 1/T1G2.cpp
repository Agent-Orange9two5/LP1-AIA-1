// Problema 2:

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[51]="ANTERIOR",s2[51]="POSTERIOR",s3[51],s4[151];
    int k=strlen(s2)/2;
    cout<<"Sirul 1 este: "<<s1<<endl<<"Sirul 2 este: "<<s2<<endl;
    cout << "Sirul de citit: ";
    cin.getline(s3, 51);
    strcpy(s4,s1);
    strcat(s4,s3);
    strcat(s4,s2+k);
    cout<<"Sirul complet: "<<s4<<endl<<"Lungimea sirului final: "<<strlen(s4);

    return 0;
}

//Problema 1:

/*#include <iostream>
using namespace std;

int main()
{
    int a[50][50],b[50][50],c[50][50],n,i,j;
    float s;
    cout<<"Numarul de linii si coloane ale celor doua matrici: ";
    cin>>n;
    cout<<endl<<"Elementele matricei 1: "<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<endl<<"Elementele matricei 2: "<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cin>>b[i][j];
    }

    cout<<endl<<"Suma celor doua matrici: "<<endl;

   for(i=0;i<n;i++)
    for(j=0;j<n;j++) c[i][j]=a[i][j]+b[i][j];

    cout<<"Matricea rezultata este: "<<endl;

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cout<<c[i][j]<<" ";
            cout<<endl;
    }


 return 0;
} */

