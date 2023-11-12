#include <iostream>

using namespace std;

int main()
{
    int a[10][10],n,max,min,i,j,b[10][10];
    cout<<"Introduceti nr linii/coloane: ";
    cin>>n;
    cout<<"Citim matricea patratica:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    cout<<endl;
    max=min=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    if(max<a[i][j]) max=a[i][j];
    if(min>a[i][j]) min=a[i][j];
        }
    }
    cout<<"max = "<<max<<endl;
    cout<<"min = "<<min<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[j][i];

    cout<<endl<<"Matricea transpusa este: "<<endl;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout<<b[i][j]<<" ";
        cout<<endl;
    }



    return 0;
}

