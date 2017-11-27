#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	double l, X = (double) x;
	l = log2(X);
	if ((l - floor(l)) == 0) return 0;
    else return 1;
}

ulint f2 (ulint x)
{
	return x&(x-1);
}

int main(void)
{
    ulint i;
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (i=0; i<BIGNUM; i++) {
		soma += f1(i);
	}
	tempo_fim = clock();
	tempo_gasto = ((double)(tempo_fim - tempo_init)) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
	tempo_init = clock();
	for (i=0; i<BIGNUM; i++) {
		soma += f2(i);
	}
	tempo_fim = clock();
	tempo_gasto = ((double)(tempo_fim - tempo_init)) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}
