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


/* Função que preenche o array com todos os elementos iguais a 1 */
void fill_array(int * crivo)
{
	int i;
	for (i=0; i<s_size(crivo); i++) {
		*(crivo+i) = 1;
	}
}


/* Função que retorna a soma dos elementos de um array */
int sum_array(int * crivo)
{
	fill_array(crivo);
	
	
	
	
	int i, soma=0;	
	
	for (i=0; i<s_size(crivo); i++) {
		soma += crivo[i];
	}
	return soma;
	
	
	
	
	
	
}


int main()
{
	int * crivo;
	int tamanho;
	scanf("%d", &tamanho);
	crivo = malloc(tamanho*sizeof(int));
	printf("%d\n", sum_array(crivo));
	
	free(crivo);
	
	return 0;
}
