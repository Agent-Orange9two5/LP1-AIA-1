using namespace std;

int main()
{
    int v[10]= { 1 , 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    int suma =0;

for(int i=0 ; i<9 ; i ++){
    if (v[i] % 2!=0){
        suma+= v[i];
    }
    if (v[i]%2==0){
        cout<<v[i]<<endl;
        }
    }
    cout<<suma<<endl;


    for(int i=9 ; i>0 ; i --){
        cout << v[i]<<endl;
    }
}


