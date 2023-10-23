#include <stdio.h>

int main()
{
    int x[5][5], i, j, n, o, y, v1[5], a=0, v2[5], b=0, v3[5], c=0, v4[5], d=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &x[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(x[i][j]<0)
                printf("%d pe linia %d si coloana %d\n", x[i][j], i+1, j+1);
        }
    printf("nr deasupra diag sec: ");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(i+j<n-1)
                printf("%d ", x[i][j]);
        }
    printf("\n");
    printf("nr sub diag princ: ");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(i>j)
                printf("%d ", x[i][j]);
        }
    printf("\n");
    printf("nr palindrome de pe linii imp: ");
    for(i=0; i<n; i=i+2)
        for(j=0; j<n; j++)
        {
            o=0;
            y=x[i][j];
            while(y!=0)
            {
                o=o*10+y%10;
                y=y/10;
            }
            if(o==x[i][j])
                printf("%d ", o);
        }
    printf("\n");

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(i<j && i+j<n-1)
            {
                v1[a]=x[i][j];
                a++;
            }
            if(i>j && i+j<n-1)
            {
                v2[b]=x[i][j];
                b++;
            }
            if(i>j && i+j>n-1)
            {
                v3[c]=x[i][j];
                c++;
            }
            if(i<j && i+j>n-1)
            {
                v4[d]=x[i][j];
                d++;
            }
        }

    printf("v1: ");
    for(i=0; i<a; i++)
        printf("%d ", v1[i]);
    printf("\n");

    printf("v2: ");
    for(i=0; i<b; i++)
        printf("%d ", v2[i]);
    printf("\n");

    printf("v3: ");
    for(i=0; i<c; i++)
        printf("%d ", v3[i]);
    printf("\n");

    printf("v4: ");
    for(i=0; i<d; i++)
        printf("%d ", v4[i]);
    printf("\n");

    return 0;
}
