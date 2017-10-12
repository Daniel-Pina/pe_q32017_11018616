#include <stdio.h>


/* Calcula o fatorial de x */
int fat(int x)
{
	int i, fat=1;
	for (i=x; i>1; i--) {
		fat *= i;
	}
	return fat;
}


/* Função que retorna o coeficiente binomial */
int coef_bin(int n, int k)
{
    return (fat(n)/(fat(k)*fat(n-k)));
}


int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", coef_bin(n, k));

	return 0;
}
