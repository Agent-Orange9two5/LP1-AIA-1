// Problema 2:
/*
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[51],s2[51],c,s3[102];
    cout << "sirul 1: ";
    cin.getline(s1, 51);
    cout << "sirul 2: ";
    cin.getline(s2, 51);
    strcpy(s3,s1);
    strcat(s3," ");
    strcat(s3,s2);
    cout<<"Sirul complet: "<<s3<<endl<<"Lungimea sirului final: "<<strlen(s3);

    return 0;
} */

//Problema 1:

#include <iostream>
using namespace std;

int main()
{
    int a[50][50],n,i,j;
    float s;
    cout<<"Numarul de linii si coloane al matricei: ";
    cin>>n;
    cout<<endl<<"Elementele matricei: "<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }

    cout<<endl<<"Media aritmetica a elementelor fiecarei coloane: "<<endl;

   for(j=0;j<n;j++) {
        s=0;
        for(i=0;i<n;i++) {
            s+=a[i][j];
        }
        cout<<"Media aritmetica a coloanei "<<j<<" este: "<<s/n<<endl;
    }



    return 0;
}

