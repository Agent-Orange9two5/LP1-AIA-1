#include <iostream>

using namespace std;

int **citeste_mat(int *,int *,int *);
void puncte_sa(int *[], int, int);

int main()
{
    int **a;
    int alocare = 1;
    int lin,col;
    a=citeste_mat(&lin,&col,&alocare);
    if(alocare)
        puncte_sa(a,lin,col);

    return 0;
}

int **citeste_mat(int *n, int *m, int *aloc)
{
    int i,j;
    int **matr;
    cout<<"Introduceti numarul de linii ";
    cin>> *n;
    cout<<"Introduceti numarul de coloane ";
    cin>> *m;
    int nn=*n;
    int mm=*m;
    matr=new int*[nn];
    if(!matr)
    {
        cout<<"Alocare esuata";
        *aloc=0;
    }
    else
        for(i=0; i<nn; i++)
        {
            matr[i]=new int[mm];
            if(!matr[i])
            {
                cout<<"Alocare esuata";
                *aloc=0;
            }
        }
    if(*aloc)
        for(i=0; i<nn; i++)
        {
            cout<<"Elementele de pe linia "<<i<<endl;
            for(j=0; j<mm; j++)
                cin>>matr[i][j];
        }
    return matr;
}
void puncte_sa(int *matr[], int n, int m)
{
    int k, i, j;
    int nrpsa=0;
    int da;
    for (i=0; i<n; i++)
    {
        cout<<endl;
        for(j=0; j<m; j++)
            cout<<matr[i][j]<<" ";
    }
    cout<<endl;
    for (i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            da=1;
            for(k=0; k<m; k++)
                if(matr[i][k]<matr[i][j])
                    da=0;
            for(k=0; k<n; k++)
                if(matr[k][j]>matr[i][j])
                    da=0;
            if(da)
            {
                cout<<"matr["<<i<<"]["<<j<<"]="<<matr[i][j]<<" este punct sa"<<endl;
                nrpsa++;
            }
        }
    if(nrpsa)
        cout<<"Avem "<<nrpsa<<" puncte sa";
    else
        cout<<"Nu avem puncte sa";
}
