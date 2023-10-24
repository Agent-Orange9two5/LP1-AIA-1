#include <stdio.h>

int main()
{
    int a[6][6], i, j, ogl, cop, v1[3], v2[3], v3[3], v4[3], x = 0, y = 0, z = 0, h = 0, n;
    n = 4;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (a[i][j] < 0)
                printf("Numar negativ %d pe linia %d si coloana %d\n", a[i][j], i, j);
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i < j && i + j < n + 1)
            {
                v1[x] = a[i][j];
                x++;
            }
            if (i > j && i + j < n + 1)
            {
                v2[y] = a[i][j];
                y++;
            }
            if (i < j && i + j > n + 1)
            {
                v3[z] = a[i][j];
                z++;
            }
            if (i > j && i + j > n + 1)
            {
                v4[h] = a[i][j];
                h++;
            }
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i + j < n + 1)
                printf("%d\n", a[i][j]);
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i > j)
                printf("%d\n", a[i][j]);
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i % 2 == 1)
            {
                ogl = 0;
                if (a[i][j] > 9)
                {
                    cop = a[i][j];
                    while (cop != 0)
                    {
                        ogl = ogl * 10 + cop % 10;
                        cop = cop / 10;
                        }
    if(ogl==a[i][j])
    {
        printf("Nr palindrom :%d\n",a[i][j]);
    }
    }
}
}
    }
for(i=0;i<=1;i++)
{
    printf("Primul vector %d\n",v1[i]);
}
for(i=0;i<=1;i++)
{
    printf("Al doilea vector %d\n",v2[i]);
}
for(i=0;i<=1;i++)
{
    printf("Al treila vector %d\n",v3[i]);
}
for(i=0;i<=1;i++)
{
    printf("Al patrulea vector %d\n",v4[i]);
}

return 0;
}


