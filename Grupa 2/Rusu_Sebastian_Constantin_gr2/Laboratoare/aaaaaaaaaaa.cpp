#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

char titlu[20],autor[20],iden[13];
int an;
struct carte
{
    char titlu[20],autor[20];
    int an, id;
};
int main()
{
    int n;
    cout<<"Cate carti doriti sa introduceti?"<<endl;
    cin>>n;
    FILE*fb;
    fb=fopen("biblioteca.txt","w");
    for(int i=0;i<n;i++)
        {
            carte a[50];
            ofstream f("biblioteca.txt");
            cout<<"Introduceti titlul: ";
            cin>>a[50].titlu;
            f<<a[50].titlu<<endl;
            cout<<"Introduceti autorul: ";
            cin>>a[50].autor;
            f<<a[50].autor<<endl;
            cout<<"Introduceti anul: ";
            cin>>a[50].an;
            f<<a[50].an<<endl;
            a[50].id=i;
            f<<a[50].id<<endl;
        }
        fclose(fb);
return 0;
}
