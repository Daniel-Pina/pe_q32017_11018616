#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{
    if (x > y) {
        return 0;
    }
	return 1;
}

ulint f2(ulint x, ulint y)
{
    ulint X=x, Y=y;
    while ((x > 0)&&(y > 0)) {
        x = x >> 1;
        y = y >> 1;
	}
	if (x == 0)	return Y;
	else return X;
}

int main(void)
{
    int i, j;
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (i=0; i<BIGNUM; i++) {
        for (j=0; j<BIGNUM; j++) {
            soma += f1(i, j);
        }
	}
	tempo_fim = clock();
	tempo_gasto = ((double)(tempo_fim - tempo_init)) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
	tempo_init = clock();
	for (i=0; i<BIGNUM; i++) {
        for (j=0; j<BIGNUM; j++) {
            soma += f2(i, j);
        }
	}
	tempo_fim = clock();
	tempo_gasto = ((double)(tempo_fim - tempo_init)) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
	return 0;
}
