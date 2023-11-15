//Se aloca un vector cu N valori, Se cere un numar X de la tastatura si se va
//afisa valorile din vector ce se afla in intervalul [X-5, X+5]
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	float *a, x;
	int n, i;
	/* Citirea numarului de elemente */
	printf("Cate numere? ");
	scanf("%d", &n);

	/* Alocarea zonei de memorie pentru vector */
	a = (float *) malloc(n * sizeof(float));

	if (!a) {
		printf("Nu pot aloca memorie.\n");
    }

    /* Citirea vectorului */
	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
		}

	/* Citim numarului X */
	printf("x: ");
	scanf("%f", &x);

	/* Afisarea valorilor din interval */
	printf("Numerele din intervalul (%.2f, %.2f) sunt: ", x - 5, x + 5);
	for (i = 0; i < n; i++)
		if (fabs(x - a[i]) < 5)
			printf("%.2f ", a[i]);
	//printf("\n");

	/*Eliberarea memoriei */
	free(a);
	return 0;

}
