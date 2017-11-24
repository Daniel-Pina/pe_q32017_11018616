#include <stdio.h>
#include <stdlib.h>

#define N 100000

/* Troca os elementos de índices m e n do vetor */
void swap(int * v, int m, int n)
{
	int aux;
	aux = v[m];
	v[m] = v[n];
	v[n] = aux;
}

/* Completa o vetor com elementos aleatórios */
int * fill_v_random(int * v)
{
	unsigned int i;
	for (i=0; i<N; i++) {
		v[i] = rand() %N;
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

/* Função de partição */
int partition (int * v, int low, int high)
{
    int pivot = v[high];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

/* Ordenação por QuickSort */
void quicksort(int * v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
    }
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
	quicksort(v, 0, N);
	//print_v_d(v);

	free(v);
	return 0;
}
