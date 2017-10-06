#include <stdio.h>


/* Função recursiva para verificar se um número é primo */
int primoTR(int n, int i)
{	
	if (n/(6*i-1) <= (6*i-1)) return 1;
	if (n%(6*i-1) == 0) return 0;
	if (n%(6*i+1) == 0) return 0;
	return (primoTR(n, i+1));
}


/* Chama a função recursiva */
int primo(int n)
{
	if (n%2 == 0) return 0;
	if (n%3 == 0) return 0;
	return (primoTR(n, 1));
}


int main()
{
	int n;
	printf("\nDigite o numero: ");
	scanf("%d", &n);
	if (primo(n) == 0) printf("\nO numero não e primo\n\n");
	else printf("\nO numero e primo\n\n");

	return 0;
}
