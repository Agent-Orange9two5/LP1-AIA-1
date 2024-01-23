//ex1
#include <iostream>
using namespace std;
int **citeste_mat(int *,int *,int *);
void puncte_sa(int *[], int, int);
int main()
{    int **a;
    int alocare = 1;
    int lin,col;
    a=citeste_mat(&lin,&col,&alocare);
    if(alocare)
        puncte_sa(a,lin,col);
    return 0;}
int **citeste_mat(int *n, int *m, int *aloc)
{    int i,j;
    int **matr;
    cout<<"Introduceti numarul de linii ";
    cin>> *n;
    cout<<"Introduceti numarul de coloane ";
    cin>> *m;
    int nn=*n;
    int mm=*m;
    matr=new int*[nn];
    if(!matr)
    {        cout<<"Alocare esuata";
        *aloc=0;    }
    else
        for(i=0; i<nn; i++)       {
            matr[i]=new int[mm];
            if(!matr[i])            {
                cout<<"Alocare esuata";
                *aloc=0;            }        }
    if(*aloc)
        for(i=0; i<nn; i++)        {            cout<<"Elementele de pe linia "<<i<<endl;
            for(j=0; j<mm; j++)
                cin>>matr[i][j];       }
    return matr;}
void puncte_sa(int *matr[], int n, int m)
{   int k, i, j;
    int nrpsa=0;
    int da;
    for (i=0; i<n; i++)    {        cout<<endl;
        for(j=0; j<m; j++)
            cout<<matr[i][j]<<" ";    }
    cout<<endl;
    for (i=0; i<n; i++)
        for(j=0; j<m; j++)        {            da=1;
            for(k=0; k<m; k++)
                if(matr[i][k]<matr[i][j])
                    da=0;
            for(k=0; k<n; k++)
                if(matr[k][j]>matr[i][j])
                    da=0;
            if(da)
            {               cout<<"matr["<<i<<"]["<<j<<"]="<<matr[i][j]<<" este punct sa"<<endl;
                nrpsa++;            }        }
    if(nrpsa)
        cout<<"Avem "<<nrpsa<<" puncte sa";
    else
        cout<<"Nu avem puncte sa";}


//ex2
#include<iostream>
using namespace std;
int *citeste_sir(int *);
int min(int,int);
int max(int,int);
int min_max(int,int,int(*)(int,int));
int main()
{
    int n,i;
    int *a;
    int MIN,MAX;
    a=citeste_sir(&n);
    cout<<"sirul este: "<<endl;
    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
    if(a)
    {        MIN=a[0];
        for(i=0; i<n; i++)
            MIN=min_max(MIN,a[i],min);
        cout<<"minimul este "<<MIN<<endl;
        MAX=a[0];
        for(i=0; i<n; i++)
            MAX=min_max(MAX,a[i],max);
        cout<<"maximul este "<<MAX<<endl;
    }
    return 0;}
int *citeste_sir(int *nr)
{    int i;
    int *vect;
    cout<<"citeste nr de elemente";
    cin>>*nr;
    vect=new int[*nr];
    if(!vect)
    {        cout<<"alocare esuata";
        return(NULL);    }
    else
    {        for(i=0; i<*nr; i++)        {            cout<<"vect["<<i<<"]=";
                                                      cin>>vect[i];        }
        return vect;    } }
int min_max(int x,int y,int(*func_min_max)(int,int))
{    return(func_min_max(x,y));  }
int min(int a,int b){    return(a<b ? a:b);  }
int max(int a,int b){    return(a>b ? a:b);  }


//ex3
#include<iostream>
#include<math.h>
using namespace std;
double cotan(double);
int main()
{
int i;
double x;
double(*func_trig[])(double)={sin,cos,tan,cotan};
cout <<" Nr   Sinus      Cosinus    Tan     Cotan";
for(x=0.01;x<=M_PI;x+=0.1)
{cout<<endl<<x<<" ";
    for(i=0;i<4;i++)
        cout<<func_trig[i](x)<<" ";}
        return 0;
}
double cotan(double z)
{
return(1/tan(z));
}



