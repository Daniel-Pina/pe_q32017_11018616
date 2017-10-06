#include <stdio.h>


/* Função recursiva não-caudal para calcular o somatório dos números de 1 a n */
int S(int n)
{
	if (n == 1) return 1;
	return (S(n-1) + n);
}


/* Função recursiva caudal para calcular o somatório dos números de 1 a n */
int SomaTR(int n, int base)
{
	if (n == 0) return base;
	return SomaTR(n-1, n+base);
}


/* Chama a função recursiva caudal do somatório */
int Soma(int n)
{
	return SomaTR(n, 0); 
}


int main()
{
	int n;
	printf("\nDigite o limite da somatoria: ");
	scanf("%d", &n);
	printf("\nO valor da soma é:\n%d\n\n", Soma(n));

	return 0;
}
