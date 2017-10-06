#include <stdio.h>


/* Função recursiva não-caudal para calcular o número de dígitos de n */
int q_digitos(int n)
{
	if (n < 10) return 1;
	return (1 + q_digitos(n/10));
}


/* Função recursiva caudal para calcular o número de dígitos de n */
int DTR(int n, int base)
{
	if (n < 10) return base;
	return DTR(n/10, 1+base);
}


/* Chama a função recursiva caudal da contagem de digitos */
int D(int n)
{
	return DTR(n, 1); 
}


int main()
{
	int n;
	printf("\nDigite o numero: ");
	scanf("%d", &n);
	printf("\nO numero de digitos e:\n%d\n\n", D(n));

	return 0;
}
