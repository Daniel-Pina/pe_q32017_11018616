#include <stdio.h>


/* Função recursiva não-caudal para calcular a soma dos dígitos de n */
int soma_digitos(int n)
{
	if (n < 10) return n;
	return ((n%10) + soma_digitos(n/10));
}


/* Função recursiva caudal para calcular a soma dos dígitos de n */
int sdTR(int n, int base)
{
	if (n == 0) return base;
	return sdTR(n/10, (n%10)+base);
}


/* Chama a função recursiva caudal da soma dos digitos */
int sd(int n)
{
	return sdTR(n, 0); 
}


int main()
{
	int n;
	printf("\nDigite o numero: ");
	scanf("%d", &n);
	printf("\nA soma dos digitos e:\n%d\n\n", sd(n));

	return 0;
}
