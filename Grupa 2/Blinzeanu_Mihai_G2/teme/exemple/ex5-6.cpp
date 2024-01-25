#include <iostream>

using namespace std;

int n,i,j,a[20][20],b[20][20],c[20][20],emax1=0,emax2=0,prod1=1,prod2=1;
void citire(){

    cout<<"Ce dimensiune sa aibe matricele? ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<b[i][j]<<" ";
}
cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
}
    }
    cout<<"suma matricelor este: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}
void maxim(){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j<n-1){
                if(a[i][j]>emax1)
                    emax1=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j<n-1){
                if(b[i][j]>emax2)
                    emax2=b[i][j];
            }
        }
    }
    if(emax1>emax2)
        cout<<"maximul este: "<<emax1<<endl;
    else
        cout<<"maximul este: "<<emax2<<endl;
}
void produs(){

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j>n-1){
               prod1=a[i][j]*prod1;

}
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j>n-1){
                prod2=b[i][j]*prod2;
            }
        }
    }
    cout<<"Produsul este: "<<prod1*prod2;

}

int main()
{
    citire();
    maxim();
    produs();
    return 0;
}
