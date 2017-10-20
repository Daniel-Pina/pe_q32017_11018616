#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Função que retorna o tamanho de uma string */
int s_size(int * s)
{
	int size=0;
	while (s[size] != '\0') size++;
	return size;
}


/* Função que verifica se um número é primo */
int eh_primo(int n)
{
	int i;
	if ((n == 0)||(n == 1)) return 0;
	for (i=2; i<sqrt(n); i++) {
		if (n%i == 0) return 0;
	}
	return 1;
}


/*
 * Função que preenche o array primo da forma:
 * - 1, se o índice for primo;
 * - 0, se o índice não for primo;
 */
void fill_array(int * primo)
{
	int i;
	for (i=0; i<s_size(primo); i++) {
		*(primo+i) = (eh_primo(i));
	}
}


/* Função que retorna a soma dos elementos de um array */
int sum_array(int * primo)
{
	fill_array(primo);
	int i, soma=0;
	for (i=0; i<s_size(primo); i++) {
		soma += primo[i];
	}
	return soma;
}


int main()
{
	int * primo;
	int tamanho;
	scanf("%d", &tamanho);
	primo = malloc(tamanho*sizeof(int));
	printf("%d\n", sum_array(primo));
	
	free(primo);
	
	return 0;
}
