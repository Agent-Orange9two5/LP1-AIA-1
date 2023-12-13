using namespace std;

ofstream f("fisier.txt");
ifstream g("fisier.txt");
char a;
int n;
int main()
{
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>a;
        f<<a;
        f<<endl;
    }
    for(int i=0; i<n;i++)
    {
        g>>a;
        cout<<a;
    }
    return 0;
}
