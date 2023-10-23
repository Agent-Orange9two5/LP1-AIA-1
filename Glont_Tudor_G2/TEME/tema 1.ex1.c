#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max=-1,min=9999999,s=0,i;
    for(i=0; i<4; i++)
    {
        scanf("%d",&n);
        if(n>max)
            max=n;
        if(n<min)
            min=n;
        while(n)
        {
            s=s+n%10;
            n/=10;
        }
    }
    printf("%d %d \n", min, max);
    printf("suma este %d \n",(max+min));
    printf("dif este %d \n",(max-min));
    printf("suma cif este %d \n",s);
    for(i=min+1; i<max; i++)
    {
        printf("%f ",sqrt(i));
    }
    return 0;
}
