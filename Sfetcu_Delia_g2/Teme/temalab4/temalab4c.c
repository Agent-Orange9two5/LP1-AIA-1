/*Se citeste o matrice patratica de 4/4 nr reale. Sa se afiseze:
-numerele negative din matrice
-toate elem de deasupra diag secundare
-toate elem de sub diag principala
-toate numerele palindroame de pe liniile impare
-sa se creeze 4 vectori -dintre diag principale sus jos stanga dreapta*/
#include<stdio.h>
int main(){
    int a[5][5], n, x = 0, h = 0, k, c, v[16], p1[10], nr, p2[10], p3[10], p4[10];
    scanf("%d", n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        scanf("%d", a[i][j]);
    printf("Numerele negative din matrice sunt: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {  
            if(a[i][j] < 0)
            printf("%d", a[i][j], " ");
        }
        printf("\n");
        printf("Elementele de deasupra diagonalei secundare sunt: ");
}