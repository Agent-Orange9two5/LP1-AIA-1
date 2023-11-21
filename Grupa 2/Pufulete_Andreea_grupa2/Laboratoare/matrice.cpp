using namespace std;
int main()
{
    int a[4][4], n, i, j,s;
    cin >> n;
    cout << "matricea este: " << " "; 
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    cout<<"elementele de pe diagonala principala sunt : ";
for (i=1;i<=n;i++)
for(j=1;j<=n;j++) 
        if(a[i][j]>99) s=s+a[i][j];  cout <<"suma numerelor de 3 cifre este"<<s<<" ";
        if (i==j) cout <<"elementele de pe diagonala principala sunt;"<<a[i][j]; 
             else if(i+j>n+1) cout <<" elementele de sub diagonala secundara sunt:"<<a[i][j]<<" ";
                
                return 0;
}
*/

/*

Also: 
- indexarea matricilor ar fi bine sa se faca de la 0 
- grija la acolade 
- grija MARE la sintaxa 
- grija mare la ce variabile folosim 

Mai incerci tu sa faci codul sa mearga cum trebuie si mai vedem pana saptamana viitoare. 

*/
