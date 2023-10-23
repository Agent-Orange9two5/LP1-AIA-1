#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[15], n, i, min, max, s=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
        s=s+v[i];
    }

    printf("suma= %d\n", s);
    min=v[0];
    max=v[0];
    for(i=0; i<n; i++)
    {
        if(v[i]<min)
            min=v[i];
        if(v[i]>max)
            max=v[i];
    }

    printf("minim= %d\n", min);
    printf("maxim= %d\n", max);

    printf("nr div cu 5 sunt ");
    for(i=0; i<n; i++)
    {
        if(v[i]%5==0)
            printf("%d", v[i]);
    }
    printf("\n");
    printf("nr div cu 11 sunt ");
    for(i=0; i<n; i++)
    {
        if(v[i]%11==0)
            printf("%d", v[i]);
    }
    return 0;
}
