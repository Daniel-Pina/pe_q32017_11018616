#define <stdio.h>

int fibMem [1000];

/* 
 * Função recursiva para encontrar o valor
 * do n-ésimo termo da sequência de Fibonacci,
 * e armazená-lo em um array de 1000 elementos.
 */
int fib (int n)
{
    i f ( n==0) r e t u r n 0 ;
    i f ( n<=2) r e t u r n 1 ;
    /* a l t e r e a l i n h a abai xo */
    r e t u r n f i b ( n-1) + f i b ( n-2);
}

int main()
{
    int n;
    fibMem [1] = 1;
    fibMem [2] = 1;
    scanf("%d", &n);
    printf("%d\n”, fib(n));

    return 0;
}
