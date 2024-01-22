//prob1
#include <iostream>
using namespace std;
int main(){
    int a[100], n,i,j,temp;
    int lim_i, lim_s, gasit,x, mijloc;
    cout<<"n=";
    cin>>n;
    for(i=0; i<n; i++) {
        cout<<"a["<<i<<"]=";
        cin>>a[i];   }
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    if(a[i]>a[j])   {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;  } //ordonez crescator
    for(i=0; i<n; i++)
    cout<<'\n'<<"a["<<i<<"]="<<a[i];
    cout<<'\n'<<"\nIntroduceti numarul de cautat: ";
    cin>>x;
    for(lim_i=0, lim_s=n-1, gasit=0; !gasit && lim_i<=lim_s;)
    {
        mijloc=(lim_i + lim_s)/2;
        if(a[mijloc]==x)
        gasit=1;
        else
        if(a[mijloc]<x)
        lim_i = mijloc+1; // caut in a 2-a jumatate
        else 
        lim_s=mijloc-1; // caut in prima jumatate    }
    if(gasit)
    cout<<x<<"se gaseste pe pozitia"<<mijloc;
    else
    cout<<x<<"nu se afla in vector";
    return 0;
}



//prob2
#include <stdio.h>
using namespace std;
int main()
{
    int a[100][100], n, i, j;
    int min, max;
    int first_diag[10], second_diag[10];
    printf("numarul de linii / coloane: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    {
        printf("a[%d][%d]=", i, j);
        scanf("%d", &a[i][j]);
    }
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        printf("%d", &a[i][j]);
    }
    printf("\nDiagonala principala: ");
    for(i=0; i<n; i++)
    {
        first_diag[i] = a[i][i];
        printf("%d", first_diag[i]);
    }
    printf("\nDiagonala secundara: ");
    for(i=0; i<n; i++)
    {
        second_diag[i] = a[i][n-1-i];
        printf("%d", second_diag[i]);
    }
    min=max=a[0][0];
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    {
        if(min > a[i][j])
        min = a[i][j];
        if(max < a[i][j])
        max = a[i][j];
    }
    printf("\nMinimul este : %d\n", min);
    printf("\nMaximul este : %d\n", max);
return 0;  }
