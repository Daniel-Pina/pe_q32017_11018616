#include <stdio.h>


/* Função recursiva para verificar se um número é par ou ímpar */
int par_ou_impar(int n)
{	
	return (n%2);
}


int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", par_ou_impar(n));
	
	return 0;
}
