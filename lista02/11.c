#include <stdio.h>
#include <math.h>


/* Conversão recursiva de decimal para binário */
int d_to_b(int n)
{
    return d_to_b_TR(n, 0, 0);
}

/* Conversão decimal para binário caudal */
int d_to_b_TR(int n, int bin, int mult)
{
    printf("%d, %d, %d\n", n, bin, mult);
    if (n < 2) return (bin+(n*(pow(10, mult))));
    return (d_to_b_TR(n/2, bin+((n%2)*pow(10, mult)), (mult+1)));
}


/* Conversão recursiva de binário para decimal*/
int b_to_d(int n)
{
    return b_to_d_TR(n, 0, 0);
}

/* Conversão binário para decimal caudal */
int b_to_d_TR(int n, int soma, int mult)
{
    if (n == 0) return soma;
    return (b_to_d_TR(n/10, (n%10)*pow(2, mult)+soma, mult+1));
}


/* Função que seleciona o tipo de conversão desejada */
int conv(int n, int op)
{
    switch (op) {
        case 1:
            return d_to_b(n);
        case 2:
            return b_to_d(n);
        default:
            printf("Operacao invalida");
            return -1;
    }
}


int main()
{
	int n, op;
	scanf("%d %d", &n, &op);
	printf("%d\n", conv(n, op));

	return 0;
}
