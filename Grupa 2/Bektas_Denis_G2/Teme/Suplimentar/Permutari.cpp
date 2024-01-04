/* functie recursiva care sa genereze permutari pentru 1 2 3 4 5*/
#include <iostream>
using namespace std;

int v[100],n;

void Afiseaza()
{
    for(int j=1;j<=n;j++)
        cout<<v[j]<<" ";
    cout<<endl;
}

bool OK(int k){
    for(int i=1;i<k;++i)
        if(v[k]==v[i])
            return false;
    return true;
}

bool Solutie(int k)
{
    return k == n;
}

void back(int k){
    for(int i=1 ; i<=n ; ++i)
    {
        v[k]=i;
        if( OK(k) )
            if(Solutie(k))
                Afiseaza();
            else
                back(k+1);
    }
}
int main(){
    cout << "Cate elemente doriti sa permutati ?: ";
    cin>>n;
    back(1);
    return 0;
}
