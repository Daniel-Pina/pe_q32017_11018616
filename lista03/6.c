#include <stdio.h>
#include <stdlib.h>

/* Lê o array no formato determinado */
int * read_vetor(int * v, int n)
{
    v = malloc(n*sizeof(int));
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    return v;
}

/* Função extra para ordenação do vetor */
int cmpfunc(const void * a, const void * b)
{
    return (*(int *)a - *(int *)b);
}

/* Imprime a mediana de um vetor */
void print_mediana(int * v, int n)
{
    qsort(v, n, sizeof(int), cmpfunc);
    if (n%2 == 0) {
        printf("%.2lf", (double) (v[(int) n/2]+v[(int) n/2-1])/2);
    }
    else {
        printf("%.2lf", (double) v[(int) (n-1)/2]);
    }
}

int main()
{
    int n;
    int * v;
    scanf("%d", &n);
    v = read_vetor(v, n);

    print_mediana(v, n);

    free(v);
    return 0;
}
