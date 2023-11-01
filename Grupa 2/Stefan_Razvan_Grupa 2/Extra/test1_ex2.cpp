#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20]="ANTERIOR",s2[20]="POSTERIOR", s3[51];

    cout<<"Sirul 1 este: "<<s1<<endl;
    cout<<"Sirul 2 este: "<<s2<<endl;
    cout<<"Sirul de citit: ";
    cin>>s3;
    strcat(s1,s3);
    strcat(s1,s2+4);

    cout<<"Sirul complet: "<<s1<<endl;
    cout<<strlen(s1);

    return 0;

}
