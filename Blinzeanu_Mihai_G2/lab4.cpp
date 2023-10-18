#include <iostream>

using namespace std;

int main()
{
    int i,s=0;
    int v[]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<=9;i++)
    {
        if(v[i]%2==1)
        s=s+v[i];
    }
    cout<<"suma nr impare este "<<s<<endl;
    for(i=0;i<10;i++){
            if(v[i]%2==0)
                cout<<v[i]<<" "<<endl;
    }
    for(i=0;i<=0;i--)
    {
        
    }
    return 0;
}

