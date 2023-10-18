#include <iostream>

using namespace std;

int main()
{
    int v[10]={1,2,3,4,5,6,7,8,9,10}, sum=0,i;

    //Variabilele se vor folosi astfel:
        //v[10] - vectorul din cerinta
        //sum - variabila in care retinem suma numerelor impare, conform cerintei
        //i - variabila cu care parcurgem vectorul

    for(i=0;i<10;i++){
        if(v[i]%2!=0){
        sum+=v[i];
        }
    }
    cout<<"Suma numerelor impare este: ";
    cout<<sum;

    cout<<endl;

    cout<<"Numerele pare din vector sunt: ";
    for(i=0;i<10;i++){
        if(v[i]%2==0)
        {
            cout<<v[i]<<" ";
        }
    }

    cout<<endl;

    cout<<"Vectorul inversat este: ";
    for(i=9;i>=0;i--){
        cout<<v[i]<<" ";
    }

    return 0;

}

