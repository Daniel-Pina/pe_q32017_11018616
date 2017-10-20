#include <stdio.h>

/* Calcula o fatorial de x recursivamente */
int fat(int x)
{
	if (x == 1) return 1;
	return (x*fat(x-1));
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
