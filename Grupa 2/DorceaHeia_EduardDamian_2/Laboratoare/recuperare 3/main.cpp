#include <iostream>

using namespace std;

int main()
{
    FILE *txt;
    int i=0,n;
    char prop[50][50];
    cout<<"n=";cin>>n;
    if ((txt = fopen("DATA.txt", "w")) == NULL);
    for (i=0; i<n; i++){
        cin>>prop[50][i];
        cout<<endl;
    }
     for (i=0; i<n; i++) {
        cout<<prop[50][i];
     }
}
