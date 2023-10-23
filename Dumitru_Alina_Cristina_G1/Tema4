#include <iostream>

using namespace std;
int palindrom(int n)
{
    int inv = 0;

    while (n!=0)
    {
        inv = inv*10+n%10;
        n = n/10;
    }
   return inv;
}


int main()
{

    int m[4][4],i,j,s=0,n,p,cp, inv=0,v1[5],v2[5],v3[5],v4[5],a=0,b=0,c=0,d=0;
    cout<<"Cate linii/coloane va avea matricea patratica: ";
    cin>>n;
    cout<<"Citim matricea patratica: "<<endl;
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
        cin>>m[i][j];

    //Afisam elementele de pe diagonala principala
    cout<<"Elementele de pe diagonala principala sunt: ";
    for(i=0;i<4;i++)
    {
     cout<<m[i][i]<<" ";
    }
    cout<<endl;

    //Afisam elementele de pe diagonala secundara in ordine inversa
    cout<<"Elementele de pe diagonala secundara sunt: ";
    for(i=3;i>=0;i--)
    cout<<m[i][4-1-i]<<" ";
    cout<<endl;

    //suma elementelor aflate deasupra diag sec
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      if(i+j<n-1)
      {
       s=s+m[i][j];
      }
    cout<<"Suma elementelor de deasupra diagonalei secundare este: "<<s<<endl;
   //Elementele palindroame de pe diag principala
   cout<<"Elementele palindrome de pe diagonala principala sunt: ";
    //inv=inversul elementului
   for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++){

            inv=palindrom(m[i][j]);
            if (inv>10&&inv==m[i][j]&&i==j)
                cout<<m[i][j]<< " ";
        }
        inv=palindrom(m[i][j]);
        if (i==j&&m[i][j]!=inv){
            cout << "Nu exista numere palindrome pe diagonala principala";
        }
    }
    cout << endl;

      for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i<j && i+j<n-1)
                v1[a++]=m[i][j];
            if(i>j && i+j>n-1)
                v2[b++]=m[i][j];
            if(i<j && i+j>n-1)
                v3[c++]=m[i][j];
            if(i>j && i+j<n-1)
                v4[d++]=m[i][j];
        }

    cout<<"Elementele din triunghiul 1 sunt: ";
    for(i=0;i<a;i++)
        cout<<v1[i]<< " ";
        cout<<endl;

    cout<<"Elementele din triunghiul 2 sunt: ";
    for(i=0;i<b;i++)
        cout<<v2[i]<< " ";
        cout<<endl;

    cout<<"Elementele din triunghiul 3 sunt: ";
     for(i=0;i<c;i++)
        cout<<v3[i]<<" ";
        cout<<endl;

    cout<<"Elementele din triunghiul 4 sunt: ";
      for(i=0;i<d;i++)
        cout<<v4[i]<<" ";
        cout<<endl;

    return 0;

}
