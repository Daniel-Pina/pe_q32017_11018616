#include <stdio.h>

int fibMem [1000] = {0};

/*
 * Fun��o recursiva para encontrar o valor
 * do n-�simo termo da sequ�ncia de Fibonacci,
 * e armazen�-lo em um array de 1000 elementos.
 */
int fib(int n)
{
    if (n == 0) return 0;
    if (n <= 2) return 1;
    if (fibMem[n] != 0) return fibMem[n];
    fibMem[n] = fib(n-1) + fib(n-2);
    return fibMem[n];
}

int main()
{
    int n;
    fibMem [0] = 0;
    fibMem [1] = 1;
    fibMem [2] = 1;
    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}
