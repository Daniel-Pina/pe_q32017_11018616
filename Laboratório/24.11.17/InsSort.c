#include <stdio.h>
#include <stdlib.h>

#define N 100000

/* Completa o vetor com elementos aleatórios */
int * fill_v_random(int * v)
{
	unsigned int i;
	for (i=0; i<N; i++) {
		v[i] = rand()%N;
	}
	return v;
}

/* Completa o vetor com elementos em ordem crescente */
int * fill_v_cresc(int * v)
{
	unsigned int i;
	for (i=0; i<N; i++) {
		v[i] = i+1;
	}
	return v;
}

/* Completa o vetor com elementos em ordem decrescente */
int * fill_v_decresc(int * v)
{
	unsigned int i;
	for (i=0; i<N; i++) {
		v[i] = N-i;
	}
	return v;
}

/* Imprime os elementos de v (debug) */
void print_v_d(int * v)
{
	unsigned int i;
	for (i=0; i<N; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main()
{
	unsigned int i, j;
	int * v;
	int aux;
	v = malloc(sizeof(int)*N);
	//v = fill_v_random(v);
	//v = fill_v_cresc(v);
	v = fill_v_decresc(v);
	for (i=0; i<N; i++) {
		for (j=i; j>0; j--) {
			while (v[j-1] > v[j]) {
				aux = v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
			}
		}
	}
	//print_v_d(v);

	free(v);
	return 0;
}
